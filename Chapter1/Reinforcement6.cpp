#include <iostream>

int main(){
    double* dp[10];
    // Reference for this solution is - https://stackoverflow.com/questions/26822396/assigning-elements-in-an-array
    for (int i = 0; i < 10; i++) {
        // Allocate the space for it
        dp[i] = new double;
        // Initialize it.
        *(dp[i]) = 0.0;
    }
    return 0;
}
