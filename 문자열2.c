#include<stdio.h>
//11720
int main(void){
	int N;
	char x[50]; // int형이 아닌 char형으로 하는것은 띄어쓰기하지않고 ex)54321 이렇게 문자열처럼 받기 위해
	int sum = 0;
	scanf("%d", &N);
	scanf("%s", x); //%c는 문자 %s는 문자열 

	for(int i=0; i<N; i++){
		sum = sum + x[i] - '0'; // char형을 이용해 int형을 받아오면 아스키코드값으로 저장되기 때문에 0 으로 빼서 원래숫자로 바꿔버리기~
	}

	printf("%d", sum);
}
