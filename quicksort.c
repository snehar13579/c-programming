#include<stdio.h>
int Partition(int a[],int f,int l){
    int r,temp;
r=a[l];
//int j=f;
int i=l-1;
for(int j=f;j<=r-1;j++){
    if(a[j]<=r){
        i++;
temp=a[i];
a[i]=a[j];
a[j]=temp;
    }
   }
temp=a[i+1];
a[i+1]=a[l];
a[l]=temp;
return(i+1);

}
void Quick(int a[],int f,int l){
    if(f<l){
        int pi=Partition(a,f,l);
Quick(a,f,pi-1);
    Quickuick(a,pi+1,l);
    }
}
int main(){
    int n,a[100];
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    Quick(a,0,n-1);
    print(a,n);
}