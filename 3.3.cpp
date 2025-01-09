#include<iostream>

using namespace std;
int main(){
	
	int no;
	
	cout<<"Enter a number";
	cin>>no;
	
	if (no%5==0 ){
		cout<<"the number is divisible by 5"<<endl;
		
	}else if (no%7==0) {
		cout<<"the number is divisible by 7"<<endl;
	}else{
		
		cout<<"The is not either divisible 5 or 7";
	}
	
	
	
	
	
	
	
	
	
	return 0;
}

