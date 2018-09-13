#include<stdio.h>
int main() {
	int num;
	int A = 0, B = 0, C = 0;
	int count = 1;

	scanf("%d", &num);
	int check = num;
	while (1) {
		A = num / 10;
		B = num % 10;
		C = A + B;
		num = B * 10 + C % 10;
		if (num == check) break;
		else count++;
	}
	printf("%d", count);
	return 0;
}