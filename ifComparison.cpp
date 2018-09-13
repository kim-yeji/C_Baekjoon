#include<stdio.h>
int main() {
	int a, b, c;
	int mid = 0;
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c) {
		if (b >= c) mid = b;
		else mid = c;
	}
	else if (b >= c && b >= a) {
		if (a >= c) mid = a;
		else mid = c;
	}
	else if (c >= b && c >= a) {
		if (b>=a) mid = b;
		else mid = a;
	}

	printf("%d", mid);
	return 0;
}