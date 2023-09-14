#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void asciiDecrypt();

int main() {
    char str[100]; // 배열 크기를 더 크게 설정
    int len;

    printf("문자열을 입력하시오: ");
    scanf("%s", str);
    len = strlen(str);
    printf("%d\n", len);

    int i = 0, j;
    char num[100]; // 배열 크기를 더 크게 설정

    while (str[i] != '\0') {
        printf("%c", str[i]);
        num[i] = str[i];
        i++;
    }
    num[i] = '\0'; // 문자열의 끝을 나타내는 NULL 문자 추가
    printf("\n\n");

    printf("ASCII : ");
    for (j = 0; j < i; j++) {
        printf("%d ", num[j]);
    }
    printf("\n\n");

    asciiDecrypt(); // asciiDecrypt() 함수 호출

    return 0;
}

/*void asciiDecrypt() {
    char str[100]; // 배열 크기를 더 크게 설정
    int len;

    printf("ASCII를 입력하시오: ");
    scanf(" %[^\n]", str); // 공백을 포함한 한 줄을 입력 받음
    len = strlen(str);
    printf("%d\n", len);

    int i = 0, j;
    char num[100]; // 배열 크기를 더 크게 설정

    while (str[i] != '\0') {
        printf("%c", str[i]);
        num[i] = str[i];
        i++;
    }
    num[i] = '\0'; // 문자열의 끝을 나타내는 NULL 문자 추가

    printf("\n\n");

    printf("문자열 : ");
    for (j = 0; j < i; j += 3) { // 수정: 한 문자씩 처리하도록 변경
        if (str[j] == ' ') {
            printf(" "); // 공백인 경우에는 그대로 출력
        }
        else {
            int asciiVal = 0;
            if (str[j] >= '0' && str[j] <= '9') {
                asciiVal = (str[j] - '0') * 100;
            }
            if (str[j + 1] >= '0' && str[j + 1] <= '9') {
                asciiVal += (str[j + 1] - '0') * 10;
            }
            if (str[j + 2] >= '0' && str[j + 2] <= '9') {
                asciiVal += (str[j + 2] - '0');
            }
            printf("%c", (char)asciiVal); // ASCII 값을 문자로 변환하여 출력
        }
    }
    printf("\n\n");

    return;
}*/ //old code

void asciiDecrypt() {
    char str[100];
    int len;

    printf("ASCII를 입력하시오: ");
    scanf(" %[^\n]", str);
    len = strlen(str);
    printf("%d\n", len);

    int i = 0, j;
    char num[100];

    while (str[i] != '\0') {
        printf("%c", str[i]);
        num[i] = str[i];
        i++;
    }
    num[i] = '\0';

    printf("\n\n");

    printf("문자열 : ");
    char* token = strtok(num, " ");
    while (token != NULL) {
        int asciiVal = atoi(token);
        printf("%c", (char)asciiVal);
        token = strtok(NULL, " ");
    }
    printf("\n\n");

    /*
    위 코드는 입력한 문자열을 공백을 기준으로 토큰으로 분리한 후, 각 토큰을 ASCII 값으로 변환하여 문자로 출력하는 부분
    `strtok()` 함수를 사용하여 문자열을 토큰으로 분리하고,
    `atoi()` 함수를 사용하여 토큰을 정수로 변환한 뒤,
    ASCII 값을 문자로 출력함.
    모든 토큰은 반복문으로 뺑이쳐서 결과값을 얻음.
    */

    return;
}


// 원본 ascii 값에 공백또한 계산하여 문제가 발생함. : 해결

// ASCII 값을 계산할 때 각 문자가 숫자인지 확인하지 못하고 계산함,
// ASCII 값을 구별하는 방법을 바꿈. : 해결