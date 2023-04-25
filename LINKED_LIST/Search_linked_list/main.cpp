#include <iostream>

class Node {
public:
    int data;
    Node* next;
};

void push(int number, Node** head_ref)
{
    Node* temp = new Node();
    temp->data = number;
    temp->next = *head_ref;
    *head_ref = temp;
}

bool search (Node* node , int n)
{
    Node* temp = node;
    while (temp != NULL)
    {
        if(temp->data == n)
        {
            std::cout << n << " is in the list"<<std::endl;
            return true;
        }
        temp = temp->next;
    }
    
    return false;
}

void print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        std::cout << temp->data ;
        temp = temp->next;
        if(temp != NULL)
        {
            std::cout << "->";
        }
    }
    std::cout << "\n";
}

int main()
{
    Node* head = NULL;
    push(3,&head);
    push(8,&head);
    push(7,&head);
    push(5,&head);
    push(2,&head);
    print(head);

    search(head,3);
}