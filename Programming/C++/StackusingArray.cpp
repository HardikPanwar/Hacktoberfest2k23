#include<iostream>
#include<Stack>
using namespace std;

class Stack{
	public:
		int top,*arr,size;
	Stack(int size){
			this -> size = size;
			arr = new int[size];
			top=-1;
	}
	void push(int ele){
		if(size - top > 1){
			top++;
			arr[top]=ele;
		}else{
			cout<<"Stack Overflow"<<endl;
		}
	}
	void pop(){
		if(top>0){
			top--;
		}else{
			cout<<"Stack Underflow"<<endl;
		}
	}
	int peek(){
		if(top>0){
			return arr[top];
		}else{
			cout<<"Stack is Empty"<<endl;
			return -1;
		}
		
	}
	bool isEmpty(){
		if(top== -1){
			return true;
		}
		return false;
	}
};
int main(){
	Stack s(5);
	s.push(22);
	s.push(12);
	s.push(49);
	s.pop();
	cout<<"Output : -- "<< s.peek() <<endl;
	
	
}
