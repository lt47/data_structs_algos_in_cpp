#include <iostream>
/**Reinforcement 8*/
bool isMultiple(long& n, long& m){
    int i;
    
    /*The for loop is only necessary when i needs to be determine. Otherwise, the modulus operator could have been used to determine if n is a valid multiple. */ 
    for(i=0; i<n; i++){
        if(n == m*i){
            std::cout << true << std::endl;
            return true;
        }
    }
    std::cout << false << std::endl;
    return false;
}
int main(){
    long int exampleMultiple = 30;
    long int example = 5;
    isMultiple(exampleMultiple, example);
    
}