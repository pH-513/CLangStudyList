#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>


int main() {
 
    int num,s=0,m,n2,nn;

    printf("숫자열을 입력하시오");
    scanf_s("%d", &num);
    nn = num;
    int i = 10000;
    int j = 0;

    for (int i = 1; i <= 5;i++) 
    {
        j = num % 10;
        m = num / 10;
        s = s+j;
        num = m;
    }
    n2 = s % 10;
    num=nn * 10 + n2;
    printf_s("%d", num);

    return 0;
}
