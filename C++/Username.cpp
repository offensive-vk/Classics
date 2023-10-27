#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

class BadLengthException : public exception{
    private:
        int n;
    public:
        BadLengthException(int a){
            this->n = a;
        }
        int what(){
            return n;
        }
};
