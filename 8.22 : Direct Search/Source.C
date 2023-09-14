#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

int main() {
    srand((unsigned int)time(NULL));

    char targetName;
    int targetAscii;  // To store the ASCII code of the input character

    char names[] = { 'A', 'B', 'C', ' ', 'E', 'F', 'G', 'H', 'I' };
    int numbers[] = { 114, 121, 240, 80, 190, 220, 389, 523, 480 };

    printf("찾을 이름을 입력하세요: ");
    scanf_s(" %c", &targetName);
    system("cls");

    printf("입력된 문자: %c\n", targetName);

    targetAscii = (int)targetName;

    int index = targetAscii - 'A';  // Calculate index based on ASCII value

    // Check if the index is within bounds
    if (index >= 0 && index < sizeof(names) / sizeof(names[0])) {
        char name = names[index];
        int number = numbers[index];
        if (name == ' ') {
            printf("해당 데이터가 비었습니다.\n");
        }
        else {
            printf("해당 이름의 번호: %d\n", number);
        }
    }
    else {
        printf("해당 이름에 대한 번호를 찾을 수 없습니다.\n");
    }

    return 0;
}