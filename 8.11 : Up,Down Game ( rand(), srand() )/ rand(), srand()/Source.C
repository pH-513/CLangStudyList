#include <stdio.h>
#include <stdlib.h> // rand() , srand()
#include <time.h>

int main() {
    srand((unsigned int)time(NULL));
    int Target = rand() % 100;
    // printf("%d\n", Target); 디버그용

    int answer;
    int orbit = 0;

    while (1) {
        scanf_s("%d", &answer);
        orbit++;
        if (answer < Target) {
            printf("up\n");
        }
        else if (answer > Target) {
            printf("down\n");
        }
        else {
            break;
        }
    }
    printf("Catch! %d\n", orbit);

    return 0;
}