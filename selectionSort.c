#include <stdio.h>
int main()
{
   
   int i, j, num, temp, arr[1000];

   printf("enter number of elements");
   scanf("%d",&num);

   printf("Enter %d elements: ", num);
   for(i=0;i<num;i++)
      scanf("%d",&arr[i]);
 
   for(i=0;i<num;i++){
      for(j=i+1;j<num;j++){
         if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
   }

   printf("all the elements in increasing order: ");
   for(i=0;i<num;i++)
      printf(" %d",arr[i]);

   return 0;
}