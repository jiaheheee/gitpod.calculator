#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("这是验证正负的笨蛋计算机\n请把要计算的号码输入进来\neg.3.5 4.6\n");
    printf("这里是减法，如果不是要减法的话请按'1 1'\n");
    float a,b,c,e,f,g;
    scanf("%f %f",&a,&b);
    c=a-b;
    if (c!=0)
        printf("%f-%f=%f\n",a,b,c);
    if (c>0)
        printf("他是正数\n");
    if (c<0)
        printf("他是负数\n");
    if (c!=0)
        return 0;
    printf("这里就是你这个臭婊子要的加法了\n");
    scanf("%f %f",&e,&f);
    g=e+f;
    printf("%f+%f=%f\n",e,f,g);
    if (g>0)
        printf("他是正数\n");
    if (g<0)
        printf("他是负数\n");
}