#include <stdio.h>
// 26405840
int main(){
    int result = 0;
    int arr[42] = { 0, };
    for(int i = 0; i < 10; i ++){
        int x;
        scanf("%d", &x);
        arr[x%42] ++; // 이런부분 잘 활용! 
    }
    for(int i = 0; i < 42; i ++){
        if(arr[i]) result ++;
    }
    
    printf("%d\n", result);
    return 0;
}
