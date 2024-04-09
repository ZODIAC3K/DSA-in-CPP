#include <iostream>

using namespace std;

int main() {

    // Naive approach
    int n, count = 0, numberwith3divisor = 0;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 3) {
            numberwith3divisor++;
        }
        count = 0; // Reset count for the next number
    }

    cout << "Number of integers with exactly 3 divisors: " << numberwith3divisor << endl;

    return 0;
}
