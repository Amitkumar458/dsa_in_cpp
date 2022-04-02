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

// find intersection point of two linked list
void intersection(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    int len1 = 0;
    int len2 = 0;
    while (temp1 != NULL)
    {
        temp1 = temp1->next;
        len1++;
    }
    while (temp2 != NULL)
    {
        temp2 = temp2->next;
        len2++;
    }
    int final = len1 - len2;
    temp1 = head1;
    temp2 = head2;
    while (final > 0)
    {
        temp1 = temp1->next;
        final--;
    }
    while (temp1 != NULL || temp2 != NULL)
    {
        if (temp1 == temp2)
        {
            cout<<"Yes Both Linked List Intersect Each Other"<<endl;
            return;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    cout<<"No Both Linked List Not Intersect Each Other "<<endl;
}

int main()
{
    // first linked list
    Node *node1 = new Node(1);
    Node *head1 = node1;
    Node *tail1 = node1;
    insertattail(tail1, 2);
    insertattail(tail1, 3);
    insertattail(tail1, 4);
    insertattail(tail1, 5);

    // second linked list
    Node *node2 = new Node(6);
    Node *head2 = node2;
    Node *tail2 = node2;
    insertattail(tail2, 7);
    insertattail(tail2, 8);
    tail1->next = tail2;
    insertattail(tail2, 9);
    insertattail(tail2, 10);
    print(head1);
    print(head2);
    intersection(head1, head2);
    return 0;
}