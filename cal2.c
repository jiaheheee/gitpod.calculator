#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A,a,b,c,d;
    float x,y,z;
    printf("普通计算机合体版与笨蛋计算机质因数版\n加法(找质因数）按1      加法（小数点）按2\n");
    printf("减法(找质因数）按3      减法（小数点）按4\n");
    printf("乘法(找质因数）按5      乘法（小数点）按6\n");
    printf("除法(找质因数）按7      除法（小数点）按8\n");
    scanf("%d",&A);
    if (A==1) 
    {
        printf("加法 eg. “20 68” \n");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("%d+%d=%d\n",a,b,c);
    }
    if (A==2)
    {
        printf("加法（小数点） eg. “84 98”\n");
        scanf("%f %f",&x,&y);
        z=x+y;
        printf("%f+%f=%f\n",x,y,z);
        if (z>0)        printf("%f是正数\n",z);
        if (z<0)        printf("%f是负数\n",z);
        return 0;
    }
    if (A==3)
    {
        printf("减法 eg. “44 37”\n");
        scanf("%d %d",&a,&b);
        c=a-b;
        printf("%d-%d=%d\n",a,b,c);
    }
    if (A==4)
    {
        printf("减法（小数点） eg. “60.3 48”\n");
        scanf("%f %f",&x,&y);
        z=x-y;
        printf("%f-%f=%f\n",x,y,z);
        if (z>0)        printf("%f是正数\n",z);
        if (z<0)        printf("%f是负数\n",z);
        return 0;
    }
    if (A==5)
    {
        printf("乘法 eg. “82 9”\n");
        scanf("%d %d",&a,&b);
        c=a*b;
        printf("%d*%d=%d\n",a,b,c);
    }
    if (A==6)
    {
        printf("乘法（小数点） eg. “21 90.5”\n");
        scanf("%f %f",&x,&y);
        z=x*y;
        printf("%f%f=%f\n",x,y,z);
        if (z>0)        printf("%f是正数\n",z);
        if (z<0)        printf("%f是负数\n",z);
        return 0;
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
    if (A==8)
    {
        printf("除法（小数点） eg. “84.5 98”\n");
        scanf("%f %f",&x,&y);
        z=x/y;
        printf("%f/%f=%f\n",x,y,z);
        if (z>0)        printf("%f是正数\n",z);
            else        printf("%f是负数\n",z);
        return 0;
    }
    if (c>0)        printf("%d是正数\n",c);
    if (c<0)        printf("%d是负数\n",c);
    if (c==0) return 0;
    if (c==1) return 0;
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
    return 0;    
}
