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

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> //在linux环境下使用sleep，上面就要 #include<unistd.h> ，并且是 sleep(2)=停2秒 
int main(){
    int a,b,c;
    a=1;
    b=1;
    while (a<10){
    b=b*a;
    a=a+1;//a跟b都=1的话，b=b*a a=a+1 的前后顺序就不要紧
    printf("%d\n",b);
    sleep(1); //while每运行一次就停一秒
    }
    sleep(4); //while 运行完后暂停4秒，然后删除上面的东西
    system("clear");
    printf("%d\n",b);
}

}


#include<stdio.h> //可以一直重复使用，but只能整数
#include<stdlib.h>
int main()
{
    int A,a,b,c,d,e;
    float x,y,z;
    printf("普通计算机合体版与笨蛋计算机质因数版\n加法(找质因数）按1      加法（小数点）按2\n");
    printf("减法(找质因数）按3      减法（小数点）按4\n");
    printf("乘法(找质因数）按5      乘法（小数点）按6\n");
    printf("除法(找质因数）按7      除法（小数点）按8\n");
    printf("退出按9\n");
    scanf("%d",&A);
    while (A!=9 ){
    if (A==1) 
    {
        printf("加法 eg. “20 68” \n");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("%d+%d=%d\n",a,b,c);
    }
    if (A==3)
    {
        printf("减法 eg. “44 37”\n");
        scanf("%d %d",&a,&b);
        c=a-b;
        printf("%d-%d=%d\n",a,b,c);
        
    }
    if (A==5)
    {
        printf("乘法 eg. “82 9”\n");
        scanf("%d %d",&a,&b);
        c=a*b;
        printf("%d*%d=%d\n",a,b,c);
    }
    if (A==7)
    {
        printf("除法 eg. “84 5”\n");
        scanf("%d %d",&a,&b);
        c=a/b;
        printf("%d/%d=%d\n",a,b,c);
                printf("其余数为");
        d=a % b; 
        printf("%d\n",d);
    }
    if (c>0)        printf("%d是正数\n",c);
    if (c<0)        printf("%d是负数\n",c);
    printf("%d",c);
    printf("在100以内质因数：\n");
        if (c % 2==0)   printf("2\n");
        if (c % 3==0)   printf("3\n");
        if (c % 5==0)   printf("5\n");
        if (c % 7==0)   printf("7\n");
        if (c % 11==0)  printf("11\n");
        if (c % 13==0)  printf("13\n");
        if (c % 17==0)  printf("17\n");
        if (c % 19==0)  printf("19\n");
        if (c % 23==0)  printf("23\n");
        if (c % 29==0)  printf("29\n");
        if (c % 31==0)  printf("31\n");
        if (c % 37==0)  printf("37\n");
        if (c % 41==0)  printf("41\n");
        if (c % 43==0)  printf("43\n");
        if (c % 47==0)  printf("47\n");
        if (c % 53==0)  printf("53\n");
        if (c % 59==0)  printf("59\n");
        if (c % 61==0)  printf("61\n");
        if (c % 67==0)  printf("67\n");
        if (c % 71==0)  printf("71\n");
        if (c % 73==0)  printf("73\n");
        if (c % 79==0)  printf("79\n");
        if (c % 83==0)  printf("83\n");
        if (c % 89==0)  printf("89\n");
        if (c % 97==0)  printf("97\n");
    printf("加法(找质因数）按1      加法（小数点）按2\n");
    printf("减法(找质因数）按3      减法（小数点）按4\n");
    printf("乘法(找质因数）按5      乘法（小数点）按6\n");
    printf("除法(找质因数）按7      除法（小数点）按8\n");
    printf("退出按9\n");
    scanf("%d",&A);
    system("clear");
    }
}

*/

