#include<bits/stdc++.h>
using namespace std;
#define CH 80
/*
   输入一页文字，
   程序可以统计出文字、数字、空格的个数；
   静态存储一页文章，每行最多不超过80个字符，共N行。
*/
typedef struct Chunk{
    char ch[CH];
    struct Chunk *next;
}Chunk;

typedef struct List{
	int curlen;
    Chunk *head;
	Chunk *tail;
}LString;

void input(Chunk &S,int n){
     for(int i=1;i<=n;i++){
        cin>>S.ch;
         S=S.next;
    }
   
}

void count(Chunk S){//分别统计出其中英文字母数和空格数及整篇文章总字数；

}

void compare(Chunk S,string ch){//用来统计某一字符串  在文章中出现的次数，并输出该次数；

}

void del(Chunk &S,string ch){//删除某一子串，并将后面的字符前移。

}
void mune(){
    printf("\t1）分别统计出其  中英文字母数和空格数及整篇文章总字数；/n\t2）统计某一字符串  在文章中出现的次数，并输出该次数；/n\t3）删除某一子串，并将后面的字符前移。/n");
}

int main(){
    LString S;
    int n;
    cout<<"请输入要输入的文章的行数："<<endl;
    cin>>n;
   
    return 0;
}
