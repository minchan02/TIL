#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int N;

int getLength(int num) {
	int len = 0;
	while (num != 0) {
		num /= 10;
		len++;
	}

	return len;
}

bool getSum(int num) {
	int len;
	int sum = num;
	int temp = 0;
	len = getLength(num);

	for (int i = len - 1; i >= 0; --i) {
		sum += (num / (int)pow(10, i)) - (temp * 10);   // 멍청한 자식 이렇게 안해도 된다
		temp = (num / (int)pow(10, i));
	}
  
  /*
  sum += N%10;
  N/=10;
  이렇게 하면 될것을..
  */

	if (sum == N) {
		return true;
	}

	else {
		return false;
	}
}

int main(void)
{
	int i;
	scanf_s("%d", &N);
	i = N / 2;

	while (!getSum(i)) {
		i++;

		if (i > N) {
			i = 0;
			break;
		}
	}
	
	printf("%d", i);

	return 0;
}
