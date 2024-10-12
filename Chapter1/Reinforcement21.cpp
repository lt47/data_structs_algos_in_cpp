#include <iostream>

int sumOfSmallerOddInts(unsigned int n){
    unsigned int sumOfSmallerOddIntsInSequence = 0;
    //unsigned int i = n;
    while (n > 0){
        // Even number test.
        if (n % 2 != 0){
            sumOfSmallerOddIntsInSequence += n;
        }
        n--;
    }

    return sumOfSmallerOddIntsInSequence;
}

int main(){
    std::cout << sumOfSmallerOddInts(3) << std::endl;
}