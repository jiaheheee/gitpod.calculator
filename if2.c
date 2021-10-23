#include<stdio.h>
#include<stdlib.h>
int main(){
    float a,b,c;
    int A;
    printf("这里是笨蛋计算机进阶版\n加法按0\n减法按1\n乘法按2\n除法按3\n");
    scanf("%d",&A);
    if (A==0) {
        printf("加法\n");
        scanf("%f %f",&a,&b);
        c=a+b;
        printf("%f+%f=%f\n",a,b,c);
        if (c>0)
            printf("他是正数\n");
        if (c<0)
            printf("他是负数\n");
        return 0;
    }
    if (A==1){
        printf("减法\n");
        scanf("%f %f",&a,&b);
        c=a-b;
        printf("%f-%f=%f\n",a,b,c);
        if (c>0)
            printf("他是正数\n");
        if (c<0)
            printf("他是负数\n");
        return 0;
    }
    if (A==1){
        printf("减法\n");
        scanf("%f %f",&a,&b);
        c=a-b;
        printf("%f-%f=%f\n",a,b,c);
        if (c>0)
            printf("他是正数\n");
        if (c<0)
            printf("他是负数\n");
        return 0;
    }
    if (A==2){
        printf("乘法\n");
        scanf("%f %f",&a,&b);
        c=a*b;
        printf("%f*%f=%f\n",a,b,c);
        if (c>0)
            printf("他是正数\n");
        if (c<0)
            printf("他是负数\n");
        return 0;
    }
    if (A==3){
        printf("除法\n");
        scanf("%f %f",&a,&b);
    c=a/b;
    printf("%f/%f=%f\n",a,b,c);
    if (c>0)
        printf("他是正数\n");
    if (c<0)
        printf("他是负数\n");
    return 0;
    }
}
