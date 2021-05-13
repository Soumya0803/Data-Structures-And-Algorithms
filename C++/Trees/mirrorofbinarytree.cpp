#include <iostream>
//#include <math.h>
#include "BinaryTreeNode.h"
#include "queue.h"
using namespace std;

BinaryTreeNode<int>* takeInput()
{
    int rootData;
    cout << "Enter root data : ";
    cin >> rootData;
    if(rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.enqueue(root);
    while(!q.isEmpty())
    {
        BinaryTreeNode<int> *currentNode = q.dequeue();
        int leftChild, rightChild;
        cout << "Enter left child of " << currentNode -> data << " : ";
        cin >> leftChild;
        if(leftChild != -1)
        {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.enqueue(leftNode);
        }
        cout << "Enter right child of " << currentNode -> data << " : ";
        cin >> rightChild;
        if(rightChild != -1)
        {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.enqueue(rightNode);
        }
    }
        return root;
    }



    BinaryTreeNode<int>* mirror(BinaryTreeNode<int>* root)
    {BinaryTreeNode<int>* root2=root;
        if(root == NULL)
        {
            return root;
        }
        BinaryTreeNode<int>*ans1=  mirror(root->left);
        BinaryTreeNode<int>* ans2 =mirror(root->right);
       // BinaryTreeNode<int>* temp;
//        temp=ans1;
//        ans1=ans2;
//        ans2=temp;
root->left=ans2;
root->right=ans1;
        return root;





        //BinaryTreeNode<int>* leftside = mirror(root -> left);

        //BinaryTreeNode<int>* rightside = mirror(root -> right);


    }



    void print(BinaryTreeNode<int>* root)
    {
        if(root == NULL)
        {
            return;
        }
        cout << root -> data << " : ";
        if(root -> left != NULL)
            cout << root -> left -> data;
        cout << ", ";

        if(root -> right != NULL)
            cout << root -> right -> data;
        cout << endl;

        print(root -> left);
        print(root -> right);
    }






    int main()
    {
        BinaryTreeNode<int>* root = takeInput();
        print(root);
        mirror(root);
        print(root);

    }
