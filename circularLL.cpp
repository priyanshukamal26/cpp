#include <iostream>
using namespace std;

class Node{
    public:
        Node* next;
        int data;
        
        Node(int x)
        {
            this->data = x;
            this->next = NULL;
        }
};

void insertStart(Node* x)
{
    int t = x->data;
    
    int input;
    cin >> input;
    
    Node* c = new Node(input);
    c->next = x->next;
    x->next = c;
    
    int n = c->data;
    x->data = input;
    c->data = t;
    
    Node* temp = new Node(0);
    temp = x;
    
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != x);
}

void deleteStart(Node *x)
{
    Node* temp = new Node(0);
    temp = x;
    
    do{
        temp = temp->next;
    }while(temp->next != x);
    
    temp->next = x->next;
    x = x->next;
    
    temp = x;
    
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != x);
}

int main()
{
    Node* head = new Node(0);
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = head;
    Node* tail = new Node(0);
    
    insertStart(head);
    cout << endl;
    // deleteStart(head);

    return 0;
}