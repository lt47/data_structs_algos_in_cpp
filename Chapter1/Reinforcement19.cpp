#include <iostream>
#include <bitset>

/*Want to get into the habit of using unsigned int when appropriate because -
"Unsigned integers represent only non-negative integers and have a larger 
range of positive numbers than signed integers because the number of bits is the same for both representations. "*/
bool isTwoPower(unsigned int i){
    /* An easy way to tell if an int is a power of 2 using binary, 
    is to see if there is only one 1 in the binary representation followed by 0s. */
    std::string binary = std::bitset<8>(i).to_string(); //to binary
}