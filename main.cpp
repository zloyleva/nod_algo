#include <iostream>

int getModuleOfNumbers(int x, int y);
int getUsersNumber(std::string desc);

int main(int argc, char const *argv[])
{
    int a,b;

    a = getUsersNumber("first");
    b = getUsersNumber("second");
    
    if(a > b){
        getModuleOfNumbers(a, b);
    }else{
        getModuleOfNumbers(b, a);
    }

    std::cout << "Result: " << getModuleOfNumbers(a, b) << std::endl;
    return 0;
}

/**
 * 
 */
int getUsersNumber(std::string desc){
    int numb;
    while(true){
        std::cout << "Enter " << desc << " number: ";
        std::cin >> numb;
        
        //todo: need validatin for input
        if(numb > 0){
            return numb;
        }
    }
}

/**
 * important - X is greatest than Y
 */
int getModuleOfNumbers(int x, int y){
    if(x%y == 0){
        return y;
    }

    return getModuleOfNumbers(y, x%y);
}