#include<stdio.h>
int main(){
    int n,temp,reverse=0,remainder;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        remainder=temp%10;
        reverse=reverse*10+remainder;
        temp/=10;
    }
    if(reverse==n){
        printf("given number is palindrom");
    }
    else
    printf("not pallindrom");
}