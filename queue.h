#ifndef QUEUE_H
#define QUEUE_H

struct Queue {
	int value;
	struct Queue* next;
};

Queue* enqueue(Queue* front, int value);
Queue* dequeue(Queue* front);
void printQueue(Queue* front);
void peek(Queue* front);
Queue* removeCertainValue(Queue* front, int value);


#endif
