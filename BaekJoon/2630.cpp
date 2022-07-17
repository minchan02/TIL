#include <iostream>
using namespace std;

int N;
int white = 0;
int blue = 0;
int arr[129][129];

void cutPaper(int len, int fir, int sec){

	int num;
	int result = 0;
	
	// 전부 같은 숫자인지 확인
	for(int i = fir; i < fir + len; ++i){
		for(int j = sec; j < sec + len; ++j){
			if(arr[i][j] == arr[fir][sec]){
				num = arr[i][j];
			}

			else{
				if(arr[i][j] != num){
					result = 1;
					break;
				}
			}
		}

		if(result == 1){
			break;
		}
	}
	
	// 기저사례 : 같은 숫자이면 파랑 or 흰색인지 확인 후 개수 증가
	if(result == 0){
		if(num == 1){
			blue++;
		}

		else if(num == 0){
			white++;
		}

		return;
	}

	//같은 숫자가 아니면 4등분 해서 확인 
	cutPaper(len/2, fir, sec);
	cutPaper(len/2, fir + len/2, sec);
	cutPaper(len/2, fir, sec + len/2);
	cutPaper(len/2, fir + len/2, sec + len/2);
}

int main(void){
	cin >> N;

	for(int i=0; i<N; ++i){
		for(int j=0; j<N; ++j){
			cin >> arr[i][j];
		}
	}

	cutPaper(N, 0, 0);
	
	cout << white << endl << blue;
}
