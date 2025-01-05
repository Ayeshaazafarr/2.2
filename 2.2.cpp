#include <iostream>
using namespace std;
int main() {
    int num1, num2;

    // Taking input for two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    // Comparing the numbers and displaying results
    cout << "\nComparison Results:" << endl;
    cout << num1 << " == " << num2 << ": " << (num1 == num2) << endl;
    cout << num1 << " != " << num2 << ": " << (num1 != num2) << endl;
    cout << num1 << " > " << num2 << ": " << (num1 > num2) << endl;
    cout << num1 << " < " << num2 << ": " << (num1 < num2) << endl;
    cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << endl;
    cout << num1 << " <= " << num2 << ": " << (num1 <= num2) << endl;

    return 0;
}
