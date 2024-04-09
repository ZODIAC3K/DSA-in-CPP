
#include <iostream>
using namespace std;

// Function to count the number of digits in a given number
int countDigits(int number) {
    int count = 0;
    if(number == 0) return 1; // If the number is 0, then it has only 1 digit (0)
    while (number != 0) {
        number /= 10; // Divide the number by 10 to remove the rightmost digit
        count++; // Increment the count of digits
    }
    return count; // Return the total count of digits
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number; // Read the input number from the user

    // Call the countDigits function to count the number of digits in the input number
    int digitCount = countDigits(number);

    // Print the result
    cout << "Number of digits: " << digitCount << endl;

    return 0;
}




