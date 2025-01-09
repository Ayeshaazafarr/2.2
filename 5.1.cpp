#include <iostream>
using namespace std;
int main() {
    int number; 
    while (true) {
      cout << "Enter a number: ";
     cin >> number;
    if (number > 10) {
    cout << "Number iz greater  10 ." << endl;
    break;
    }
    cout  << "You entered: " << number << endl;
    }

      return 0;
}
