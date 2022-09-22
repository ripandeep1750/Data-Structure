// Traversal in an stack
import java.util.*;
class GFG{

// Function to print the element in stack
static void printStack(Stack<Integer> St)
{
	// Traverse the stack
	while (!St.isEmpty()) {

		// Print top element
		System.out.print(St.peek() +" ");

		// Pop top element
		St.pop();
	}
}

public static void main(String[] args)
{
	// Initialise stack
	Stack<Integer> St = new Stack<>() ;

	// Insert Element in stack
	St.add(4);
	St.add(3);
	St.add(2);
	St.add(1);

	// Print elements in stack
	printStack(St);
}
}
