#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
       int temp;
    for (i = 0; i < num / 2; i++) {
        temp = (int) *(arr + num - i - 1);
        *(arr + num - i - 1) = *(arr + i);
        *(arr + i) = temp;
    }    
    
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}




link:https://www.hackerrank.com/challenges/reverse-array-c/submissions/code/292860700
