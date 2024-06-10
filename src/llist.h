#pragma once
#ifdef __cplusplus
extern "C" {
#endif

typedef struct ListNode
{
    const char* name;
    void* value;
    void* nextNode;
} ListNode;

typedef struct List
{
    ListNode* first;
    ListNode* last;
} List;

List* newlist();

//Getting value from linked list by name
//Returning NULL if no such element in list
//@param value should be a pointer to any value or NULL
int push(List* L, char* name, void* value);
//Deleting last element from list
void pop(List* L);


void* getvalue(List* L, char* name);
//Deleting whole list
void deletelist(List* L);
int getsize(List* L);

#ifdef __cplusplus
}
#endif