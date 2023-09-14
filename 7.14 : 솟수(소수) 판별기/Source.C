#include <stdio.h>

int main() {
    int isPrimeNum;

    printf("isPrimeNum? : ");
    scanf_s("%d", &isPrimeNum);
    if (isPrimeNum == 1) {
        printf("isNotPrimeNum.\n");
        return 0;
    }


    for (int i = 2; i * i <= isPrimeNum; ++i) {
        if (isPrimeNum % i == 0) {
            printf("isNotPrimeNum.\n");
            return 0;
        }
    }

    printf("isPrimeNum.\n");
    
    printf("\n\n--#-test success.-#--\n\n");

    return 0;
}