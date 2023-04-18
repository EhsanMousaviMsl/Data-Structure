#include <iostream>


class Node{
public:
    int data;
    Node* next;
    Node(int value)
    {
        data = value;
        next = NULL;

    }
};
// add int x to every elemet of linked list.
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

void push(Node*& head, int new_data)
{
    Node* new_node = new Node(new_data);
    new_node->next = head;
    head = new_node;
}

void append(Node*& last, int new_data)
{
    if (last == NULL)
    {
        std::cout << "there is not data :)\n";
        return;
    }
    Node* new_node = new Node(new_data)
    while(last != NULL)
    {
        new_node->next = last;
        last = new_node;
    }
}

int main()
{
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

 

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    printList(head);
    addXtoList(head, 3);
    std::cout << "\naddin three to the elelements of the list:"<<std::endl;
    printList(head);
    push(head,3);
    std::cout <<"\npush number 3 to the front of linked list"<<std::endl;
    printList(head);

    return 0;
}
