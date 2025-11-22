#include<stdio.h>

#define MaxQueueSize 100

typedef MexQueueSize 100

typedef struct 
{
    int key;
} Element ;


Element Queue[MaxQueueSize];

int Front = -1;
int Rear = -1;

void CreateQ()
{
    Front = -1;
    Rear = -1;
}

int IsEmpty()
{
    return Front == Rear;
}

int IsFull() 
{
    return Rear == MexQueueSize -1;
}