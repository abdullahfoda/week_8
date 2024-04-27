#include <stdio.h>


void swapArrays(int *arr1, int *arr2, int size) {

    for (int i = 0; i < size; i++) {

        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

int main() {
    int array1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int array2[] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);


    printf("First array before swapping: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("Second array before swapping: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");
    printf("...............................................................\n");

    int minSize = (size1 < size2) ? size1 : size2;


    swapArrays(array1, array2, minSize);



    printf("First array after swapping: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("Second array after swapping: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}
