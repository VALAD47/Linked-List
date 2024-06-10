#include "llist.h"
#include <stdlib.h>
#include <stdio.h>

//Creating and initialising new list
List* newlist(){
    List* newList = (List*)malloc(sizeof(List));
    newList->first = NULL;
    newList->last = NULL;
}

//Pushing element in end of list
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