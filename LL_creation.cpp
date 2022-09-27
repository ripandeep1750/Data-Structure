// Implement a Linked List
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
}

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    
    //alocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
    
    head->data = 1; // assign data in first node
    head->next = second;  //link first node wih second node
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    
    return 0;
}
