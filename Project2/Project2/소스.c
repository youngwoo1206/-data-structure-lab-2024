#include <stdio.h>
#include <stdlib.h>

typedef char element;
typedef struct QNode {
	char data;
	struct QNode* link;

}QNode;

typedef struct {
	QNode* front, *rear;

}LQueueType;

LQueueType* createLinkedQueue() {
	LQueueType* LQ;
	LQ = (LQueueType*)malloc(sizeof(LQueueType));
	LQ->front = NULL;
	LQ->rear = NULL;
	return LQ;
}
int isLQEmpty(LQueueType* LQ) {
	if (LQ->front == NULL) {
		printf(" Linked Queue is empty! ");
		return 1;
	}

	else return 0;
}

void enLQueue(LQueueType* LQ, char item) {
	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	newNode->data = item;
	newNode->link = NULL;
	if (LQ->front == NULL) {
		LQ->front = newNode;
		LQ->rear = newNode;
	}
	else {
		LQ->rear->link = newNode;
		LQ->rear = newNode;
	}


}
char deLQueue(LQueueType* LQ) {
	QNode* old = LQ->front;
	char item;

	if (isLQEmpty(LQ)) return;
	else {
		item = old->data;
		LQ->front = LQ->front->link;
		if (LQ->front == NULL)
			LQ->rear = NULL;
		free(old);
		return item;
	}

}
void printLQ(LQueueType* LQ) {
	QNode* temp = LQ->front;
	printf(" Linked Queue : [");
	while (temp) {
		printf("%3c", temp->data);
		temp = temp->link;
	}
	printf(" ] ");
}

int main(void) {
	LQueueType* LQ = createLinkedQueue();
	char data;

	printf("\n ***¿¬°á Å¥ ¿¬»ê*** \n");
	printf("\n »ðÀÔ A>>"); enLQueue(LQ, 'A'); printLQ(LQ);
	printf("\n »ðÀÔ B>>"); enLQueue(LQ, 'B'); printLQ(LQ);
	printf("\n »ðÀÔ C>>"); enLQueue(LQ, 'C'); printLQ(LQ);
	printf("\n »èÁ¦ >>"); data = deLQueue(LQ); printLQ(LQ);
	printf("\n »èÁ¦ µ¥ÀÌÅÍ: %c", data);
	printf("\n »èÁ¦ >>"); data = deLQueue(LQ); printLQ(LQ);
	printf("\n »èÁ¦ µ¥ÀÌÅÍ: %c", data);
	printf("\n »ðÀÔ D>>"); enLQueue(LQ, 'D'); printLQ(LQ);
	printf("\n »ðÀÔ E>>"); enLQueue(LQ, 'E'); printLQ(LQ);

	getchar(); return 0;
}