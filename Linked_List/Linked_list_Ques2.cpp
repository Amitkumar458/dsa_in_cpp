#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        cout << "memory free with value " << value << endl;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertattail(Node *&tail, int d)
{
    Node *node = new Node(d);
    tail->next = node;
    tail = node;
}

void mergesorted(Node* head1, Node* head2, Node* &head3)
{
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* temp3 = head3;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            temp3->next = temp1;
            temp1 = temp1->next;
        }
        else
        {
            temp3->next = temp2;
            temp2 = temp2->next;
        }
        temp3 = temp3->next;

    }
    if (temp1 != NULL)
    {
        while (temp1 != NULL)
        {
            temp3->next = temp1;
            temp3 = temp3->next;
            temp1 = temp1->next;
        }
        
    }
    if (temp2 != NULL)
    {
        while (temp2 != NULL)
        {
            temp3->next = temp2;
            temp3 = temp3->next;
            temp2 = temp2->next;
        }
        
    }
    
    
}

int main()
{
    Node *node1 = new Node(1);
    Node *head1 = node1;
    Node *tail1 = node1;
    insertattail(tail1, 4);
    insertattail(tail1, 6);
    insertattail(tail1, 8);
    insertattail(tail1, 9);
    print(head1);

    Node *node2 = new Node(2);
    Node *head2 = node2;
    Node *tail2 = node2;
    insertattail(tail2, 3);
    insertattail(tail2, 5);
    insertattail(tail2, 7);
    insertattail(tail2, 10);
    print(head2);

    Node* node3 = new Node(0);
    Node* head3 = node3;
    mergesorted(head1, head2, head3);
    print(head3);
    return 0;
}
