#include <stdio.h>
void printArray(int*A,int n){
    for(int i=0;i<n;i++){
        printf("%d\n",A[i]);
    }
    printf("\n");
}

void merge(int A[], int l, int mid, int h)
{
    int i, j, k, B[100];
    i = l;
    j = mid + 1;
    k = l;
    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
             k++;
        }
        else
        {
            B[k] = A[j];
            j++;
             k++;
        }
        
    }
    while(i<=mid){
        B[k]=A[i];
       
        i++;
         k++;
    }
       while(j<=h){
        B[k]=A[j];
       
        j++;
         k++;
    }
      for(int i=l;i<=h;i++){
        A[i]=B[i];
    }
}
void mergeSort(int A[],int l,int h){
    int mid;
    //int B[100];
    if(l<h){
        mid=(l+h)/2;
       mergeSort(A,l,mid);
       mergeSort(A,mid+1,h);
       merge(A,l,mid,h);
    }
  

}

int main()
{
    int A[] = {4, 7, 0, 2, 76, 12, 34};
    int n = 7;
    printArray(A, n);
    mergeSort(A,0,6);
    printArray(A,n);
    
  return 0;
}