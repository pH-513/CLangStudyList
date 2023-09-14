#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <stdio.h>

int isPrime(int n) {
	
	if (n == 1)
	{
		return 2;
	}

    if (n <= 1) {
        return 0; // 1 이하 소수 ✕
    }

    for (int i = 2; i * i <= n; i++) { // 제곱근 까지만 반복
        if (n % i == 0) {
            return 0; // (약수=true) = (소수 = false)
        }
    }

    return 1; // 소수임을 나타냄
}


int main() {
	
	int x ;

	printf("소수 판별기 (페르마): ");
	scanf_s("%d", &x);

	if (isPrime(x)) 
		printf("%d은(는) 소수입니다.\n", x);
	else
		printf("%d은(는) 소수가 아닙니다.\n", x);
	
	return 0;
}