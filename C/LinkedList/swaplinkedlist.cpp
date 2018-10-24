#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

     Node(int data)
     {
         this->data=data;
         next=NULL;
     }


};
Node* takeinput(){
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
}

void swap(Node *head, int pos1, int pos2)
{
    int count1=0,count2=0;
    Node *temp1;
    temp1=head;
    Node* temp2;
    temp2=head;
    Node *swap1;
    Node *swap2;
    if (head==NULL)
    {
        cout<<"Empty";
        return ;
    }
    while(count1!=pos1  && temp1!=NULL)
    {   // swap1=temp1;
        temp1=temp1->next;
        count1++;

    }

    while(count2!=pos2  && temp2!=NULL)
    {
       // swap2=temp2;
        temp2=temp2->next;
        count2++;
    }
cout<<"c1:"<<count1<<endl<<count2<<endl;
cout<<"temp1:"<<temp1->data<<endl<<temp2->data;;

    Node *temp3;
    if(count1==pos1 && count2==pos2)
   {

   temp3->data=temp1->data;
    temp3->next=temp1->next;

    temp1->data=temp2->data;
    temp1->next=temp2->next;

    temp2->data=temp3->data;
    temp2->next=temp3->next;
}
else{
    cout<<"Invalid";
}
}




int main() {

    Node* head = takeinput();
    print(head);
    int pos1,pos2;
    cout<<endl<<"Enter first position:";
    cin>>pos1;
    cout<<"Enter second position:";
    cin>>pos2;
    swap(head,pos1,pos2);
    print (head);
}
