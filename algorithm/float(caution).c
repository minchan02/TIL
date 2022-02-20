// 1546
#include <stdio.h>

int main(void) {
	int N;
	float M=-1;
	float score[1000];
	float sum = 0;

	scanf("%d", &N);

	for(int i=0; i<N; i++){
		scanf("%f", &score[i]);
		if(score[i] > M){
			M = score[i];
		}
	}

	for(int j=0; j<N; j++){
		sum = sum + ((score[j]/M)*100);
	}

	printf("%f", sum/N);



	return 0;

}

// 만약 0.12345 이런걸 int로 받으면 0으로 인식해버리니 실수형 계산은 float으로 통일해서 ㄱㄱ
