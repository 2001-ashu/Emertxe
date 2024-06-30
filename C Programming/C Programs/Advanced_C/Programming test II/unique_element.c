#include <stdio.h>

void printUniqueElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break; // Break if the element is already encountered
            }
        }
        if (i == j) {
            printf("%d ", arr[i]); // Print the unique element
        }
    }
}

int main() {
    int arr[] = {0,0,1,2,1};
    int size = sizeof(arr) / 4;
    
    printf("Unique elements in the array: ");
    printUniqueElements(arr, size);

    return 0;
}