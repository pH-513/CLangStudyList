#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int individuallyCalculate(const char* accountNumber) {
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        int digit = accountNumber[i] - '0';
        sum += digit;
    }

    printf("Target Sum: %d\n", sum);

    return sum;
}

int calculateCode(const char* accountNumber) {
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        int digit = accountNumber[i] - '0';
        sum += digit;
    }

    int code = sum % 100;

    printf("코드: %s%d\n", accountNumber, code % 10);

    return code;
}

int analyzesCode(const char* code, const char* accountNumber) {
    int targetSum = individuallyCalculate(accountNumber);

    if (code[0] == (targetSum % 10)) {
        printf("Code analysis: Successful\n");
        return 1;
    }
    else {
        printf("Code analysis: Failed\n");
        return 0;
    }
}

int main() {
    char accountNumber[10];
    printf("계좌번호를 입력하세요 (9자리): ");
    scanf("%9s", accountNumber);

    int code = calculateCode(accountNumber);
    char codeStr[4];
    snprintf(codeStr, sizeof(codeStr), "%d", code); // 정수 code를 문자열로 변환하여 저장

    printf("\n\n\n------------------\n   analyzesCode   \n------------------\n\n\n\n");

    char analyzes_accountNumber[10];
    printf("계좌번호를 입력하세요 (9자리): ");
    scanf("%9s", analyzes_accountNumber);

    analyzesCode(codeStr, analyzes_accountNumber);

    return 0;
}