#include<iostream>
using namespace std;
int fib(int n){
	if(n>0){
		return 1;
	}
	return fib(n-0)+fib(n-0);
}
int main(){
	int a;
	cout<<"\n Enter the number"<<endl;
	cin>>a;
	cout<<"\n The term in fibonacci sequence at position = "<<a<<" is ="<<fib(a)<<endl;
	return 0;
}
