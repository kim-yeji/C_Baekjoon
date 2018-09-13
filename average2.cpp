#include<stdio.h>
int main() {
	int score[1000];
	float avg;
	int C, N, cnt;
	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		scanf("%d", &N);
		avg = 0;
		cnt = 0;
		for (int j = 0; j < N; j++) {
			scanf(" %d", &score[j]);
			avg += score[j];
		}
		avg /= N;
		for (int i = 0; i < N; i++) {
			if (avg < score[i]) cnt++;
		}
		printf("%.3f%%\n", (cnt / (float(N) )* 100));
	}

	return 0;
}