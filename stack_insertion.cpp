// Insertion in array
#include <bits/stdc++.h>
using namespace std;

void printStack(stack<int>& St)
{

	// Traverse the stack
	while (!St.empty()) {

		// Print top element
		cout << St.top() << ' ';

		// Pop top element
		St.pop();
	}
}

int main()
{
	// Initialise stack
	stack<int> St;

	// Insert Element in stack
	St.push(4);
	St.push(3);
	St.push(2);
	St.push(1);

	// Print elements in stack
	printStack(St);
	return 0;
}
