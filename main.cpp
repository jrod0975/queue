#include <iostream>
#include <stdlib.h>
#include "queue.h"
using namespace std;

int main() {

	Queue* front = NULL;

	front = enqueue(front, 10);
	front = enqueue(front, 20);
	front = enqueue(front, 30);
	front = enqueue(front, 40);
	front = enqueue(front, 50);
	front = enqueue(front, 60);
	printQueue(front);
	cout << endl << endl;
	front = dequeue(front);
	printQueue(front);
	peek(front);
	front = dequeue(front);
	peek(front);
	front = removeCertainValue(front, 40);
	printQueue(front);

	return 0;
}