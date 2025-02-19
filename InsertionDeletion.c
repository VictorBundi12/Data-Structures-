#include <stdio.h>

#define MAX_SIZE 100  


void insertElement(int array1[], int *size, int element, int position) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Insertion not possible.\n");
        return;
    }
    if (position < 0 || position > *size) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", *size);
        return;
    }
  
    for (int i = *size; i > position; i--) {
        array1[i] = array1[i - 1];
    }
    array1[position] = element;
    (*size)++;
    printf("Element inserted successfully.\n");
}


void deleteElement(int array1[], int *size, int position) {
    if (*size == 0) {
        printf("Array is empty. Deletion not possible.\n");
        return;
    }
    if (position < 0 || position >= *size) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", *size - 1);
        return;
    }
   
    for (int i = position; i < *size - 1; i++) {
        array1[i] = array1[i + 1];
    }
    (*size)--;
    printf("Element deleted successfully.\n");
}


void displayArray(int array[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");
}

int main() {
    int array1[MAX_SIZE], size = 0, choice, element, position;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position (0 to %d): ", size);
                scanf("%d", &position);
                insertElement(array1, &size, element, position);
                break;
            case 2:
                printf("Enter position to delete (0 to %d): ", size - 1);
                scanf("%d", &position);
                deleteElement(array1, &size, position);
                break;
            case 3:
                displayArray(array1, size);
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
