#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    char s[50];
    char sen[80];
    scanf("%c",&ch);
    scanf("\n%s",s);
    scanf("\n%[^\n]s",sen);
    printf("%c",ch);
    printf("\n%s",s);
    printf("\n%s",sen);
    
    return 0;
}



link:https://www.hackerrank.com/challenges/playing-with-characters/submissions/code/292773833
