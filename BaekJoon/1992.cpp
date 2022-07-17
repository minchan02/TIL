#include <iostream>
#include <cstdio>
using namespace std;

int N;
int arr[65][65];

void compress(int x, int y, int len){
	int temp = -1;
	int ans = 0;
	// 기저 사례 모두 압축될 경우

	for(int i=y; i<y + len; ++i){
		for(int j = x; j<x+ len; ++j){
			if(temp == -1){
				temp = arr[i][j];
			}
			else{
				if(temp != arr[i][j]){
					ans = -1;
					break;
				}
			}
		}

		
		if(ans == -1){
			printf("%s", "(");
			compress(x, y, len/2);
			compress(x+len/2, y, len/2);
			compress(x, y+len/2, len/2);
			compress(x+len/2, y+len/2, len/2);
			printf("%s", ")");
			return;
		}
	}

	if(ans != -1){
		printf("%d", temp);
		return;
	}

	return;
}

int main(void){
	scanf("%d", &N);

	for(int i = 0; i < N; ++i){
		for(int j=0; j<N; ++j){
			scanf("%1d", &arr[i][j]);
		}
	}

	compress(0, 0, N);
	
	return 0;
}
