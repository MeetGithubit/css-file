#include<stdio.h>
void printArray(int* A,int n){
for (int i=0;i<n;i++)
{printf("%d",A[i]);}
}
void bubblesort(int *A,int n){
int temp;
    for (int i=o;i<n-1;i++)
    {
    for (int j=o;j<n-1-i;j++)
    {
    if (A[j]>A[j+1]){
    temp=A[j];
    A[j]=A[j+1];
    A[j+1]=temp;
    }}
    }
    }
int main(){
   int A[]={25,76,20,12,53};
   int n=5;
   printArray(A,n);
   bubblesort(A,n);
   printArray(A,n);
   return 0;
   }
