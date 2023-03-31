/*Write a C program to print the following pattern using loop
 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15
code:*/
#include <stdio.h>
int main() {
  int n=5;
  int i, j, k = 1;
  for(i=1; i<=n; i++) {
    for(j=1; j<=i; j++) {
      printf("%d ", k);
      k++;
    }
    
    printf("\n");
  }
  
  return 0;
}
