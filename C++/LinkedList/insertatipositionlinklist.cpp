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

void print(Node *head) {
    while(head != NULL) {
        cout << head -> data << " --> " ;
        head = head -> next;
    }
    cout << endl;

}

Node* insertAtIthPosition(Node *head, int i, int data) {
    Node *newNode = new Node(data);
    int pos = 0;
    Node *temp = head;

    if(i == 0) {
        newNode -> next = head;
        head = newNode;
    }
    else {

        while(temp  != NULL) {

            if(pos == i-1) {
                newNode -> next = temp -> next;
                temp -> next = newNode;
                //return head;
            }
             temp = temp -> next;
            pos++;
        }



    }
    return head;
}


int main() {
    Node* head = takeInputBetter();
    print(head);

   head = insertAtIthPosition(head, 3, 11);

    print(head);

}







