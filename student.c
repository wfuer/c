/*************************************************************************
    > File Name: test1.c
    > Author: wfuer
    > Mail: 1019222711@qq.com 
    > Created Time: 2023年03月04日 星期六 10时46分36秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node
{
    char name[40];
    float score;
    struct Node *next;
}node,*link;

node *(findnode)(link L,char name[])
{
    link s = L;
    if(s->next == NULL)
    {
        printf("表空!\n");
        return NULL;
    }
    else if(strcmp(s->next->name,name) == 0)
    {
        return s; 
    }
    else
    {
        s = s->next;
    }
}

void write(link L)
{
    printf("请录入学生姓名:");
    scanf("%s", L->name);
    printf("请录入学生成绩:");
    scanf("%f", &L->score);
}

void Initlist(link * L)
{
    static link tail;
    link p = (node *)malloc(sizeof(node));
    if(p == NULL)
    {
        printf("内存分配失败!");
        exit(0);
    }

    write(p);
    if((*L)->next == NULL)
    {
        (*L)->next = p;
        p->next = NULL;
    }
    else
    {
        p->next = tail->next;
    }
    tail = p;
}

void findlist(link L)
{
    char name[40];
    printf("请输入查询的学生姓名:");
    scanf("%s",name);
    link t = findnode(L,name);
    if(t != NULL)
    {
        printf("查询到的学生姓名为:%s\t",t->next->name);
        printf("查询到的学生成绩为:%.2f\n",t->next->score);
    }
    else
    {
        printf("查询失败!\n");
    }
}

void delete(link L)
{
    char name[40];
    printf("请输入需要删除的学生姓名:");
    scanf("%s",name);
    link t = findnode(L,name);
    link d = t;
    if(t != NULL)
    {
       t->next = t->next->next;
       free(d); 
    }
    else
    {
        printf("删除失败!\n");
    }
}

void print(link L)
{
    link s = L;
    while(1)
    {
        if(L->next == NULL)
        {
            printf("表内无学生!\n");
        }
        if(s->next != NULL)
        {
            printf("查询到的学生姓名为:%s\t",s->next->name);
            printf("查询到的学生成绩为:%.2f\n",s->next->score);
            s = s->next;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    link L = (node *)malloc(sizeof(node));
    L->next = NULL; 
    int ch;

    while(1)
    {
        printf("***********************\n");
        printf("******1、录入学生******\n");
        printf("******2、查询学生******\n");
        printf("******3、删除学生******\n");
        printf("******4、打印学生******\n");
        printf("******5、清空列表******\n");
        printf("******6、退出链表******\n");
        printf("*请输入1 - 6来选择功能:\n");
        printf("***********************\n");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:Initlist(&L);break;
            case 2:findlist(L);break;
            case 3:delete(L);break;
            case 4:print(L);break;
            case 5:system("clear");break;
            case 6:break;
            default:printf("输入错误，请重新输入\n");break;
        }
       if(ch == 6) 
           break;
    }
}
