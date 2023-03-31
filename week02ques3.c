//WAP to sort an array using function
#include <stdio.h>
void sortArray(int arr[], int len) {
  int i, j, temp;
  for(i=0; i<len; i++) {
    for(j=i+1; j<len; j++) {
      if(arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  int arr[50], len, i;
  
  // Take input for the array
  printf("Enter length of the array: ");
  scanf("%d", &len);
  printf("Enter elements of the array: ");
  for(i=0; i<len; i++) {
    scanf("%d", &arr[i]);
  }

  // Call the sortArray function to sort the array
  sortArray(arr, len);

  // Print the sorted array
  printf("Sorted array: ");
  for(i=0; i<len; i++) {
    printf("%d ", arr[i]);
  }
  
  return 0;
}
