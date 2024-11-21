#include <stdio.h>

void stringReverse(const char *str) {
    if (*str == '\0') {
        return;
    }

    stringReverse(str + 1);
    putchar(*str);
}

int main() {
    char str[100];
    printf("Please enter a string:");
    scanf("%s",&str);
    printf("String Backward: ");
    stringReverse(str);
    printf("\n");

    return 0;
}
