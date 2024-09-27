//problem-link: https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true

#include<stdio.h>

int main()
{
    char ch;
    char str[100], sen[1000];

    scanf("%c", ch);
    scanf("%s", str);
    scanf("%[^\n]s", sen);

    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sen);

    return 0;
}