#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

char WhiteBoard[8][8] = {
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
};

char BlackBoard[8][8] = {
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
};

int main(void) {
	int N;
	int M;
	int ans1, ans2;
	int a, b;
	int ret = 999999;
	
	cin >> N >> M;

	char arr[51][51];

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> arr[i][j];
		}
	}
	
	for (int x = 0; x <= N-8; ++x) {
		for (int y = 0; y <= M - 8; ++y) { // 시작점 찾기
			ans1 = 0;
			ans2 = 0;
			for (int a = 0; a < 8; ++a) {
				for (int b = 0; b < 8; ++b) {
					if (arr[x + a][y + b] != WhiteBoard[a][b]) {
						ans1++;
					}

					if (arr[x + a][y + b] != BlackBoard[a][b]) {
						ans2++;
					}
				}
			}

			if (min(ans1, ans2) < ret) {
				ret = min(ans1, ans2);
			}
			

		}
	}
	
	printf("%d", ret);
	return 0;
	
}
