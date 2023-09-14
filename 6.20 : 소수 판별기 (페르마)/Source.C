#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
    int MultiVar1 = 1, Count = 9; // Variables
    int i, j;
    int num[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    printf("%d을 %d번.\n", MultiVar1, Count);
    for (i = 0; i < 9; i++) {
        printf(" ----%d단----  ", num[i]);
    }
    printf("\n");
    for (i = MultiVar1; i <= Count; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%2d * %2d = %2d  ", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}