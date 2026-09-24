/* Simulate the Singh is King cinema ticket counter using a queue. */
#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int customerId)
{
	if (rear == MAX - 1)
	{
		printf("House full: customer %d cannot join the queue.\n", customerId);
		return;
	}

	if (front == -1)
	{
		front = 0;
	}

	queue[++rear] = customerId;
	printf("Customer %d joined the queue.\n", customerId);
}

void serveCustomer(void)
{
	if (front == -1 || front > rear)
	{
		printf("No customers are waiting.\n");
		return;
	}

	printf("Serving customer %d.\n", queue[front++]);

	if (front > rear)
	{
		front = -1;
		rear = -1;
	}
}

void displayQueue(void)
{
	if (front == -1)
	{
		printf("The queue is empty.\n");
		return;
	}

	printf("Customers waiting: ");
	for (int i = front; i <= rear; i++)
	{
		printf("%d ", queue[i]);
	}
	printf("\n");
}

int main(void)
{
	int customers[] = {100, 150, 95, 86};
	int customerCount = sizeof(customers) / sizeof(customers[0]);

	for (int i = 0; i < customerCount; i++)
	{
		enqueue(customers[i]);
	}

	displayQueue();
	serveCustomer();
	displayQueue();

	return 0;
}

