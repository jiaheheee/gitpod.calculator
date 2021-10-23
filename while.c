#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    a=3;
    while (a<100){
        a=a+3;
        if (a%3==0||a%10==3);
        printf("%d\n",a);
    }

/*#include<stdio.h>//这里是for很多号码求和,并且把每一轮加到的号码写出来
#include<stdlib.h>
int main(){
    int a,b;
    a=0;
    b=1;
    while (b<=100){
    b=b+a;
    a=a+1;
    printf("%d\n",b);}
}

#include<stdio.h>//这里是for只显示很多号码求和
#include<stdlib.h>
int main(){
    int a,b;
    a=0;
    b=1;
    while (b<=100){
    b=b+a;
    a=a+1;
    }
    printf("%d\n",b);
}


#include<stdio.h>//这里是for显示和计算 10！
#include<stdlib.h>
int main(){
    int a,b,c;
    a=0;
    b=1;
    while (a<10){
    a=a+1;//如果a=0，a=a+1一定要在  b=b*a的前面，不然只会无限重复 1*0=0
    b=b*a;
    printf("%d\n",b);
    }
    printf("%d\n",b);
}


#include<stdio.h>//这里是for只显示很多号码的积
#include<stdlib.h>
int main(){
    int a,b,c;
    a=1;
    b=1;
    while (a<10){
    b=b*a;
    a=a+1;//a跟b都=1的话，b=b*a a=a+1 的前后顺序就不要紧
    printf("%d\n",b);
    }
    printf("%d\n",b);
}


*/

