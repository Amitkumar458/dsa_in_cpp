#include <iostream>
using namespace std;

class Node
{
  public:
    int data;
    Node* next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node() {
        int value = this->data;
        cout<<"memory free with value "<<value<<endl;
    }
};

void print(Node* head)
{
    Node* temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

void insertattail(Node* &tail , int d){
    Node* head = tail->next;
    Node* node = new Node(d);
    tail->next = node;
    node->next = head;
    tail = node;
}

int main()
{
    Node *node = new Node(1);
    node->next = node;
    Node *head = node;
    Node *tail = node;
    insertattail(tail , 4);
    print(head);
    return 0;
}