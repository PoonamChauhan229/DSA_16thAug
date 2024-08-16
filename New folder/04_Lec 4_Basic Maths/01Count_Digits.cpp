#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    cout << n << " is the number" << endl;

    int count = 0;
    while (n > 0) {
        int countDigit = n % 10; // This line is unnecessary unless you're using countDigit elsewhere
        count++;
        n = n / 10; // Update n to remove the last digit
    }

    cout << "Number of digits: " << count << endl;
    return 0; // Return 0 from main to indicate successful execution
}
