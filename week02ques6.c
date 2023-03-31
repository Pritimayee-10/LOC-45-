//Write a program to find maximum occurring integer in an array
//code:- 
#include <stdio.h>
#define SIZE 100

int main() {
    int arr[SIZE], freq[SIZE];
    int n, i, j, max_num, max_freq;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter elements in the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++) {
        freq[i] = 0;
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(arr[i] == arr[j]) {
                freq[i]++;
            }
        }
    }
    max_num = arr[0];
    max_freq = freq[0];
    for(i=1; i<n; i++) {
        if(freq[i] > max_freq) {
            max_num = arr[i];
            max_freq = freq[i];
        }
    }

    printf("The maximum occurring integer in the array is %d\n", max_num);

    return 0;
}
