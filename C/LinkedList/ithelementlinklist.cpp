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
    while(head != NULL) {
        cout << head -> data << " --> " ;
        head = head -> next;
    }
    cout << endl;
    */
}



void ithelement(Node* head,int i) {
    if(head==NULL)
    {
       cout<<"Empty";
      return;
    }
    Node* tail=head;
    int curindex=0;
    while(curindex!=i  && tail!=NULL)
    {
        tail=tail->next;
        curindex++;
    }
    if(curindex==i && tail!=NULL)
        {
            cout<<tail->data;
  }
  else
    {cout<<"Not valid";}
   // return ;
}






int main() {
    int count=0,i;
    cout<<"Enter i:"<<endl;
    cin>>i;


    Node* head = takeInputBetter();
    print(head);
    ithelement(head,i);


    }


