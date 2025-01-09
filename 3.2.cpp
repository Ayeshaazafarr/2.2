#include <iostream>
using namespace std;

int main() {
    float num1, num2 , num3;
    cout <<"Enter the first number: ";
    cin >> num1;
    cout <<"Enter the second number: ";
    cin >> num2;
      cout <<"Enter the third number: ";
    cin >> num3;
    if (num1 > num2 && num1>num3){
    	cout<<"no 1 is largest"<<endl;
	}   else if (num2 > num1 && num2>num3){
		cout<<"NO 2 is largest"<<endl;
	}else{
		cout<<"NO 3 IS LARGEST ";
	}
    return 0;
}
