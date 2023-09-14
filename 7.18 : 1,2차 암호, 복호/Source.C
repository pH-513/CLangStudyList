#include <stdio.h>
#include <string.h>

// 첫번째
void Primary(char* str);

// 두번째
void Secondary(char* str);


int main() {

    char textual[15] = "SEOUL KOREA !!";
    printf("원문: %s\n", textual);

    // 1차 암호화
    Primary(textual);
    printf("1차 암호화: %s\n", textual);

    // 2차 암호화
    Secondary(textual);
    printf("2차 암호화: %s\n", textual);

    // 2차 암호 해제
    Primary(textual);
    printf("2차 암호 해제: %s\n", textual);

    // 1차 암호 해제
    Secondary(textual);
    printf("1차 암호 해제: %s\n", textual);

    return 0;
}

void Primary(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void Secondary(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i += 2) {
        char temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
    }
}