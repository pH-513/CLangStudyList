#define _CRT_SECURE_NO_WARNINGS

#pragma warning(disable:4996)

#include <stdio.h>

​

int main()

​

{

int a, b, c, m; /*a,b,c,m 성립 (m=max)*/

​

printf("첫번째 수를 입력하시오."); /*a 에 수 넣기*/

scanf_s("%d", &a); /*넣은 수 확인후 a에 저장*/

​

printf("두번째 수를 입력하시오."); /*b 에 수 넣기*/

scanf_s("%d", &b); /*넣은 수 확인후 a에 저장*/

​

printf("세번째 수를 입력하시오."); /*c 에 수 넣기*/

scanf_s("%d", &c); /*넣은 수 확인후 b에 저장*/

​

if (a > b) /*만약 (a > b)*/

m = a; /*max = a*/

else /*그렇지 않으면*/

if (b > c) /*만약 (b > c)*/

m = b; /*max = b*/

else /*그렇지 않으면*/

m = c; /*max = c*/

​

printf("max = %d", m); /*최댓값 출력*/

}

​

/*

첫번째 수를 입력하시오.1

두번째 수를 입력하시오.2

두번째 수를 입력하시오.3

max = 3

*/