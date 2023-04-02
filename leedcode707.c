/*************************************************************************
    > File Name: leedcode707.c
    > Author: wfuer
    > Mail: 1019222711@qq.com 
    > Created Time: 2023年03月25日 星期六 19时59分48秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct {
    

} MyLinkedList;


MyLinkedList* myLinkedListCreate() {

}

int myLinkedListGet(MyLinkedList* obj, int index) {

}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {

}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {

}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {

}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {

}

void myLinkedListFree(MyLinkedList* obj) {

}
int main()
{
    MyLinkedList* obj = myLinkedListCreate();
    int param_1 = myLinkedListGet(obj, index);
 
    myLinkedListAddAtHead(obj, val);
 
    myLinkedListAddAtTail(obj, val);
 
    myLinkedListAddAtIndex(obj, index, val);
 
    myLinkedListDeleteAtIndex(obj, index);
 
    myLinkedListFree(obj);
}
