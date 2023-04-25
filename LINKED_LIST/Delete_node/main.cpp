#include <iostream>

class Node 
{
public:
    int data;
    Node* next;
    // constructor
    Node(int a)
    {
        this->data = a;
        this->next = NULL;
    }
};

void deleteNode(int pos, Node* head)
{
    Node* temp = head;
    for(int i{}; i < pos - 2; i++)
    {
        temp = temp->next ;
    }
    Node* temp2 = temp->next;
    temp->next = temp2->next;
    delete(temp2);
}

void insert(int number, Node* head)
{
    Node* temp = head;
    temp->data = number;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    Node* temp2 = temp;
    temp->next = NULL;
    delete(temp2);
    
}

void print(Node* node)
{
    Node* temp  = node;
    while (temp != NULL)
    {
        std::cout<< temp->data;
        temp = temp->next;
        if(temp != NULL)
        {
            std::cout << "->";
        }
    }

    
}

int main()
{
    Node* head = NULL;
    insert(6,head);
    insert(2,head);
    insert(3,head);
    print(head);

}