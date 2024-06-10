#include "llist.h"
#include <stdio.h>

int main(){
    List* myList = newlist();
    push(myList, "First", (int*)69);
    push(myList, "Second", "(int*)69");
    push(myList, "Third", (int*)69);

    printf("Value of \"Second\" in list: %s\n", getvalue(myList, "Second"));

    printf("Size of list: %d", getsize(myList));
}