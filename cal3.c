#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A,a,b,c;
    printf("笨蛋计算机质因数版 \n  ps:这个计算机只会显示整数罢了,所以0.多的时候是不准
    \n加法按0    减法按1\n乘法按2    除法按3\n");
    scanf("%d",&A);
    if (A==0) 
    {
        printf("加法\n");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("%d+%d=%d\n",a,b,c);
    }
    if (A==1)
    {
        printf("减法\n");
        scanf("%d %d",&a,&b);
        c=a-b;
        printf("%d-%d=%d\n",a,b,c);
    }
    if (A==2){
        printf("乘法\n");
        scanf("%d %d",&a,&b);
        c=a*b;
        printf("%d*%d=%d\n",a,b,c);
    }
    if (A==3)
    {
        printf("除法\n");
        scanf("%d %d",&a,&b);
        c=a/b;
        printf("%d/%d=%d\n",a,b,c);
    }
        if (c>0)
            printf("他是正数\n");
        if (c<0)
            printf("他是负数\n");
        printf ("其100以内质因数\n");
        if (c % 2==0)   printf("2\n");
        if (c % 3==0)   printf("3\n");
        if (c % 5==0)   printf("5\n");
        if (c % 7==0)   printf("7\n");
        if (c % 11==0)  printf("11\n");
        if (c % 13==0)  printf("13\n");
        if (c % 17==0)  printf("19\n");
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
    return 0;    
}
