#include<iostream>
#include"head.h"
using namespace std;
int main(){
	Elemtype temp=0;
	Stack s;
	initStack(s);
	push(s,1);
	push(s,2);
	push(s,3);
	cout<<"栈内的元素依次是(从栈顶到栈底):3,2,1"<<endl;
	cout<<"判断栈是否为空:"<<isEmpty(s)<<endl;
	pop(s,temp);
	cout<<"栈内元素依次出栈:"<<temp<<",";
	pop(s,temp);
	cout<<temp<<",";
	pop(s,temp);
	cout<<temp<<endl;
	return 0;

}