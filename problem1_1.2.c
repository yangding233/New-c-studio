
#include <stdio.h>
#include <stdlib.h>

int interative(int n)
{
    int sum;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main()
{
    int n = 0;
    printf("please into a num     ");
    scanf("%d", &n);
    n = interative(n);
    printf("The  result is %d ", n);
    return 0;
}


