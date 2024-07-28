#include <iostream>

int smallestNumber;
int largestNumber;

/*I set the arraySize here because getting the size of a pointer is not possible from the compiler. Reference: https://stackoverflow.com/questions/492384/how-to-find-the-size-of-an-array-from-a-pointer-pointing-to-the-first-element-a*/ 
int arraySize = 10;
/**
 * R-1.2) This method will be used to set the smallest and largest integers belonging to
 * an array.
 * @param *numbers - a pointer to the array of numbers to be considered.
 */
void setSmallestAndLargestIntegers(int *numbers)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (i == 0)
        {
            smallestNumber = numbers[i];
            largestNumber = numbers[i];
        }
        else if (numbers[i] <= smallestNumber)
        {
            smallestNumber = numbers[i];
        }
        else if (numbers[i] >= largestNumber)
        {
            largestNumber = numbers[i];
        }
    }
}

int main()
{
    int numbers[arraySize] = {4232, 42, 41, 55, 1981, 13, 100000, 4428, 122, 12};
    setSmallestAndLargestIntegers(numbers);
    std::cout << smallestNumber << std::endl;
    std::cout << largestNumber << std::endl;
}