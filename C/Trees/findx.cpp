//Find tree contains x or not
#include <iostream>
#include "treeenode.h"
#include "queue.h"
using namespace std;



TreeNode<int>* takeInput() {
    cout << "Enter root data : ";
    int data;
    cin >> data;
    TreeNode<int>* root = new TreeNode<int>(data);
    cout << "Enter number of child of " << data << " : ";
    int num;
    cin >> num;
    for(int i = 0; i < num; i++) {
        TreeNode<int>* childRoot = takeInput();
        root -> addChild(childRoot);
    }
    return root;
}

void print(TreeNode<int>* root) {
    cout << root -> data << " : ";
    for(int i = 0; i < root -> numChild(); i++) {
        cout << root -> getChild(i) -> data << ", ";
    }
    cout << endl;
    for(int i = 0; i < root -> numChild(); i++) {
        print(root -> getChild(i));
    }
}

bool findx(TreeNode<int> *root,int x)
{  bool ans;
    if(root==NULL)
    {
        return false;
    }
    if(root->data==x)
    {
        return true;
    }
    for(int i=0; i<root->numChild(); i++)
        { ans=findx(root->getChild(i),x);


         if(x==root->getChild(i)->data)
            {
                return true;
                  }
        }
        return false;

 }
int main() {
    int x;
    cout<<"Enter x";
    cin>>x;
    TreeNode<int>* root = takeInput();
    print(root);

    bool ans =findx(root,x);

cout<<endl<<ans;
}


