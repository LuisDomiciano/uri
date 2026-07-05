#include <stdio.h>

int main(void) {
	int N = 0, number = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &number);
		if (number % 2 == 0 && number > 0) {
			printf("EVEN POSITIVE\n");
		} else if (number % 2 == 0 && number < 0) {
			printf("EVEN NEGATIVE\n");
		} else if (number % 2 != 0 && number > 0) {
			printf("ODD POSITIVE\n");
		} else if (number % 2 != 0 && number < 0) {
			printf("ODD NEGATIVE\n");
		} else {
			printf("NULL\n");
		}
	}
	return 0;
}
