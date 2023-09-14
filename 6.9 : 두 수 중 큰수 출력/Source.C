#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:4996)

#include <stdio.h>

​

int main()

​

{

int a, b, m;

​

printf("첫번째 수를 입력하시오.");

scanf_s("%d", &a);

​

printf("두번째 수를 입력하시오.");

scanf_s("%d", &b);

​

if (a > b)

m = a;

else

m = b;

​

printf("max = %d", m);

}

​

/*

첫번째 수를 입력하시오.1

두번째 수를 입력하시오.2

max = 2

*/