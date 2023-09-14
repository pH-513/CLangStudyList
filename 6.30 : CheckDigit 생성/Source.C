#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculateCode(const char* accountNumber) {
    int sum = 0;

    for (int i = 0; i < 8; i++) {
        int digit = accountNumber[i] - '0';
        sum += digit;
    }

    int code = sum % 100;

    printf("코드: %s%d\n", accountNumber, code % 10);

    return code;
}

int main() {
    char accountNumber[9];
    printf("계좌번호를 입력하세요 (8자리): ");
    scanf("%8s", accountNumber);

    int code = calculateCode(accountNumber);

    return 0;
}