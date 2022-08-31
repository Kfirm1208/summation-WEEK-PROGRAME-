#include <stdio.h>

int summation2(int num)
{
    return (num * (num + 1)) / 2;
}
int main()
{
    int num;
    printf("Insert number: ");
    scanf("%d", &num);
    printf("summation of 1 - %d is %d", num, summation2(num));

    return 0;
}
