#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
    /*Setting Roles*/
    char text[] = "korea";
    int space, len;
    int i;
    
    /*Calculating string length*/
    len = 0;
    while (text[len]) {
        len++;
    }

    /*gullwing Head*/
    for (i = 0; i < len; i++) {
        for (space = 0; space < i; space++) {
            printf(" ");
        }
        printf("%c\n", text[i]);
    }

    /*gullwing Body*/
    for (i = len - 2; i >= 0; i--) {
        for (space = 0; space < i; space++) {
            printf(" ");
        }
        printf("%c\n", text[i]);
    }
}