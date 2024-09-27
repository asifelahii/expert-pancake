#include<stdio.h>

int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);


    for(i=a; i<=b; i++)
    {    
        if((1<=i) && (i<=9))
        {
            char *num[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

            printf("%s\n", num[i-1]);
        }
        else if(i%2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }

    return 0;
}