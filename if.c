#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("这是验证正负的笨蛋计算机\n请把要计算的号码输入进来\neg.3.5 4.6\n");
    printf("加法请按“a”\n减法请按“s”\n乘法请按“m”\n除法请按“d”");
    float a,b,c,e,f,g,h,i,j,k,l,m,n;
    if scanf("%f %f",&a,&b);
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
    printf("这里是减法，如果又不要的话就按'-1 1'咯\n");
    scanf("%f %f",&e,&f);
    g=e+f;
    if (g!=0)
    printf("%f+%f=%f\n",e,f,g);
    if (g>0)
        printf("他是正数\n");
    if (g<0)
        printf("他是负数\n");
    if (g!=0)
        return 0;
    printf("丢你啊 将多事,\n你知道弄乘法很麻烦的吗\n如果你要除法的话就按'1 0'\n");
    scanf("%f %f",&h,&i);
    j=h*i;
    if (j!=0)
        printf("%f*%f=%f\n",h,i,j);
    if (j>0)
        printf("他是正数\n");
    if (j<0)
        printf("他是负数\n");
    if (j!=0)
        return 0;
    printf("除法部门在此\n年轻人你也是经过很多步骤才能见到我啊\n");
    scanf("%f %f",&k,&l);
    m=k*l;
    printf("%f*%f=%f\n",k,l,m);
    if (m>0)
        printf("他是正数\n");
    if (m<0)
        printf("他是负数\n");
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
char main(){
    float a,b,c,d,e,f;
    char A,z,y;
    scanf("%c",&A);
    if ("A='z'")
        printf("加法\n");
    printf("%c",A);
    if ("A='z'")
        scanf("%f %f",&a,&b);
    c=a+b;
    printf("%f+%f=%f\n",a,b,c);
    return 0;
    if ("A='y'")
        printf("减法\n");
    if ("A='y'")
        scanf("%f %f",&d,&e);
    f=d-e;
    printf("%f-%f=%f\n",d,e,f);
    return 0;
}