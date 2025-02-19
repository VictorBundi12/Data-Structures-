#include <stdio.h>

void insert_element(int arr[], int *size, int element, int position) {
    
    if (position < 0 || position > *size) {
        printf("Invalid position!\n");
        return;
    }

    
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[position] = element;
    
    
    (*size)++;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};  
    int size = 5;  
    int element_to_insert = 10;
    int position_to_insert = 2;  

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    insert_element(arr, &size, element_to_insert, position_to_insert);

  
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
