#include <iostream>



// Unnecessary to pass by reference here. Just practicing. Would only pass by reference when I want to modify the actual arg being passed.
/* This method assumes that the input is a positive integer. It would be impossible for negative integers. */
int sumOfNumbersLessThanInput(int& x){
    //C++ does not initialize integer variables to zero by default.
    int sum = 0;
    for (int i = 0; i < x; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int x;

    std::cout << "Input an integer and an output will be provided of the sum of numbers less than the input" << std::endl;
    std::cin >> x;
    std::cout << sumOfNumbersLessThanInput(x) << std::endl;
}