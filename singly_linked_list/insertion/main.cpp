#include <iostream>


class Node
{
public:
    int data;
    Node* next;
};

// insertion at the fronth
void printList(Node* n)
{
    while(n != NULL)
    {
        std::cout << n->data << " ";
        n = n->next;
    }
    std::cout<<"\n";
}
void push(Node** node, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *node;
    *node = new_node;
}

int main()
{
    Node* head = new Node();
    Node* secound = new Node();
    Node* third = new Node();

    head->data = 2;
    secound->data = 3;
    third->data = 4;

    head->next = secound;
    secound->next = third;
    third->next = NULL;

    

    printList(head);
    push(&head,1);
    printList(head);

}