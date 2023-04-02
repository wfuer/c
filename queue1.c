/*************************************************************************
    > File Name: test4.c
    > Author: wfuer
    > Mail: 1019222711@qq.com 
    > Created Time: 2023年02月25日 星期六 16时39分03秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define MaxSize 10

typedef struct Node
{
    int arr[MaxSize];
    int x[2];
}Node, *link;

int size = 0;

void Initqueue(Node * L, int x)
{
   if((L->x[0] + 2 + MaxSize) % MaxSize == L->x[1])
   {
       printf("录入失败，队列已满");
   } 
   else
   {
       L->x[0] = (L->x[0] + 1 + MaxSize) % MaxSize;
       L->arr[L->x[0]] = x; 
   }
}

void delqueue(Node * L, int * x)
{
    if((L->x[0] + 1 + MaxSize) % MaxSize == L->x[1])
    {
        printf("队列已空，无法删除");
    }
    else
    {
        *x = L->arr[L->x[1]];
        L->x[1] = (L->x[1] + 1 + MaxSize) % MaxSize;
    }
}

void printqueue(Node * L)
{
    for(int i = 0 ; i < (L->x[0] - L->x[1] + MaxSize + 1) % MaxSize ; i++)
    {
        printf("%d\n", L->arr[L->x[1] + i]);
    }
}

int main()
{
    link L;
    L = (Node *)malloc(sizeof(Node));
    L->x[0] = (MaxSize - 1) % MaxSize;//队尾
    L->x[1] = 0;//队头

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

