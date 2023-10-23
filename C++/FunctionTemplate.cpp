#include<iostream>
#include<conio.h>

// Global Test Function.
template <typename Type1, typename Type2> void Global(Type1 t, Type2 v) {
    
    auto temp1 = t;
    auto temp2 = v;

    std::cout << t << std::endl;
    std::cout << v << std::endl;

    std::cout << "It Works !" << std::endl;
}

int main(int argc, char const *argv[])
{
    std::cout << "\n === Begin Program === \n" << std::endl;

    Global<int, int>(101, 102);
    
    std::cout << "\n === End Program === \n" << std::endl;
    return 0;
}
