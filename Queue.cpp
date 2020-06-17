#include <iostream>
#include <stdlib.h>
#include "queue.h"

using namespace std;

void printQueue(Queue* front) {
	Queue* curr = front;
	while (curr != NULL) {
		cout << curr->value << "->";
		curr = curr->next;
	}
}


Queue* enqueue(Queue* front, int value) {
	if (front == NULL) {
		Queue* newFront = (Queue*)malloc(sizeof(Queue));
		newFront->value = value;
		newFront->next = NULL;
		return newFront;
	}
	else {
		Queue* next = (Queue*)malloc(sizeof(Queue));
		next->value = value;
		next->next = NULL;

		Queue* curr = front;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = next;
		return front;
	}
}

Queue* dequeue(Queue* front) {
	Queue* toDequeue = front;
	front = front->next;
	free(toDequeue);
	return front;
}

void peek(Queue* front) {
	cout << "The value at the front of the queue is ";
	cout << front->value << endl;
}

Queue* removeCertainValue(Queue* front, int value) {
	Queue* prev = NULL;
	Queue* curr = front;
	
	if (front->value == value) {
		Queue* temp = front;
		front = front->next;
		free(temp);
		return front;
	}

	while (curr->value != value) {
		prev = curr;
		curr = curr->next;
	}
	prev->next = curr->next;
	free(curr);
	return front;

}