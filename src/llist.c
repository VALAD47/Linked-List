#include "llist.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
extern C {
#endif

//Creating and initialising new list
List* newlist(){
    List* newList = (List*)malloc(sizeof(List));
    newList->first = NULL;
    newList->last = NULL;
}

//Pushing element in end of list
//value can be any data type you want
//
//Returning 0 if success
int push(List* L, char* name, void* value){
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    if(newNode == NULL){
        return 1;
    }
    newNode->name = name;
    newNode->value = value;
    newNode->nextNode = NULL;

    if(L->first == NULL){
        L->first = newNode;
    }

    if(L->last != NULL){
        L->last->nextNode = newNode;
    }
    L->last = newNode;
    return 0;
}

void* getvalue(List* L, char* name){
    ListNode* next = L->first;
    while (next!=NULL){
        if (strcmp(next->name, name) == 0){
            return next->value;
        }
        next = next->nextNode;
    }
}

void pop(List* L){
    ListNode* preLast = NULL;
    ListNode* step = L->first;
    while (preLast==NULL){
        if(step->nextNode = L->last)
            preLast = step->nextNode;
    }
    free(L->last);
    L->last = preLast;
}

//Deleting whole list
void deletelist(List* L){
    ListNode* step = L->first;
    while(step != NULL){
        ListNode* now = step;
        step = step->nextNode;
        free(now);
    }
}

int getsize(List* L){
    ListNode* step = L->first;
    int size = 0;

    while(step!=NULL){
        size++;
        step = step->nextNode;
    }

    return size;
}

#ifdef __cplusplus
}
#endif