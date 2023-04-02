/*************************************************************************
    > File Name: test.c
    > Author: wfuer
    > Mail: 1019222711@qq.com 
    > Created Time: 2023年02月18日 星期六 23时58分06秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>

typedef struct Listinsert
{
    int data;
    struct Listinsert *prior, *next;
}Node ,*link;

bool initlist(link *L)
{
    L = (Node *)malloc(sizeof(Node));
    if(L == NULL)
    {
        return false;
    }
    L->prior = NULL;
    L->next = NULL;
    return true;
}

bool Empty(link L)
{
    if(L->next == NULL)
        return true;
    else
        return false;
}

bool insertnode(Node *p, Node *s)
{
    if(p == NULL || s == NULL)
    {
        return false;
    }
    s->next = p->next;
    if(p->next != NULL)
        p->next->prior = s;
    s->prior = p;
    p->next = s;
    return true;
} 

void testdlink()
{
    link L;
    initlist(L);
};

int main()
{

}
