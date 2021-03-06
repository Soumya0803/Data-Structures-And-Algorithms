//5th element from end
#include <iostream>
//#include "Node.h"
using namespace std;

class Node {
   public :
   int data;
   Node *next;

   Node (int data) {
        this -> data = data;
        next = NULL;
   }

};

// O(n)
Node* takeInputBetter() {
    int data;
    cout << "Enter first element : ";
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1) {
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail -> next = newNode;
            tail = newNode;
        }
        cout << "Enter next element : ";
        cin >> data;
    }
    return head;
}
void fifthelementend(Node* head)
{
    if(head == NULL)
        {return;}
    Node* slow=head;
    Node* fast=head;
for(int i=1;i<=5;i++)
                {
                    fast=fast->next;
                }


            while(fast!=NULL)
            { slow=slow->next;
              fast=fast->next;


            }
            cout<<slow->data;
}

void print(Node *head) {
    while(head != NULL) {
        cout << head -> data << " --> " ;
        head = head -> next;
    }
    cout << endl;

}

int main() {


    Node* head = takeInputBetter();
    print(head);
   fifthelementend(head);
}




