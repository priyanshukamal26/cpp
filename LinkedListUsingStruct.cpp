#include <iostream>
using namespace std;

struct MyNode{
    int val;
    struct MyNode* next;
};

struct MyNode* insertBeginning(struct MyNode* head, int val)
{
    struct MyNode* new_node = (struct MyNode*)malloc(sizeof(struct MyNode));
    new_node->val = val;
    new_node->next = head;
    
    return new_node;
}

struct MyNode* insertEnd(struct MyNode* head, int val)
{
    struct MyNode* new_node = (struct MyNode*)malloc(sizeof(struct MyNode));
    new_node->val = val;
    new_node->next = NULL;
    
    // If list is empty, new node becomes the head
    if (head == NULL)
        return new_node;
    
    struct MyNode* temp = head;
    
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    
    temp->next = new_node;
    
    return head;
}
    
int main()
{
    struct MyNode* head = NULL;
    struct MyNode* n0 = NULL;

    head = insertBeginning(head, 10);
    head = insertBeginning(head, 20);
    head = insertBeginning(head, 30);
    
    n0 = insertEnd(head, 50);
    
    struct MyNode* n1 = insertEnd(head, 60);

    cout << "Linked list: ";
    
    struct MyNode* temp = head;
    
    while(temp->next != NULL)
    {
        cout << temp->val << ", ";
        temp = temp->next;
    }
    cout << temp->val;


    return 0;
}