#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    return head;
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    head->next = second;
    Node *th = new Node(30);
    second->next = th;
    Node *fo = new Node(40);
    th->next = fo;
    fo->next = NULL;

    head = reverse(head);

    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
    }

    return 0;
}
