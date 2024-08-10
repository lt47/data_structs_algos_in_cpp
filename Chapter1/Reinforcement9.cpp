#include <iostream>

void printArray(int** A, int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

/** Delegation of responsibility. This is responsible for passing the array and is a very practical use of pointers and references. */
void fill2DArray(int**& twoDArray, int numberOfRows, int numberOfColumns){
    int randomValue = 3;
    for (int i = 0; i < numberOfRows; i++){
        for (int j = 0; j < numberOfColumns; j++){
            twoDArray[i][j] = randomValue++;
        }
    }

}

void create2DArray(int**& twoDArray, int numberOfRows, int numberOfColumns){
    /* why is it necessary to dynamically allocate memory for a single integer variable here? Why wont int* [rows] suffice. */
    // Maybe because int* [rows] doesnt reference anything that exists. 
    twoDArray = new int*[numberOfRows];
    for (int i = 0; i < numberOfRows; i++){
        twoDArray[i] = new int[numberOfColumns];
    }
}

int main(){
    int numberOfRows = 2;
    int numberOfColumns = 2;
    // Create 2D array.
    int** twoDArray; 
    create2DArray(twoDArray, numberOfRows, numberOfColumns);
    fill2DArray(twoDArray, numberOfRows, numberOfColumns);
    printArray(twoDArray, numberOfRows, numberOfColumns);
    
}