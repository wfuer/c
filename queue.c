/*************************************************************************
    > File Name: test3.c
    > Author: wfuer
    > Mail: 1019222711@qq.com 
    > Created Time: 2023年02月24日 星期五 01时09分12秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define MaxSize 50

typedef struct Node
{
    int arr[MaxSize];
    int x[2];
}Node, *link;

void Initqueue(Node * L, int x)
{
    if((L->x[0] + 1) % MaxSize == L->x[1])//x[0]为尾 
    {
        printf("队列已满");
        exit(0);
    }
    else
    {
        L->arr[L->x[0]] = x;
        L->x[0] = (L->x[0] + 1) % MaxSize;
    }
}

void delqueue(Node * L, int * x)
{
    if(L->x[0] == L->x[1])//x[1]为队头
    {
        printf("队列已空");
        exit(0);
    }
    else     
    {
        *x =  L->arr[L->x[1]];
        L->x[1] = (L->x[1] + 1) % MaxSize;
    }
}

void printqueue(Node * L)
{
    for(int i = 0 ; i < (L->x[0] - L->x[1] + MaxSize) % MaxSize ; i++)
    {
        printf("%d\n", L->arr[L->x[1] + i]);
    }
}

int main()
{
    link L;
    L = (Node *)malloc(sizeof(Node));
    L->x[0] = 0;
    L->x[1] = 0;

    int x,i,j;

    while(1)
    {
        printf("输入 1 以录入数字\n");
        printf("输入 2 以删除数字\n");
        printf("输入 3 以打印数字\n");
        printf("输入 4 以退出\n");
        printf("********等待录入:");
        scanf("%d", &x);

        switch (x)
        {
            case 1:
                printf("请输入传入数字:");
                scanf("%d", &i);
                Initqueue(L, i);
                break;
            case 2:
                delqueue(L, &j);
                printf("被删的头队列是: %d\n", j);
                break;
            case 3:
                printqueue(L);
                break;
            default:
                break;
        } 
        if (x == 4)
        {
            break;
        }
    }

    return 0;
}

