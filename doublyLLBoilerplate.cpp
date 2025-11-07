#include <iostream>
using namespace std;

class Node{
    public:
        Node *prev;
        int data;
        Node *next;
        
        Node(int x){
            this->prev = NULL;
            this->data = x;
            this->next = NULL;
        }
};

void printDLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void connectNode(Node *n1, Node *n2)
{
    n1->next = n2;
    n2->prev = n1;
}

int main()
{
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    
    connectNode(n1, n2);
    connectNode(n2, n3);
    connectNode(n3, n4);
    
    Node* head = n1;
    
    printDLL(head);

    return 0;
}