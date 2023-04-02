/*************************************************************************
    > File Name: test1.c
    > Author: wfuer
    > Mail: 1019222711@qq.com 
    > Created Time: 2023年02月25日 星期六 19时22分56秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#define Maxsize 10

typedef struct Node
{
    char c[Maxsize];
    int top;
}Node, *link;

void InitStack(Node ** L)
{
    *L = (Node *)malloc(sizeof(Node));
    (*L)->top = -1;
}

void Push(Node * L,char i)
{
    L->c[++(L->top)] = i;
}

bool StackEmpty(Node * L)
{
    if(L->top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Pop(Node * L, char * i)
{
    *i = L->c[(L->top)--];
}

bool check(char str[], int length)
{
    link L = NULL;
    InitStack(&L);

    for (int i = 0; i < length ; i++)
    {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            Push(L, str[i]);
        }
        else if(StackEmpty(L))
        {
            printf("配对失败");
            return false;
        }
        else
        {
            char p ;
            Pop(L, &p);
            printf("弹出括号: %c", p);
            if(str[i] == ')' && p != '(')
                return false;
            if(str[i] == ']' && p != '[')
                return false;
            if(str[i] == '}' && p != '{')
                return false;
        }
    }
    return StackEmpty(L);
}

int main()
{
    char p[] = {"(({()}))"};
    char * str = p;
    int length = sizeof(p)/sizeof(p[0]) - 1;

    if(check(str, length))
    {
        printf("配对成功!");
    }
    else
    {
        printf("失败打印!");
    }
}
