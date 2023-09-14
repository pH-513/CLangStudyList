#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[10];
	int len;

	printf("문자열을 입력하시오: ");
	scanf("%s", str);
	len = strlen(str);
	printf("%d\n", len);

	int i = 0, j;
	char num[10];

	while (str[i] != '\0') {
		printf("%c", str[i]);
		num[i] = str[i];
		i++;
	}
	printf("\n\n");

	printf("ASCII : ");
	for (j = 0; j < i; j++) {
		printf("%d ", num[j]);
	}
	printf("\n\n");

	return 0;
}