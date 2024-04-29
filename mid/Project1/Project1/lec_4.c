#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int T, test_case;

	freopen("input (1).txt", "r", stdin);
	scanf("%d", &T);

	for (test_case = 1; test_case <= T; ++test_case) {
		int num[10];
		for (int i = 0; i < 10; i++) {
			scanf("%d", &num[i]);
		}
		int m = 0;
		for (int i = 0; i < 10; i++) {
			if (m < num[i]) {
				m = num[i];
			}
		}

		printf("%d\n", m);

	}
}