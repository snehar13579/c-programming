#include<stdio.h>
int main(){
    int i,j,n,a[100];
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];}
            
        }
    }
    printf("sorted array is");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    //return 0;
}