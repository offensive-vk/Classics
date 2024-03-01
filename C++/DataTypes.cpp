#include <iostream>
#include <string>

int main() {
    // Fundamental data types
    bool booleanVariable = true;
    char charVariable = 'A';
    int intVariable = 123;
    float floatVariable = 3.14f;
    double doubleVariable = 3.14159;

    // Derived data types
    int* pointerVariable = &intVariable;
    std::string stringVariable = "Hello, world!";
    std::pair<int, char> pairVariable = std::make_pair(42, 'X');
    std::tuple<int, float, std::string> tupleVariable = std::make_tuple(1, 2.3f, "Tuple");

    // User-defined data types (classes)
    class MyClass {
    public:
        int memberVariable;
        void memberFunction() {
            std::cout << "Inside member function" << std::endl;
        }
    };

    MyClass classVariable;
    classVariable.memberVariable = 100;

    // Display values
    std::cout << "Boolean variable: " << booleanVariable << std::endl;
    std::cout << "Character variable: " << charVariable << std::endl;
    std::cout << "Integer variable: " << intVariable << std::endl;
    std::cout << "Float variable: " << floatVariable << std::endl;
    std::cout << "Double variable: " << doubleVariable << std::endl;

    std::cout << "Pointer variable: " << pointerVariable << std::endl;
    std::cout << "String variable: " << stringVariable << std::endl;
    std::cout << "Pair variable: (" << pairVariable.first << ", " << pairVariable.second << ")" << std::endl;
    std::cout << "Tuple variable: (" << std::get<0>(tupleVariable) << ", " << std::get<1>(tupleVariable) << ", "
              << std::get<2>(tupleVariable) << ")" << std::endl;

    std::cout << "Class member variable: " << classVariable.memberVariable << std::endl;
    classVariable.memberFunction();

    return 0;
}
