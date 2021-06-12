#include<bits/stdc++.h>
using namespace std;
#define CH 80
/*
   输入一页文字，
   程序可以统计出文字、数字、空格的个数；
   静态存储一页文章，每行最多不超过80个字符，共N行。
*/
typedef struct Node{
    char ch[2];
    struct Node *next;
}Node;

typedef struct List{
	int length;
    Node data[81];
    Node *head;
	Node *tail;
}LString,*LinkLString;

void input(LString &S,int n){
    *LinkLString p=S;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=80;j++)
            cin>>
    }
}

void count(LString S){//

}

void compare(LString S,string ch){//

}

void del(LString &S,string ch){//

}
int mune(){
    int x;
    cout<<"1) 文本输入"<<endl;
    cout<<"2）统计出其中英文字母数和空格数及整篇文章总字数；"<<endl;
    cout<<"3）统计某一字符串  在文章中出现的次数，并输出该次数；/n\t"<<endl;
    cout<<"4）删除某一子串，并将后面的字符前移。/n"<<endl;
    cout<<"5）打印文本"<<endl;
    cout<<"请做出你的选择：";
    cin>>x;
    return x;
}

int main(){
    LString S;
    int n;
    while(1){
        switch(mune()){
            case 1:{break;}
            case 2:{break;}
            case 3:{break;}
            case 4:{break;}
            case 5:{break;}
            default:{cout<<"你有一个错误的输入请重新输入"<<endl;break;}
        }
    }
   

    return 0;
}
