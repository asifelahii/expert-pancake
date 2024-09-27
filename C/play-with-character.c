//problem-link: https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true

#include<stdio.h>
#include<string.h>

int main()
{
    char ch, str;
    char sen[1000];

    scanf("%c", ch);
    scanf("%s", str);
    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sen);

    return 0;
}