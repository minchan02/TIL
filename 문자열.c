#include <stdio.h>
#include <string.h>

int main(){
    char b[50];
    int a=0;
		int c=0;

    scanf("%s", b);
    
		for(int i = 0; i< strlen(b); i++){
			if(b[i] == '('){
				a++;
			}
			else if(b[i] == ')'){
				c++;
			}
		}

		if(a == c){
			printf("YES");
		}
		else if( a!=c ){
			printf("NO");
		}
    
    return 0;
}
