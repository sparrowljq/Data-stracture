#include"head.h"
#include<iostream>
using namespace std;
//ջ�ĳ�ʼ��
void initStack(Stack &s){
	s.top=-1;
}
//��ջ����
Status push(Stack &s,Elemtype e){
	//�ж�ջ�Ƿ�����
	if(s.top==MAXSIZE) return ERROR;
	s.data[++s.top]=e;
	return OK;
}
//��ջ����
Status pop(Stack &s,Elemtype &e){
	//�ж�ջ�Ƿ�Ϊ��
	if(s.top==-1) return ERROR;
	e=s.data[s.top];
	s.top--;
	return OK;
}
//�ж�ջ�Ƿ�Ϊ��
Status isEmpty(Stack s){
	if(s.top==-1)
		return OK;
	return ERROR;
}