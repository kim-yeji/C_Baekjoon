#include<stdio.h>
int main() {
	int num,max=0;
	double sum = 0;
	int score[1000] = { 0, };

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &score[i]);

		max < score[i] ? (max = score[i]) : max;
	}
	for (int i = 0; i < num; i++) {
		sum += (double)score[i] / (double)max * 100.0;

	}
	printf("%.2lf", sum/ (double)num);
	return 0;
}