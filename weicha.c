/*************************************************************************
    > File Name: test1.c
    > Author: wfuer
    > Mail: 1019222711@qq.com 
    > Created Time: 2023年02月25日 星期六 18时35分53秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


typedef struct node
{
    int x;
    struct node * next;
}node, *link;

void init(link *L)
{
    link s;
    static struct node * tail;

    s = (node *)malloc(sizeof(node));
    if (s == NULL)
    {
        printf("分配失败!");
        exit(0);
    }

    printf("please enter a num:");
    scanf("%d", &s->x);

    if(*L == NULL)
    {
        *L = s;
        s->next = NULL;
    }
    else
    {
        tail->next = s;
        s->next = NULL;
    }
    tail = s;
}

void prin(link L)
{
    while(1)
    {
        if(L != NULL)
        {
            printf("%d\n", L->x);
            L = L->next;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    link L = NULL;
    int ch;

    while(1)
    {
        printf("enter 'Y',or'N' for choose:");
        do
        {
            ch = getchar();
        }while(ch != 'Y' && ch != 'N');

        if(ch == 'Y')
        {
            init(&L);
        }
        else
        {
            break;
        }
    }

    prin(L);

    return 0;
}
