#include <stdio.h>


void deleteElement(int arr[], int *size, int pos) {
    if (pos < 0 || pos >= *size) {
        printf("Invalid position! Please enter a position between 0 and %d\n", *size - 1);
        return;
    }

    
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--; 
}


void displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], size, pos;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    displayArray(arr, size);

    
    printf("Enter the position to delete (0-based index): ");
    scanf("%d", &pos);

    
    deleteElement(arr, &size, pos);

   
    displayArray(arr, size);

    return 0;
}
