#include<bits/stdc++.h>
using namespace std;
#define CH 80
/*
   输入一页文字，
   程序可以统计出文字、数字、空格的个数；
   静态存储一页文章，每行最多不超过80个字符，共N行。
*/
typedef struct Node{//as word
    char ch[2];
    struct Node *next;
}Node;

typedef struct List{//as line
	int length;
    Node data[81];
    Node *head;
	Node *tail;
}LString,*LinkLString;

/*void input(LString &S,int n){
    cout<<"每行文本请以2个空格结束"<<endl;
    Node *p;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=80;j++){
            cin>>p->data[i]->ch;
            if(p.data[i].ch=="  "){
                    break;
            }
            p.length++;
        }
    }
}*/

void tocount(LString S){//// 统计出其中英文字母数和空格数及整篇文章总字数；

}

void strcount(LString S){//统计某一字符串  在文章中出现的次数，并输出该次数；


}

void compare(LString S,string ch){//

}

void del(LString &S,string ch){//

}
int f=1;
int mune(){
    int x;
    if(f){
    cout<<"\n\n\n\t|================================================mune============================================|"<<endl;
    cout<<"\t|1) Input the message                                                                            |"<<endl;//cout<<"1) 文本输入"<<endl;
    cout<<"\t|2) Caculate the number of word and blank ,and count the totle number of the whole message's word|"<<endl;// 统计出其中英文字母数和空格数及整篇文章总字数；
    cout<<"\t|3) Caculate a string's appearing times and output it                                            |"<<endl;//统计某一字符串  在文章中出现的次数，并输出该次数；
    cout<<"\t|4) Delete a string                                                                              |"<<endl;//删除某一子串，并将后面的字符前移
    cout<<"\t|5) Output text                                                                                  |"<<endl;//打印文本
    cout<<"\t|6) Exit                                                                                         |"<<endl;
    cout<<"\t|================================================================================================|"<<endl;
    cout<<"Please input your option:\n"<<endl;
    }
    cin>>x;
    return x;
}

int main(){
    LString S;
    int n;
    while(1){
        switch(mune()){
            case 1:{
                f=1;



                break;
                }

            case 2:{
                f=1;
                break;
                }

            case 3:{
                f=1;

                break;

                }

            case 4:{
                f=1;
                break;
                }

            case 5:{
                f=1;
                break;
                }
            case 6:{
                exit(1);
                }

            default:{
                cout<<"An illegal input ,please input once again:"<<endl;
                f=0;
                break;
                }
        }
    }


    return 0;
}
