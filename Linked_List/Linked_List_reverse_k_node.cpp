#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        cout << "memory free with value " << value << endl;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertattail(Node *&tail, int data)
{
    Node *node = new Node(data);
    tail->next = node;
    tail = node;
}

void reverse(Node *&head)
{
    Node *prevptr = NULL;
    Node *currptr = head;
    Node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    head = prevptr;
}

Node *reversek(Node *&head, int k)
{
    Node *prevptr = NULL;
    Node *currptr = head;
    Node *nextptr;
    int num = 0;
    while (currptr != NULL && num < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        num++;
    }
    if (nextptr != NULL)
    {
        head->next = reversek(nextptr, k);
    }

    return prevptr;
}

// Append last k node to start of linked list
void append_last_k_node_in_first(Node* &head , int k){
    Node* temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    int pos = 0;
    Node* temp2 = head;
    Node* temp2prev = NULL;
    while (pos < len-k)
    {
        temp2prev = temp2;
        temp2 = temp2->next;
        pos++;
    }
    Node* temp3 = temp2;
    while (temp3->next != NULL)
    {
        temp3 = temp3->next;
    }
    temp2prev->next = NULL;
    temp3->next = head;
    head = temp2;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertattail(tail, 15);
    insertattail(tail, 20);
    insertattail(tail, 25);
    insertattail(tail, 30);
    insertattail(tail, 35);

    // Node *newhead = reversek(head, 2);
    // print(newhead);

    append_last_k_node_in_first(head , 2);
    print(head);
    return 0;
}
