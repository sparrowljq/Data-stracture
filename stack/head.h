typedef int Elemtype;
typedef int Status;
#define MAXSIZE 100
#define OK 0
#define ERROR -1
//����ջ�ṹ����
typedef struct{
	Elemtype data[MAXSIZE];
	int top;
}Stack;
//ջ�Ļ������� ��ʼ��ջ����ջ����ջ��ջ�Ƿ�Ϊ��
void initStack(Stack &s);
Status push(Stack &s,Elemtype e);
Status pop(Stack &s,Elemtype &e);
Status isEmpty(Stack s);