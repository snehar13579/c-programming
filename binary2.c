#include<stdio.h>
void binary(int a[],int f,int l,int k);
void bubble(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
    printf("sorted array is");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
void binary(int a[],int f,int l,int k){
    if(f>l){
        printf("not found");
    }
    int mid=(f+l)/2;
    if(k==a[mid]){
        printf("fount at index %d",mid);
        
    }
    else
    if(mid>k){
        return(binary(a,f,mid, k));
    }
    else
    if(mid<k){
        return(binary(a,mid,l,k));
    }
}
int main(){
    int n,k,i,j,a[20];
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter the key element");
scanf("%d",&k);
bubble(a,n);
binary(a,0,n-1,k);
}