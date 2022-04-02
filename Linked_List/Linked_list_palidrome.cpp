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
        cout<<"memory is free with value : "<<value<<endl;
    }
};

void print(Node *head)
{
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }cout<<endl;
}

void addintail(Node* &tail , int d) {
    Node* node = new Node(d);
    tail->next = node;
    tail = node;
}

Node* findmiddleelement(Node* head){
    Node* tem = head;
    Node* temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        tem = tem->next;
        temp = temp->next->next;
    }
    return tem;
}

Node* reverse(Node* &middle){
    Node* prevptr = NULL;
    Node* currptr = middle;
    Node* nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr=nextptr;
    }
    Node* lastptr = prevptr;
    return lastptr;
}

void findpalidrome(Node* head , Node* lastptr){
    Node* first = head;
    Node* last = last;
    while (first != NULL && last != NULL)
    {
        if (first -> data != last->data)
        {
            cout<<"Linked list is not palidrome "<<endl;
            return;
        }
        first = first->next;
        last = last->next;
    }
    cout<<"The Linked list is palidrome "<<endl;
}

int main()
{
    Node *node = new Node(12);
    Node *head = node;
    Node *tail = node;
    addintail(tail , 10);
    addintail(tail , 8);
    addintail(tail , 6);
    addintail(tail , 8);
    addintail(tail , 10);
    addintail(tail , 12);
    print(head);
    Node* middle = findmiddleelement(head);
    Node* lastptr = reverse(middle);
    findpalidrome(head , lastptr);
    return 0;
}
