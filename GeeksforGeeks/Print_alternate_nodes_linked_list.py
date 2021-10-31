"""
Print alternate nodes of a linked list using recursion

Example:
Input : 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10
Output : 1 -> 3 -> 5 -> 7 -> 9 
"""

# A linked list node
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
 
# Inserting node at the beginning
def push( head_ref, new_data):
 
    new_node = Node(new_data);
    new_node.data = new_data;
    new_node.next = head_ref;
    head_ref = new_node;
    return head_ref;
 
# Function to print alternate nodes of
# linked list. The boolean flag isOdd
# is used to find if the current node
# is even or odd.
def printAlternate( node, isOdd):
    if (node == None):
        return;
    if (isOdd == True):
        print( node.data, end = " ");
    if (isOdd == True):
        isOdd = False;
    else:
        isOdd = True;
    printAlternate(node.next, isOdd);
 
# Driver code
 
# Start with the empty list
head = None;
 
# create below list
# 1->2->3->4->5->6->7->8->9->10
head = push(head, 10);
head = push(head, 9);
head = push(head, 8);
head = push(head, 7);
head = push(head, 6);
head = push(head, 5);
head = push(head, 4);
head = push(head, 3);
head = push(head, 2);
head = push(head, 1);
 
printAlternate(head, True);