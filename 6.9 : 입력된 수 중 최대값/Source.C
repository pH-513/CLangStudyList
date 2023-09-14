#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

int main()

{
    int a, m = 0, c = 0;
    do
    {
        printf("%d 번째 정수를 입력 하시오. (ed = 1000) ", ++c);
        scanf_s("%d", &a);
        if (a == 1000) break;
        if (a > m)
        m = a;
    } while (1);
    printf("%d 수 중 가장 큰 것 = %d", c, m);
    return 0;
}
/*

1 번째 정수를 입력 하시오. (ed = 1000) 1

2 번째 정수를 입력 하시오. (ed = 1000) 2

3 번째 정수를 입력 하시오. (ed = 1000) 3

4 번째 정수를 입력 하시오. (ed = 1000) 1000

4 수 중 가장 큰 것 = 3

*/