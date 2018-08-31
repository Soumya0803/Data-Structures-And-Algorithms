#include <iostream>
//#include "node.h"
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

void print(Node *head) {
    while(head != NULL) {
        cout << head -> data << " --> " ;
        head = head -> next;
    }


    cout << endl;
}

int countrec(Node* head)
{  //int count=0;
    Node* temp=head;
    if(temp==NULL)
    {
        return 1;
    }

      return(1+countrec(temp->next));
     // count++;
}

int main() {
    int count=0,length;
    Node* head = takeInputBetter();
    print(head);
    length =countrec(head);
    cout<<length-1;

}



