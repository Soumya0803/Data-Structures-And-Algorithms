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
// O(n2)
Node* takeInput() {
    int data;
    cout << "Enter next element : ";
    cin >> data;
    Node *head = NULL;
    while(data != -1) {
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
        }
        else {
            Node *temp = head;
            while(temp -> next != NULL) {
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
        cout << "Enter next element : " ;
        cin >> data;
    }
    return head;
}

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
    /*
    head has become null so it will not print the list again.
    while(head != NULL) {
        cout << head -> data << " --> " ;
        head = head -> next;
    }

    */
}

int main() {
    Node* head = takeInputBetter();
    print(head);
    //print(head);

    cout << head << endl;
    cout << head -> data << endl;
    cout << head -> next << endl;

    cout << head -> next -> next << endl;
    cout << head -> next -> data << endl;










}







