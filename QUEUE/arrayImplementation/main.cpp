#include <iostream>

class Queue {
public: 
    int front,rear,size;
    unsigned capacity;
    int * array;
};

Queue* creatQueue (unsigned cap)
{
    Queue* queue = new Queue();
    queue->capacity = cap;
    queue->front = queue->size = 0;
    queue->rear = cap - 1;
    queue->array = new int[queue->capacity];
    return queue;
}

int isFull(Queue* q)
{
    return (q->size == q->capacity);
}

int isEmpty(Queue* q)
{
    return (q->size == 0);
}

void enqueue(Queue* q, int item)
{
    if (isFull(q))
        return;
    q->rear = (q->rear + 1) % (q->capacity);
    q->array[q->rear] = item;
    q->size = q->size + 1;
    std::cout << item << " enqueued ;) \n";
}


int front (Queue* q)
{
    if(isEmpty(q))
        return -1;
    return q->array[q->front];
}

int rear (Queue* q)
{
    if(isEmpty(q))
        return -1;
    return q->array[q->rear];
}

int dequeue (Queue* q)
{
    if (isEmpty(q))
        return -1;
    int item = q->array[q->front];
    q->front = (q->front + 1) % (q->capacity);
    q->size = q->size - 1;
    return item;
}

int main()
{
    Queue* queue = creatQueue (100);
    enqueue(queue,10);
    enqueue(queue,20);
    enqueue(queue,30);
    enqueue(queue,40);

    std::cout <<dequeue(queue) << " dequeued :( \n";
    std::cout << "Front item is : " << front(queue) << std::endl;
    std::cout << "Rear item is : " << rear(queue)<<std::endl;

}