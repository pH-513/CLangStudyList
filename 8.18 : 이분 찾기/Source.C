#include <stdio.h>
#include <stdlib.h> // rand() , srand()
#include <time.h>
#include <string.h> // strcmp 함수를 사용하기 위한 헤더 추가

int main() {
    srand((unsigned int)time(NULL));

    int Dead = 512; // 최댓값을 지정합니다.
    int Target;

    // 방송국 이름과 전화번호를 연결하는 배열
    char* broadcasters[] = { "k", "b", "c", "m", "t", "v", "s", "j", "h" };
    int telephone_numbers[] = { 114, 121, 240, 80, 190,220,389,512, 480 }; // 각 방송국에 해당하는 전화번호로 수정

    int orbit = 0;
    int Progress = 0;
    int answer; // answer 값을 수정된 배열에서 찾아서 대입할 것입니다.

    // 방송국 이름을 입력 받습니다.
    printf("방송국 이름을 입력하세요: ");
    char input[20];
    scanf_s("%s", input, sizeof(input));

    int numBroadcasters = sizeof(broadcasters) / sizeof(broadcasters[0]);
    int found = 0;

    // 입력한 이름과 배열에 저장된 이름을 비교하여 전화번호를 찾습니다.
    for (int i = 0; i < numBroadcasters; ++i) {
        if (strcmp(input, broadcasters[i]) == 0) {
            answer = telephone_numbers[i];
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("방송국을 찾지 못했습니다.\n");
        return 1; // 오류 코드로 프로그램 종료
    }

    int low = 1;
    int high = Dead;
    int Middle;

    while (1) {
        Middle = (low + high) / 2;

        if (Middle < answer) {
            Progress = 1; // Up
            ++orbit;
            low = Middle + 1;
        }
        else if (Middle > answer) {
            Progress = -1; // Down
            ++orbit;
            high = Middle - 1;
        }
        else {
            Progress = 0; // 찾았음
            ++orbit;
            printf("찾음! Progress : %d | orbit : %d | answer : %d\n", Progress, orbit, answer);
            printf("--------------------debug--------------------\n");
            printf("***Progress %d, orbit %d, low %d, high %d, Middle %d***\n", Progress, orbit, low, high, Middle);
            break;
        }
        printf("***Progress %d, orbit %d, low %d, high %d, Middle %d***\n", Progress, orbit, low, high, Middle);
    }
    return 0;
}