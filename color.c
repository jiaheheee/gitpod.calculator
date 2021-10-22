#include<stdio.h>
#include<stdlib.h>
int main(){
    system("color 5");
    printf("question 1:\n");
    printf("John each hand has three apples\nDavid gave him 10 more apples\nHow many apples does John have now?\n");
    printf("answer: (2*3)+10=");
    int a,b,c,d;
    a=2;
    b=3;
    c=10;
    d=a*b+c;
    printf("%d\n",d);
}