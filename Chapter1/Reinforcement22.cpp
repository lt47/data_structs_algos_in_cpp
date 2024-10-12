#include <iostream>
#include <cmath>

int numOfDivisionsByTwo(double x){
    unsigned int numOfDivisionsByTwo = 0;
    double n = x;

    while (std::fmod(n, 2.0) == 0.0){
        // Even number test.
        numOfDivisionsByTwo += 1;
        n = n / 2;
    }

    return numOfDivisionsByTwo;
}

int main(){
    std::cout << numOfDivisionsByTwo(4.0) << std::endl;
}