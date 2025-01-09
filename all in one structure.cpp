#include<iostream>
using namespace std;
struct data{
		int id;
		char name[20];
		float marks[5];

	}std1;
	void fun1(data xyz);
	int fun2(int x);

int main(){
	
	cin>>std1.id;
    cin>>std1.name;
    for(int i=0 ; i<5 ; i++){
    	cin>>std1.marks[i];
	}
	fun1(std1);
}
void fun1(data xyz){
	int min;
	for(int i= 0 ; i<5 ; i ++){
		if(min<std1.marks[0])
		min=xyz.marks[i];
		}
		cout<<fun2(min);
	}
	int fun2(int x)
	{
		int ans;
		data abc={20, "ayesha ", {89,99,88,77,66}};
		ans=x+abc.marks[4];
		return (ans);
	}

