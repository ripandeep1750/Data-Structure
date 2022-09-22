// Insertion in array
#include <iostream>
using namespace std;

void printArray(int arr[], int N)
{
	// Traverse the element of arr[]
	for (int i = 0; i < N; i++) {

		// Print the element
		cout << arr[i] << ' ';
	}
}

int main()
{
	// Initialise array
	int arr[4];

	// size of array
	int N = 4;

	// Insert elements in array
	for (int i = 1; i < 5; i++) {
		arr[i - 1] = i;
	}

	// Print array element
	printArray(arr, N);
	return 0;
}
