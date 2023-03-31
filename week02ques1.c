#include <stdio.h>
int occur(int arr[],int size,int num)
{
    int count=0;
    int i;
  for(i=0;i<size;i++)
  {
      if(arr[i]==num)
      count ++;
  }
  return count;
}
int main()
{
    // Write a program to count the number of occurrences of a number in an array 
//  using function
int arr[100],size,num,i,temp;
printf("Enter the size of array:");
scanf("%d",&size);
printf("Enter the elements of array:");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter the element of which the occuranace you want to know:");
scanf("%d",&num);
printf("The occurnace of %d in the array is %d times",num,occur(arr,size,num));



    return 0;
}
