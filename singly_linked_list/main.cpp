#include <iostream>


class Node{
public:
    int data;
    Node* next;
};

void addXtoList(Node* node, int x)
{
    while(node != NULL)
    {
        node->data = node->data + x;
        node = node->next;
    }
}

void printList(Node* n)
{
    while(n != NULL)
    {
        std::cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    head->data = 1;
    second->data =2;
    third->data = 3;
    fourth->data = 4;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    printList(head);
    addXtoList(head, 3);
    std::cout << "\naddin three to the elelements of the list:"<<std::endl;
    printList(head);

    return 0;
}
