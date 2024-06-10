#include "llist.h"
#include <stdio.h>

int main(){
    List* myList = newlist();
    push(myList, "First", (int*)69);
    push(myList, "Second", "(int*)69");
    push(myList, "Third", (int*)69);
    printf("First object: %s %d\tLast object : %s %d\n", myList->first->name, myList->first->value, myList->last->name, myList->last->value);
}