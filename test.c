/*************************************************************************
    > File Name: test.c
    > Author: wfuer
    > Mail: 1019222711@qq.com 
    > Created Time: 2023年03月25日 星期六 16时46分43秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void next(char * arr)
{
    while(*arr != '\0')
    {
        if(*arr == 'z')
            *arr = 'a';
        else if(*arr == 'Z')
            *arr = 'A';
        else
            *arr += 1;
        arr++;
    }
}


int main()
{
    printf("Please enter a num list:\n");
    char arr[40];
    scanf("%s", arr);

    next(arr);

    printf("%s\n", arr);
}
