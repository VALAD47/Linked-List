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
int push(List* L, char* name, void* value);
void* getvalue(List* L, char* name);