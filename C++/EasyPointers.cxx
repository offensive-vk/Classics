#include <iostream>
#include <memory>
#include <vector>

class Widget {
public:
    Widget(int id) : id(id) {
        std::cout << "Widget " << id << " created.\n";
    }
    ~Widget() {
        std::cout << "Widget " << id << " destroyed.\n";
    }
    int getId() const { return id; }
private:
    int id;
};

// Function demonstrating std::unique_ptr
void uniquePtrExample() {
    std::cout << "\n--- unique_ptr Example ---\n";
    // std::unique_ptr is used when you want sole ownership of a resource.
    std::unique_ptr<Widget> widget1 = std::make_unique<Widget>(1);

    // Ownership can be transferred
    std::unique_ptr<Widget> widget2 = std::move(widget1);
    if (!widget1) {
        std::cout << "widget1 is now nullptr.\n";
    }
}

// Function demonstrating std::shared_ptr
void sharedPtrExample() {
    std::cout << "\n--- shared_ptr Example ---\n";
    // std::shared_ptr is used when you want shared ownership of a resource.
    std::shared_ptr<Widget> widget1 = std::make_shared<Widget>(2);
    {
        std::shared_ptr<Widget> widget2 = widget1; // Shared ownership
        std::cout << "widget1 use count: " << widget1.use_count() << "\n";
        std::cout << "widget2 use count: " << widget2.use_count() << "\n";
    } // widget2 goes out of scope here

    std::cout << "widget1 use count after widget2 is destroyed: " << widget1.use_count() << "\n";
}

// Function demonstrating std::weak_ptr
void weakPtrExample() {
    std::cout << "\n--- weak_ptr Example ---\n";
    // std::weak_ptr is used to reference a shared resource without affecting its reference count.
    std::shared_ptr<Widget> widget1 = std::make_shared<Widget>(3);
    std::weak_ptr<Widget> weakWidget = widget1; // Weak reference

    {
        std::shared_ptr<Widget> widget2 = weakWidget.lock(); // Convert weak_ptr to shared_ptr
        if (widget2) {
            std::cout << "widget2 (from weakWidget) use count: " << widget2.use_count() << "\n";
        } else {
            std::cout << "widget2 is nullptr\n";
        }
    } // widget2 goes out of scope here

    // Check if the weak_ptr is still valid
    if (auto widget2 = weakWidget.lock()) {
        std::cout << "widget2 (from weakWidget) use count: " << widget2.use_count() << "\n";
    } else {
        std::cout << "widget2 is nullptr\n";
    }
}

int main() {
    uniquePtrExample();
    sharedPtrExample();
    weakPtrExample();
    return 0;
}
