#include <iostream>

//using namespace std .
/*Intentionally not using std namespace to better understand what the library provides. 
A namespace groups related names that are comprised of complex objects, classes, functions, etc. */

bool isMultiple(long n, long m){
    if((n % m) == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    // Can use std::endl or "\n"
    std::cout << isMultiple(30, 5) << std::endl; 
}