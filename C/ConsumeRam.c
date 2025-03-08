#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define AUTHOR "@offensive-vk"
#define DATED "March-8"

int main(void) {
    printf("🛑 WARNING: This program can allocate a large amount of RAM!\n");
    printf("💾 Enter the amount of RAM to consume (in MB): ");

    int ramMB;
    if (scanf("%d", &ramMB) != 1 || ramMB <= 0) {
        printf("❌ Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    size_t ramBytes = (size_t)ramMB * 1024 * 1024;
    printf("🚀 Allocating %d MB of RAM...\n", ramMB);

    // Allocate memory
    char *memory = (char *)malloc(ramBytes);
    if (!memory) {
        printf("❌ Memory allocation failed!\n");
        return 1;
    }

    // Fill memory to prevent optimizations
    memset(memory, 1, ramBytes);

    printf("✅ Memory allocation complete. Press ENTER to release memory and exit...\n");

    getchar(); // Consume leftover newline from scanf
    getchar(); // Wait for ENTER

    // Free memory
    free(memory);
    printf("🔄 Releasing memory... Done!\n");

    return 0;
}
