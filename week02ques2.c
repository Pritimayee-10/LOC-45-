#include<stdio.h>
 
int main()
{
 	int Size1, Size2, rSize, i, j;
	int a[10], b[10], result[20];
  
 	printf("\nEnter the First Array Size  :  ");
 	scanf("%d", &Size1);
 
 	printf("\nEnter the First Array Elements :  ");
 	for(i = 0; i < Size1; i++)
  	{
      	scanf("%d", &a[i]);
  	}
  	printf("\nEnter the Second Array Size  :  ");
 	scanf("%d", &Size2);
   
 	printf("\nEnter the Second Array Elements  :  ");
 	for(i = 0; i < Size2; i++)
  	{
      	scanf("%d", &b[i]);
  	}
  	
  	for(i = 0; i < Size1; i++)
  	{
      	result[i] = a[i];
  	}
  	
	rSize = Size1 + Size2;
 
 	for(i = 0, j = Size1; j < rSize && i < Size2; i++, j++)
  	{
  		result[j] = b[i];
  	}
 
 	printf("\nArray Elements After Merging: \n"); 
 	for(i = 0; i < rSize; i++)
  	{
    	printf(" %d \t ",result[i]);
  	}
 int temp,k;
 for(k=0;k<rSize/2;k++)
 {
 	temp=result[k];
 	result[k]=result[rSize-k-1];
 	result[rSize-k-1]=temp;
 }
 printf("\nArray in Reverse order:\n");
 for(k=0;k<rSize;k++)
 {
 	printf("%d \t",result[k]);
 }
  	return 0;
}
