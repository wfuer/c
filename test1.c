/*************************************************************************
    > File Name: test1.c
    > Author: wfuer
    > Mail: 1019222711@qq.com 
    > Created Time: 2023年03月25日 星期六 17时58分50秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void ec(int a[], int p, int n)
{
    int right = n-1;
    for(int i = 0; i <= right/2 ; i++)
    {
        int swap = a[i];
        a[i] = a[right - i];
        a[right - i] = swap;
    } 
    int mid = right - p;
    for(int i = 0 ; i <= p/2 ; i++)
    {
        int swap = a[mid + i];
        a[mid + i] = a[right - i];
        a[right - i] = swap;
    }
    for(int i = 0 ; i <= mid/2 ; i++)
    {
        int swap = a[mid - 1 - i];
        a[mid - 1 - i] = a[i];
        a[i] = swap;
    }
}


int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a) / sizeof(a[0]);
    int p;
    printf("Please enter p = :\n");
    scanf("%d",&p);

    ec(a, p ,n); 

    for (int i = 0; i < n ; i++)
    {
        printf("%d,", a[i]);
    }
}
