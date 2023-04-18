#include <iostream>

class Stack
{
public:   
    int data;
    Stack *next;
};

Stack* newNode(int x)
{
    Stack* node = new Stack();
    node->data = x;
    node->next = NULL;
    return node;
}

bool isEmty(Stack* a)
{
    return !a;
}

void push (Stack**a,int num)
{
    Stack* stack_node = newNode(num);
    stack_node->next = *a;
    *a = stack_node;
    std::cout << num << " pushed to stack\n";
}

int pop(Stack **a)
{
    if (isEmty(*a))
        return 0;
    Stack *temp = *a;
    *a = (*a)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

int peek(Stack* a)
{
    if (isEmty(a))
        return 0;
    return a->data;
}

int main()
{
    Stack* a = nullptr;
    push(&a,13);
    push(&a,43);
    push(&a,18);
    
    std::cout << pop(&a) << "poped from stack.\n";
    std::cout << "top element is "<<peek(a) << std::endl;
    std::cout << "Elements that are in Stack:\n";
    while(!isEmty(a))
    {
        std::cout << peek(a) << " ";
        pop(&a);
    }
}