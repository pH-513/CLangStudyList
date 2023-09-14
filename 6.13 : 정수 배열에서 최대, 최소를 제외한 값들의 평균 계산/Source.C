#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

/*swap 포인터*/
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*  선택정렬 - minimum, maximum, array    */
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        int min = arr[i];  // 극댓값을 저장할 변수
        int max = arr[i];  // 극솟값을 저장할 변수
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                min = arr[j];    // min 변수에 해당 수를 저장
                max = arr[j];    // max 변수에 해당 수를 저장
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

int main()
{
    int TempVar, count = 7;
    int numbers[7]; // 정수를 저장할 배열

    for (int i = 0; i < count; i++)
    {
        printf("%d 번째 정수를 입력하시오. (Count Limit = %d): ", i + 1, count);
        scanf("%d", &TempVar);

        numbers[i] = TempVar; // 입력한 정수를 배열에 저장
    }

    selectionSort(numbers, count); // 입력한 정수들을 최소 순으로 정렬

    printf("\n입력한 정수들 (최소 순): [");
    for (int i = 0; i < count; i++)
    {
        printf("%d", numbers[i]);
        if (i < count - 1)
            printf(",");
    }
    printf("]\n");

    printf("\n이중 최솟값은 : %d", numbers[0]); // 최솟값
    printf("\n이중 최댓값은 : %d", numbers[count - 1]); // 최댓값

    int minIndex = 0; // 최솟값의 인덱스
    int maxIndex = count - 1; // 최댓값의 인덱스

    int sum = 0;
    int countWithoutMinMax = count - 2; // 최소값과 최대값을 제외한 정수의 개수

    printf("\n최대,최소를 제외한 정수들 (minArray-maxPoint,minPoint): [");
    for (int i = 0; i < count; i++) {
        if (i == minIndex || i == maxIndex) {
            continue; // 최솟값과 최댓값은 건너뜁니다.
        }

        printf("%d", numbers[i]);
        sum += numbers[i]; // 정수 값을 더합니다.

        if (i < count - 1)
            printf(",");
    }
    printf("]\n");

    double average = (double)sum / countWithoutMinMax;
    printf("최대,최소를 제외한 정수들의 평균: %.5f\n", average);

    return 0;
}