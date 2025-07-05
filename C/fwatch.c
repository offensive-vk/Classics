/*
 * fwatch.c - A simple file watcher utility for Linux.
 *
 * This program uses the inotify API to monitor a given directory
 * for file system events like creation, modification, and deletion.
 *
 * What it does:
 * 1. Initializes an inotify instance from the kernel.
 * 2. Adds a "watch" on the directory provided as a command-line argument.
 * 3. Enters an infinite loop, blocking on a `read()` call.
 * 4. When the kernel detects a change in the watched directory, `read()` returns.
 * 5. The program parses the event data from the kernel and prints a
 *    human-readable message describing what happened.
 *
 * To Compile:
 *   gcc -o fwatch fwatch.c
 *
 * To Run:
 *   ./fwatch /path/to/directory
 *   For example, to watch the current directory:
 *   ./fwatch .
 *
 *   Then, in another terminal, create, edit, or delete files in that
 *   directory to see the output. Press Ctrl+C to exit.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/inotify.h>

// Define a buffer size for reading events.
// It's good practice to make this large enough to handle multiple events at once.
#define EVENT_BUF_LEN (1024 * (sizeof(struct inotify_event) + 16))

int main(int argc, char *argv[]) {
    int fd;         // File descriptor for the inotify instance
    int wd;         // Watch descriptor for the directory
    char buffer[EVENT_BUF_LEN];

    // --- 1. Argument Checking ---
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <directory_to_watch>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // --- 2. Initialize Inotify ---
    // Get a file descriptor for a new inotify instance.
    fd = inotify_init();
    if (fd < 0) {
        perror("inotify_init"); // perror prints the error message for the last failed syscall
        exit(EXIT_FAILURE);
    }

    // --- 3. Add a Watch ---
    // We want to know about file creation, deletion, modification, and moves.
    int flags = IN_CREATE | IN_DELETE | IN_MODIFY | IN_MOVED_FROM | IN_MOVED_TO;
    
    // Add the directory from the command line to the watch list.
    wd = inotify_add_watch(fd, argv[1], flags);
    if (wd == -1) {
        fprintf(stderr, "Could not watch %s\n", argv[1]);
        perror("inotify_add_watch");
        exit(EXIT_FAILURE);
    }

    printf("Watching directory: %s\n", argv[1]);
    printf("Press Ctrl+C to stop.\n");

    // --- 4. The Event Processing Loop ---
    for (;;) {
        // Read events from the inotify file descriptor.
        // This read() call will block until one or more events occur.
        ssize_t length = read(fd, buffer, EVENT_BUF_LEN);
        if (length < 0) {
            perror("read");
        }

        // Loop through all the events in the buffer.
        int i = 0;
        while (i < length) {
            // The buffer is a stream of inotify_event structures.
            struct inotify_event *event = (struct inotify_event *) &buffer[i];
            
            // The event->name field is only present if the event is for a file
            // inside the watched directory.
            if (event->len) {
                if (event->mask & IN_CREATE) {
                    printf("CREATE: %s was created.\n", event->name);
                } else if (event->mask & IN_DELETE) {
                    printf("DELETE: %s was deleted.\n", event->name);
                } else if (event->mask & IN_MODIFY) {
                    printf("MODIFY: %s was modified.\n", event->name);
                } else if (event->mask & IN_MOVED_FROM) {
                    printf("MOVE: %s was moved out of the directory.\n", event->name);
                } else if (event->mask & IN_MOVED_TO) {
                    printf("MOVE: %s was moved into the directory.\n", event->name);
                }
            }
            
            // Advance to the next event in the buffer.
            i += sizeof(struct inotify_event) + event->len;
        }
    }

    // --- 5. Cleanup (in a real program, you'd have a signal handler to do this) ---
    // This part is unreachable in this simple example because of the infinite loop.
    printf("Cleaning up and exiting.\n");
    inotify_rm_watch(fd, wd);
    close(fd);

    return 0; // Or exit(EXIT_SUCCESS);
}
