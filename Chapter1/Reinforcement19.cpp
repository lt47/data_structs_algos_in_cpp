#include <iostream>

/*Want to get into the habit of using unsigned int when appropriate because -
"Unsigned integers represent only non-negative integers and have a larger 
range of positive numbers than signed integers because the number of bits is the same for both representations. "*/
bool isTwoPower(unsigned int i){
    /* An easy way to tell if an int is a power of 2 using binary, 
    is to see if there is only one 1 in the binary representation followed by 0s. */
    /* Next we can use the bitwise operator '&' to compare both i and i -1. If they share the same bit number of 1 and placement 
    at any point, it will return 1 and it will return 0 otherwise. That is, if both the bits are 1, then it results is also 1; otherwise, the result is 0. Since ints with a power of 2 only have one 1 and there is an additional digit in power of 2 
    binary representations that the previous int does not contain, it is a safe assumption. E.g. 8 is represented by 00001000 and 7 is represented by 00000111. 
    Assuming an 8 bit size is used to hold the binary numbers. */
    if((i & (i - 1)) == 0){
        return true;
    }
    else return false;
}

int main(){
    std::cout << isTwoPower(4) << std::endl;
}