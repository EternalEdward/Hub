#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
char flag = 'Y';
typedef struct {
	char ID[20];//编号
	char name[20];//姓名
	char adder[20];//地址
}DataType;//学生信息所包含的内容
typedef struct Node {
	DataType data;//学生信息
	struct Node *next, *prior;
}LNode, *LinkList;
void CreateLinkList(LinkList L) {
	cout << "输入初始学生信息" << endl;
	LinkList s, p;
	DataType x;
	cout << "请依次输入学号、姓名、地址" << endl;
	gets(x.ID);
	cout << "输入的学号：" << x.ID << endl;
	printf("\n");
	gets(x.name);
	cout << "输入的姓名：" << x.name << endl;
	printf("\n");
	gets(x.adder);
	cout << "输入的地址：" << x.adder << endl;
	printf("\n");
	while (flag == 'Y' || flag == 'y') {
		s = (LinkList)malloc(sizeof(LNode));
		strcpy(s->data.ID, x.ID);
		cout << "存入的学号:" << x.ID << endl;
		strcpy(s->data.name, x.name);
		cout << "存入的姓名:" << x.name << endl;
		strcpy(s->data.adder, x.adder);
		//s->data.adder = x.adder;
		cout << "存入的地址:" << x.adder << endl;
		//链表的操作
		if (L->next == NULL) {
			s->next = NULL;
			s->prior = L;
			L->next = s;
		}
		//对于prior进行讨论
		else {
			s->next = L->next;
			L->next->prior = s;
			L->next = s;
			s->prior = L;
		}
		cout << "是否继续输入 ? <Y or N>" << endl;
		cin >> flag;
		getchar();
		cout << "请依次输入学号、姓名、地址" << endl;
		if (flag == 'N' || flag == 'n')
			break;
		gets(x.ID);
		cout << "输入的学号：" << x.ID << endl;
		gets(x.name);
		cout << "输入的姓名：" << x.name << endl;
		gets(x.adder);
		cout << "输入的地址：" << x.adder << endl;
	}
}
void print(LinkList L) {
	//用来打印目标节点信息的函数
	if (L != NULL) {
		cout << "学号：" << L->data.ID << endl;
		cout << "姓名：" << L->data.name << endl;
		cout << "地址：" << L->data.adder << endl;
	}
	else
		cout << "没有" << endl;
}
void printall(LinkList L) {
	//打印所有已经储存的信息
	LinkList p;
	p = L->next;
	while (p != NULL) {
		cout << "学号：" << p->data.ID << endl;
		cout << "姓名：" << p->data.name << endl;
		cout << "地址：" << p->data.adder << endl;
		cout << endl;
		p = p->next;
	}
}
LinkList se(LinkList L) {
	//查找函数
	char x[20];
	LinkList p = L->next;
	cout << "输入关键字";
	gets(x);
	while (p != NULL) {
		if (strcmp(p->data.adder, x) == 0 || strcmp(p->data.ID, x) == 0 || strcmp(p->data.name, x) == 0) {
			return p;
		}
		p = p->next;
	}
	return NULL;
}
void de(LinkList L) {
	//删除函数
	LinkList p, n;
	if (L == NULL)
		cout << "没有这个信息" << endl;
	else {
		if (L->next != NULL&&L->prior != NULL) {
			p = L->prior;
			n = L->next;
			L->prior->next = n;
			L->next->prior = p;
		}
		if (L->next == NULL) {
			L->prior = NULL;
		}
		free(L);
	}
}
void add(LinkList L) {
	//实现添加信息作用的函数
	LinkList s;
	DataType x;
	cout << "请依次输入学号、姓名、地址" << endl;
	gets(x.ID);
	gets(x.name);
	gets(x.adder);
	s = (LinkList)malloc(sizeof(LNode));
	strcpy(s->data.ID, x.ID);
	strcpy(s->data.name, x.name);
	strcpy(s->data.adder, x.adder);
	L->next->prior = s;
	s->prior = L;
	s->next = L->next;
	L->next = s;
}
void menu() {
	cout << "\t              通讯录管理系统              " << endl;
	cout << "\t1.创建通讯录                2.添加信息" << endl;
	cout << "\t3.进行查找并打印其信息      4.删除信息" << endl;
	cout << "\t5.打印所有人信息            6.退出该系统" << endl;
	cout << "输入你的选项：";
}
int main() {
	int i;
	LinkList L;
	L = (LinkList)malloc(sizeof(Node));
	L->next = NULL;
	L->prior = NULL;
	while (1) {
		menu();
		cin >> i;
		getchar();
		switch (i) {
		case 1:CreateLinkList(L);break;
		case 2:add(L);break;
		case 3:print(se(L));break;
		case 4:de(se(L));break;
		case 5:printall(L);break;
		case 6:exit(1);
		default:cout << "输入错误，请重新输入" << endl;break;
		}
	}
	return 0;
}
