
#include <stdio.h>

#define MAX_SIZE 100



void printArray(int arr[], int size);


int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size, i;

    int *source_ptr = arr1;
    int *dest_ptr   = arr2;

    int *end_ptr;



    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", (source_ptr + i));
    }



    end_ptr = &arr1[size - 1];







    while(source_ptr <= end_ptr)
    {
        *dest_ptr = *source_ptr;


        source_ptr++;
        dest_ptr++;
    }



    printf("\n\n arr1 after copying: ");
    printArray(arr1, size);

    printf("\n arr2  after copying: ");
    printArray(arr2, size);


    return 0;
}




void printArray(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i));
    }
}
