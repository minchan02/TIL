#include <stdio.h>
 
int main()
{
    int number = 12345678;
 
    while (number != 0)
    {
        printf("%d ", number % 10);
 
        number /= 10;
    }
 
    return 0;
}
