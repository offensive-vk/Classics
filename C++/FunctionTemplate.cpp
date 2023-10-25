#include<iostream>
#include<conio.h>
#define MAX_BUFFER_SIZE 1026;

// Global Test Function.
template <typename Type1, typename Type2> void Global(Type1 t, Type2 v) {
    
    auto temp1 = t;
    auto temp2 = v;

    std::cout << t << std::endl;
    std::cout << v << std::endl;

    std::cout << "It Works !" << std::endl;
}
template <typename TData> TData Attack(TData data){
    
    std::cout << "\n\n" << std::endl;
    
    int count = 0;
    while(count <= 10){
        std::cout << data << std::endl;
        count++;
    }
    return data;
}
template <typename Def> Def Run(Def value){
    std::cout << value << std::endl;
    return value;
}
int main(int argc, char const *argv[])
{
    std::cout << "\n === Begin Program === \n" << std::endl;

    Global<int, int>(101, 102);
    Attack<double>(555.555);
    Run<bool>(false);

    std::cout << "\n === End Program === \n" << std::endl;
    return 0;
}


