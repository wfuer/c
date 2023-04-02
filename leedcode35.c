/*************************************************************************
    > File Name: test2.c
    > Author: wfuer
    > Mail: 1019222711@qq.com 
    > Created Time: 2023年03月25日 星期六 18时18分46秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


int search(int arr[], int numSize, int target)
{
    int right = numSize - 1;
    int left = 0, mid;
    while(left <= right)
    {
        mid = (right + left) / 2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if(arr[mid] > target)
        return mid;
    else
        return mid+1;
}

int main()
{
    int arr[] = {1,3,5,8,12,14,15};

    int numSize = sizeof(arr) / sizeof(arr[0]);
    int target ;

    targetrintf("Please enter a num for search:");
    scanf("%d", &target);

    int place = search(arr, numSize, target);

    targetrintf("%d", place);
}
