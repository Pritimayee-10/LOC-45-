//Write a C program to copy the elements of one array into another array.
//code:
#include <stdio.h>

int main() {
  int arr1[50], arr2[50];
  int n, i;
  printf("Enter size of the array: ");
  scanf("%d", &n);
  printf("Enter elements of the array: ");
  for(i=0; i<n; i++) {
    scanf("%d", &arr1[i]);
  }
  for(i=0; i<n; i++) {
    arr2[i] = arr1[i];
  }
  printf("Copied array: ");
  for(i=0; i<n; i++) {
    printf("%d ", arr2[i]);
  }
  return 0;
}

