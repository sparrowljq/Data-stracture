typedef int Elemtype;
typedef int Status;
#define MAXSIZE 100
#define OK 0
#define ERROR -1
//定义栈结构类型
typedef struct{
	Elemtype data[MAXSIZE];
	int top;
}Stack;
//栈的基本操作 初始化栈、入栈、出栈、栈是否为空
void initStack(Stack &s);
Status push(Stack &s,Elemtype e);
Status pop(Stack &s,Elemtype &e);
Status isEmpty(Stack s);