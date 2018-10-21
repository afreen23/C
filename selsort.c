#include<stdio.h>
#include<stdlib.h>

int main(){
 int n,i,j,t,smallest;
 scanf("%d",&n);
 int *arr = (int*)malloc(n*sizeof(int));
 for(int i=0;i<n;i++) {
  scanf("%d",&arr[i]); 
 }

 for(i=0;i<n-1;i++) {
   smallest=i;
   for(j=i+1;j<n;j++) {
      if(arr[smallest]>arr[j]) {
        smallest=j;
      }
   }
   t=arr[i];
   arr[i]=arr[smallest];
   arr[smallest]=t;
 }
 for(int i=0;i<n;i++) {
  printf("%d ",arr[i]); 
 }  
 printf("\n");
}
