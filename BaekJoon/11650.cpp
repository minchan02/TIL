/*
#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int swap(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int N;
	int temp;
	int piv;
  vector<int> posX;
	vector<int> posY;
	vector<int> ans;
	int x, y;

	scanf("%d", &N);

	for(int i=0; i<N; ++i){
		scanf("%d %d", &x, &y);
		posX.push_back(x);
		posY.push_back(y);
	}

	for(int i=1; i<N; ++i){
		for(int j = i; j>0; j--){
			if(posX[j] < posX[j-1]){
				swap(posX[j], posX[j-1]);
				swap(posY[j], posY[j-1]);
			}
			else if(posX[j] == posX[j-1]){
				if(posY[j] < posY[j-1]){
					swap(posY[j], posY[j-1]);
				}
			}
		}
	}

	for(int i=0; i<N; ++i){
		printf("%d %d\n", posX[i], posY[i]);
	}

	return 0;
}
*/

#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int N;
	int a, b;
	
	vector<pair<int,int>> pos;
	scanf("%d", &N);

	for(int i=0; i<N; ++i){
		scanf("%d %d", &a, &b);
		pos.push_back(pair<int,int>(a,b));
	}

	sort(pos.begin(), pos.end());

	for(int i=0; i<N; ++i){
		printf("%d %d\n", pos[i].first, pos[i].second);
	}
	

	return 0;
}
