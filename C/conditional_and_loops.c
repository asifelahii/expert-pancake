#include<stdio.h>

int range_of_n(int n)
{
    if((1<=n) && (n<=9))
        return n;
    else 
        return n+1;
}

int main()
{
    char *num[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    scanf("%d", &n);

    if(range_of_n(n) == n)
        printf("%s\n", num[n-1]);
    else
        printf("Greater than 9\n");

    return 0;
}