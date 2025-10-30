#include <iostream>
using namespace std;

class linkedlist {
public:
    int data;
    linkedlist* next;

    linkedlist(int d) {
        this->data = d;
        this->next = NULL;
    }
};

int main() {
    linkedlist* head = new linkedlist(10);
    
    linkedlist* l1 = new linkedlist(20);
    (*head).next = l1;
    
    linkedlist* l2 = new linkedlist(30);
    (*l1).next = l2;
    
    linkedlist* l3 = new linkedlist(40);
    (*l2).next = l3;
    
    linkedlist* l4 = new linkedlist(50);
    (*l3).next = l4;
    
    // cout << "Node data: " << l4->data << endl;
    
    while(head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
    
    return 0;
}







// // INSERTION AT START GFG

// /*
// class Node {
//   public:
//     int data;
//     Node *next;

//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };
// */

// class Solution {
//   public:
//     Node *insertAtFront(Node *head, int x) {
//         // Code here
//         Node* l1 = new Node(x);
//         (*l1).next = head;
//         head = l1;
//         return head;
//     }
// };





// // INSERTION AT END GFG
// /*
// class Node {
//   public:
//     int data;
//     Node* next;

//     // Default constructor
//     Node() {
//         data = 0;
//         next = NULL;
//     }

//     // Parameterised Constructor
//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// */
// class Solution {
//   public:
//     Node *insertAtEnd(Node *head, int x) {
//         // Code here
//         Node *newNode = new Node(x);
//         Node *temp = head;
        
//         if (head == NULL) {
//             return newNode;
//         }
        
//         while(temp->next != NULL)
//         {
//             temp = temp->next;
//         }
        
//         temp->next = newNode;
//         return head;
//     }
// };