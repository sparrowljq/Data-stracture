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
	cout<<"ջ�ڵ�Ԫ��������(��ջ����ջ��):3,2,1"<<endl;
	cout<<"�ж�ջ�Ƿ�Ϊ��:"<<isEmpty(s)<<endl;
	pop(s,temp);
	cout<<"ջ��Ԫ�����γ�ջ:"<<temp<<",";
	pop(s,temp);
	cout<<temp<<",";
	pop(s,temp);
	cout<<temp<<endl;
	return 0;

}