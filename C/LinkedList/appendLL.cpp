//Append last n elements to the front
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
Node* append(Node* head,int n,int count)
{  Node* head2;
    Node*temp=head;
    if(head == NULL)
        {return NULL;}
    Node* slow=head;
    Node* fast=head;
    if(n>count)
    {
    return head;
    }
  if (n==count)
    {
       head2= reverse(head);
       return head2;
    }

for(int i=1;i<=n;i++)
                {
                    fast=fast->next;
                }


            while(fast->next!=NULL)
            { slow=slow->next;
              fast=fast->next;

                //slow=slow->next;
                //fast=slow->next->next->next->next->next;
            }
           // cout<<slow->data;
            head=slow->next;
            slow->next=NULL;
            fast->next=temp;
            return head;
}

void print(Node *head) {
    while(head != NULL) {
        cout << head -> data << " --> " ;
        head = head -> next;
    }
    cout << endl;

}

int main() {
    int n,count=0;
    cout<<"Enter n";
    cin>>n;
    Node* head = takeInputBetter(count);
    print(head);
     head=append(head,n,count);
     print(head);
}
