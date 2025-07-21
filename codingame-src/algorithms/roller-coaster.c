// Algorithm to solve the "Roller Coaster" problem on CodinGame.
// https://www.codingame.com/training/hard/roller-coaster
// Puzzles  Classic puzzle - Hard  Roller Coaster
// Pass all test cases to win the game.

#include <stdlib.h>
#include <stdio.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

typedef struct{
    int person;
    int id;
    struct node *next;
}node;

node* front = NULL;
node* rear = NULL;

long int cashProfit[50000] = {NULL};
node* cashEndId[50000] = {NULL};

void Enqueue(int x, int id) 
{
	node* temp = (node*)malloc(sizeof(node));
	temp->person = x;
	temp->id = id;
	temp->next = NULL;
	if(front == NULL && rear == NULL){
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}

void Dequeue() 
{
	node* temp = front;
	if(front == rear) {
		front = rear = NULL;
	}
	else {
		front = front->next;
	}
	Enqueue(temp->person, temp->id);
}

void plusDequeue(int startId) 
{
    node *tmp = cashEndId[startId];
	rear->next = front;
	front = tmp->next;
	tmp->next = NULL;
	rear = tmp;
}

int main()
{
    int L;
    int C;
    int N;
    scanf("%d%d%d", &L, &C, &N);
    for (int i=0; i<N; i++) {
        int Pi;
        scanf("%d", &Pi);
        Enqueue(Pi, i);
    }
    long int profit=0;
    for (int i=0; i<C; i++) {
        int tempN = 0;
        int tempL = L;
        int startId;
        unsigned long long int stepProfit = 0;
        if (cashProfit[front->id] != NULL) {
            profit += cashProfit[front->id];
            plusDequeue(front->id);
        } else {
            startId = front->id;
            while (tempL >= front->person && tempN < N){
                tempL -= front->person;
                stepProfit += front->person;
                cashEndId[startId] = front;
                Dequeue();
                tempN++;
            }
            profit += stepProfit;
            cashProfit[startId] = stepProfit;
        }
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%ld", profit);
    return 0;
}