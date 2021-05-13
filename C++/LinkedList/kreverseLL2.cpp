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
Node* reverse(Node *head)
{   Node* temp=head;
    Node *previous=NULL;
    Node*temp1;
    if(head==NULL)
    {
        cout<<"Empty";
        return NULL;
    }

    while(temp!=NULL)
    {
        temp1=temp->next;
        temp->next=previous;
        previous=temp;
        temp=temp1;
    }

return previous;}

Node* helper(Node* head,int k)
{

        Node* previous = NULL;
       Node* temp1;
        for(int i=0; i<k; i++)
    {
        temp1=head->next;
        head->next=previous;
        previous=head;
        head=temp1;

    }
    Node* actualhead=previous;
    while(previous->next!=NULL)
        previous=previous->next;
    previous->next=head;

return actualhead;
}


Node* kreverse(Node* head,int k,int length)
{   Node* newhead;
    if(head == NULL)
        {return head;}

        if(k>length)
           {Node* rhead= reverse(head);
           return rhead;
           }
           else{
        for(int i=0; i<(length/k) ; i++)
            {   newhead=helper(head,k);
                for(int j=0; j< k; j++)
                {
                    head=newhead->next;
                }
            }
            }
            return newhead;
}
void print(Node *head) {
    while(head != NULL) {
        cout << head -> data << " --> " ;
        head = head -> next;
    }
    cout << endl;

}

int main() {

    int k,count=0;

    cout<<"Enter k";
    cin>>k;
    Node* head = takeInputBetter(count);
    print(head);

    Node* newhead;
   kreverse(head,k,count);
   print(newhead);


   /*for( int i=1; i<=k ;i++)
   {
       newhead=newhead->next;

   }*/
 //  cout<<newhead->data;
  //print(newhead);
}
