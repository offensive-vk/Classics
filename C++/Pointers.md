# What Da Heck is a Pointer?
A pointer in C++ is a variable that stores the memory address of another variable. In other words, it "points" to the location of a variable in memory. Pointers are used to indirectly access and manipulate data stored in memory.

## Pointers in C++. (All Types)

````cpp
// Classic pointers are the most fundamental type of pointers in C++.

```cpp
int* ptr;        // Pointer to an integer
char* charPtr;   // Pointer to a character
float* floatPtr; // Pointer to a float

````

## Constant Pointers

Constant pointers allow you to create pointers that cannot be reassigned to point to another memory location, or to make the data they point to constant.

```cpp
int* const ptr;        // Constant pointer to an integer
const int* ptr;        // Pointer to a constant integer
const int* const ptr;  // Constant pointer to a constant integer
```

## Pointers to Pointers

Pointers to pointers are pointers that hold the address of another pointer.

```cpp
int** ptrPtr;        // Pointer to a pointer to an integer
char** charPtrPtr;   // Pointer to a pointer to a character
float** floatPtrPtr; // Pointer to a pointer to a float
```

## Void Pointers

Void pointers are pointers that have no specific data type associated with them.

```cpp
void* voidPtr; // Pointer to void (can hold any type of pointer)

```

## Smart Pointers (C++11 and later)

Smart pointers are objects that act like pointers but provide additional functionality, such as automatic memory management.

1. **std::unique\_ptr**:
   * `std::unique_ptr`is a smart pointer that owns and manages the memory it points to.
   * It ensures that only one`std::unique_ptr`instance can point to a particular memory location at a time, hence the name "unique".
   * It provides exclusive ownership semantics, meaning when a`std::unique_ptr`is moved or destroyed, the associated resource is released automatically.
   * It is movable but not copyable, which enforces exclusive ownership.
2. **std::shared\_ptr**:
   * `std::shared_ptr`is a smart pointer that provides shared ownership of the dynamically allocated objects.
   * It maintains reference counts internally, and multiple`std::shared_ptr`instances can point to the same resource.
   * The resource is automatically deallocated when the last`std::shared_ptr`pointing to it goes out of scope or is reset.
   * It allows for sharing ownership across multiple parts of a program, making it useful for scenarios like shared data structures or circular references.
3. **std::weak\_ptr**:
   * `std::weak_ptr`is a smart pointer that holds a non-owning ("weak") reference to an object managed by`std::shared_ptr`.
   * It allows access to the resource without affecting its lifetime or reference count.
   * It is useful for breaking circular references between`std::shared_ptr`instances to prevent memory leaks.
   * It can be converted to a`std::shared_ptr`to temporarily take ownership of the resource, but this conversion may fail if the resource has been deleted.

```cpp
std::unique_ptr<int> uniquePtr;  // Unique pointer
std::shared_ptr<int> sharedPtr;  // Shared pointer
std::weak_ptr<int> weakPtr;      // Weak pointer
```

## Function Pointers

Function pointers are pointers that point to functions instead of data variables.

```cpp
int (*funcPtr)(int, int); // Pointer to a function that takes two integers and returns an integer
```

## Array Pointers

Array pointers are pointers that point to arrays.

```cpp
int* arrPtr[5];        // Array of pointers to integers
char* charArrPtr[10];  // Array of pointers to characters
```

## Pointers to Member Functions

Pointers to member functions are pointers that point to member functions of a class.

```cpp
class MyClass {
public:
    void myFunction(int);
};

void (MyClass::*memFuncPtr)(int) = &MyClass::myFunction; // Pointer to a member function
```

***
