#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main(void) {
	int N;
	int arr[10001] = { 0, };

	scanf("%d", &N);

	for (int i = 0; i < N; ++i) {
		int a;
		scanf("%d", &a);
		arr[a]++;
	}

	for (int i = 0; i < 10001; ++i) {
		for (int j = 0; j < arr[i]; ++j) {
			printf("%d\n", i);
		}
	}


}
