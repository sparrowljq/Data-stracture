#include"head.h"
#include<iostream>
using namespace std;
//栈的初始化
void initStack(Stack &s){
	s.top=-1;
}
//入栈操作
Status push(Stack &s,Elemtype e){
	//判断栈是否上溢
	if(s.top==MAXSIZE) return ERROR;
	s.data[++s.top]=e;
	return OK;
}
//出栈操作
Status pop(Stack &s,Elemtype &e){
	//判断栈是否为空
	if(s.top==-1) return ERROR;
	e=s.data[s.top];
	s.top--;
	return OK;
}
//判断栈是否为空
Status isEmpty(Stack s){
	if(s.top==-1)
		return OK;
	return ERROR;
}