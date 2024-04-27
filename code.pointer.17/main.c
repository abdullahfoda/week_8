#include <stdio.h>


typedef int (*CompareFunc)(const void *, const void *);


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int size, CompareFunc cmp) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {

            if (cmp(&arr[j], &arr[j + 1]) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}


int compareAscending(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


int compareDescending(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}


void printArray(int *arr, int size) {
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];


    printf("Enter %d elements into the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    bubbleSort(arr, size, compareAscending);
    printArray(arr, size);


    bubbleSort(arr, size, compareDescending);
    printArray(arr, size);

    return 0;
}
