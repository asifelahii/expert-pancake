#include<stdio.h>

int max_num(int x, int y)
{
    if(x>y)
        return x;
    else 
        return y;
}

int main()
{
    int a, b, c, d, maximum;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    maximum = max_num(a, b);
    // printf("%d\n", maximum);

    maximum = max_num(maximum, c);
    // printf("%d\n", maximum);

    maximum = max_num(maximum, d);
    printf("%d\n", maximum);
    
    return 0;
}