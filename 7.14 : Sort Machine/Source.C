#include <stdio.h>

void swap(char* a, char* b);

int main() {

	char sortChar[11] = { '9','3','7','4','5','6','8','2','1','0' };
	printf("\nSource data : ");
	for (int i = 0; i < 10; i++) {
		printf("%c", sortChar[i]);
		if (i != 9) {
			printf(", ");
		}
	}
	printf("\n\n");
	printf("-#-#-test 1 success.-#-#-\n");

	/*토너먼스 시스템*/
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (sortChar[i] > sortChar[j]) {
				printf("Temp : %c  ", sortChar[i]);
				printf("Temp : %c  ", sortChar[j]);
				swap(&sortChar[i], &sortChar[j]);
				printf("Changed : %c  ", sortChar[i]);
				printf("Changed : %c  ", sortChar[j]);
			}
		}
	}

	printf("\n\n-#-#-test success.-#-#-\n");

	printf("\nsort data : ");
	for (int i = 0; i < 10; i++) {
		printf("%c", sortChar[i]);
		if (i != 9) {
			printf(", ");
		}
	}
	printf("\n");

	return 0;
}

void swap(char* a, char* b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}