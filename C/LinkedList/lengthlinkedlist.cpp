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
Node* takeInputBetter(int &count) {
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
            count++;
        }
        else {
            tail -> next = newNode;
            tail = newNode;
            count++;

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
    while(head != NULL) {
        cout << head -> data << " --> " ;
        head = head -> next;
    }
    cout << endl;
    */
}

int main() {
    int count=0,i,count2=0;
    Node* head = takeInputBetter(count);
    print(head);
    cout<<"Length:"<<count;

    }







