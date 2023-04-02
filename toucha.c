/*************************************************************************
    > File Name: test2.c
    > Author: wfuer
    > Mail: 1019222711@qq.com 
    > Created Time: 2023年02月23日 星期四 13时32分03秒
 ************************************************************************/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

typedef struct Node{
    int x;
    struct Node * next;
}Node, *link;

void Initlist(Node * L)
{
    link s;
    s = (Node *)malloc(sizeof(Node));
    if(s == NULL)
    {
        printf("nei cun fei pei shi bai!");
        exit(0);
    }
    printf("please enter num = ");
    scanf("%d", &s->x);
    s->next = L->next;
    L->next = s;
}

void printlist(Node * L)
{
    link s = L->next;
    while(1)
    {
        if(s != NULL)
        {
            printf("%d\n", s->x);
            s = s->next;
        }
        else
            break;
    }
}

int main()
{
    link L;
    L = (Node *)malloc(sizeof(Node));
    L->next = NULL;
    int ch;

    while(1)
    {
        printf("please print 'Y' for enter , and 'N' for exit:");
        do
        {
            ch = getchar();
        }while (ch != 'Y' && ch != 'N');
        if(ch == 'Y')
        {
            Initlist(L);
        }
        else
            break;
    }

    printlist(L);
}
