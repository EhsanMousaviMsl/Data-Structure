#include <iostream>
#define MAX 1000
class Stack
{
    int top;
public:
    int a[MAX];
    Stack(){top = -1;}
    bool push(int);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top > MAX - 1)
    {
        std::cout << "Stack Overflow!";
        return false;
    }
    else
    {
        a[++top] = x;
        std::cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top <= 0)
    {
        std::cout << "Stack Overflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

int Stack::peek()
{
    int x ;
    if (top < 0)
    {
        std::cout << "stack is empty";
    }
    else
    {
        x = a[top];
    }
  return x;

}

bool Stack::isEmpty()
{
    return (top < 0);
}

int main()
{
    std::cout << "hey there\n\n";

    Stack b;
    b.push(15);
    b.push(48);
    b.push(68);
    b.push(84);

    std::cout << b.pop() << std::endl;
    std::cout << "top element is: " << b.peek()<<std::endl;
    std:: cout << b.pop() << std::endl;
    std::cout << "top element is: " << b.peek() <<std::endl;
}


