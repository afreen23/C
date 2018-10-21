#include<stdio.h>
#include<stdlib.h>

int main(){
 int n,i,k,j;
 scanf("%d",&n);
 int *arr = (int *)malloc(n*sizeof(int));
 for(i=0;i<n;i++) 
   scanf("%d",&arr[i]);
 //first element sorted 
 for(i=1;i<n;i++) {
   k=arr[i];
   //finding right place to insert element
   for(j=i-1;j>=0&&arr[j]>k;j--){
     arr[j+1]=arr[j];
   } 
   //insertinmg element at the correct position
   arr[j+1]=k;
 }
 for(i=0;i<n;i++) 
   printf("%d ",arr[i]);
 printf("\n");
 return 0;
}
