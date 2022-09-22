// Program to illustrate dequeue in queue
#include <bits/stdc++.h>
using namespace std;

void printQueue(queue<int> myqueue)
{
	// Traverse the queue and print element at the front of queue
	while (!myqueue.empty()) {

		// Print the first element
		cout << myqueue.front() << ' ';

		// Dequeue the element from the front of the queue
		myqueue.pop();
	}
}

int main()
{
	// Declare a queue
	queue<int> myqueue;

	// Insert element in queue from
	// 0 to 5
	for (int i = 1; i < 5; i++) {

		// Insert element at the front of the queue
		myqueue.push(i);
	}

	// Print element before pop from queue
	printQueue(myqueue);

	cout << endl;

	// Pop the front element
	myqueue.pop();

	// Print element after pop from queue
	printQueue(myqueue);
	return 0;
}
