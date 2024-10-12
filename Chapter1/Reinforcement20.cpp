#include <iostream>

int sumOfSmallerInts(unsigned int n){
    /* The sum of number from 1 to n is given by: n(n+1)/2*/
    return ((n*(n+1)/2));
}

int main(){
    std::cout << sumOfSmallerInts(3) << std::endl;
}