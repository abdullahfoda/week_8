#include <stdio.h>


int searchElement(int *arr, int size, int key) {

    int *ptr = arr;


    while (ptr < arr + size) {

        if (*ptr == key) {
            return 1;
        }
        ptr++;
    }


    return 0;
}

int main() {
    int size, key;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];


    printf("Enter %d elements into the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }


    printf("Enter the element to search: ");
    scanf("%d", &key);


    if (searchElement(array, size, key)) {
        printf("%d exists in the array.\n", key);
    } else {
        printf("%d does not exist in the array.\n", key);
    }

    return 0;
}
