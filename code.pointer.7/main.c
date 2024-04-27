#include <stdio.h>


void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;


    while (start < end) {

        int temp = *start;
        *start = *end;
        *end = temp;


        start++;
        end--;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];


    printf("Enter %d elements into the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }


    reverseArray(array, size);


    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
