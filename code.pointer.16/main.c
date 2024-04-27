#include <stdio.h>
#include <string.h>


int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}


void reverseString(char *str) {
    int length = stringLength(str);
    char *start = str;
    char *end = str + length - 1;


    while (start < end) {

        char temp = *start;
        *start = *end;
        *end = temp;


        start++;
        end--;
    }
}

int main() {
    char str[100];


    printf("Enter a string: ");
    scanf("%[^\n]", str);


    reverseString(str);


    printf("Reversed string: %s\n", str);

    return 0;
}
