#include <iostream>


int main(){
    std::string s = "abc";
    std::string t = "cde";
    s += s + t[1] + s;

    std::cout << s << std::endl; //abcabcdabc
}