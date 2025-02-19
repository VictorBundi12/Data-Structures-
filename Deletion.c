#include <stdio.h>


void deleteElement(int array[], int *size, int pos) {
    if (position < 0 || position >= *size) {
        printf("Invalid position! Please enter a position between 0 and %d\n", *size - 1);
        return;
    }

    
    for (int i = position; i < *size - 1; i++) {
        array[i] = array[i + 1];
    }
    (*size)--; 
}


void displayArray(int array[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[100], size, pos;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    displayArray(array, size);

    
    printf("Enter the position to delete (0-based index): ");
    scanf("%d", &pos);

    
    deleteElement(array, &size, pos);

   
    displayArray(array, size);

    return 0;
}
