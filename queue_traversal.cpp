// Traversal in an queue
#include <bits/stdc++.h>
using namespace std;
 
void printQueue(queue<int>& Q)
{
	// Traverse the stack
	while (!Q.empty()) {

		// Print top element
		cout << Q.front() << ' ';

		// Pop top element
		Q.pop();
	}
}

int main()
{
	// Initialise queue
	queue<int> Q;

	// Insert element
	Q.push(1);
	Q.push(2);
	Q.push(3);
	Q.push(4);

	// Print elements
	printQueue(Q);
	return 0;
}
