//Problem link: https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true

#include<stdio.h>
int main()
{
    int a, b;
    float c, d;

    scanf("%d %d %f %f", &a, &b, &c, &d);

    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f\n", c+d, c-d);

    return 0;
}