#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    
    int n,a,sum=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n>0)
    {
     a = n%10;
     sum = sum+a;
     n = n/10;
    }
    printf("%d",sum);
    return 0;
}



link:https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/submissions/code/292859204