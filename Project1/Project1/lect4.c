#define _CRT_CECURE_NO_WARNINGS

#include<stdio.h>
int main(void) {

	int T;
	int test_case;

	freopen("input.txt", "r", stdin);

	setbuf(stdout, NULL);
	scanf("%d", &T);


	for (test_case = 1; test_case <= T; ++test_case) {
		int num[10];
		for (int i = 0; i < 10; i++) {
			scanf("%d", &num[i]);
		}

		int s = 0;
		for (int i = 0; i < 10; i++) {
			//printf("%d", num[i]);
			if (num[i] % 2 == 1) {
				s += num[i];  //s = s + num[i]
			}
		}

		printf("#%d %d\n", test_case, s); // #1 200
	}
	return 0;
}