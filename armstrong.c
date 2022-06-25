#include<stdio.h>
int main(){
    int n,temp,remainder,result=0;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        remainder=temp%10;
        result+=remainder*remainder*remainder;
        temp/=10;
}
if(result==n){
    printf("number is armstrong");
}
else
printf("not an armstrong");
}