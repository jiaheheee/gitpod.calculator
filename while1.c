#include<stdio.h>//这里是for很多号码求和
#include<stdlib.h>
int main(){
    int a,b;
    a=0;
    b=1;
    while (b<10){
    b=b*a;
    a=a+1;
    printf("%d",b);
    }
}