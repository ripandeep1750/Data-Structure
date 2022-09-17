// C++ program to traversal in an stack 
#include<stdio.h>
#include<stack>
#include<iostream>
using namespace std;
 
//Function to print the element in stack
void printStack(stack<int>& St)
{
    // Traverse the stack
    while(!St.empty()){
        //Print top Element
        cout<<St.top()<< ' ';
        //pop top element
        St.pop();
    }
}

int main()
{
    // Initialise stack
    stack<int> St;
    
    //Insert Element in stack
    St.push(4);
    St.push(3);
    St.push(2);
    St.push(1);
    
    //Print elements in stack
    printStack(St);
    return 0;
}
