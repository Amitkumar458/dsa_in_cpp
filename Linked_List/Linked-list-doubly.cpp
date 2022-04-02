#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int d){
        data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node() {
        int value = this->data;
        cout<<"memory free with value "<<value<<endl;
    }
};

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" "; 
        temp = temp->next;
    }cout<<endl;
    
}

void insertathead(Node* &head , int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertattail(Node * &tail , int d) {
    Node * temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void inseratposition(Node* &head , Node* &tail , int pos  , int d) {
    Node* temp = head;
    if (pos == 1)
    {
        insertathead(head , d);
        return;
    }
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
        if (temp->next == NULL)
        {
            insertattail(tail , d);
            return;
        }
        
    }
    Node* tem = temp->next;
    Node* node = new Node(d);
    node->prev = temp;
    node->next = temp->next;
    temp->next = node;
    tem->prev = node;
}

int main () {
    Node* node1 = new Node(15);
    Node* head = node1;
    Node* tail = node1;
    insertathead(head , 30);
    insertattail(tail , 34);
    inseratposition(head , tail , 1 , 45);
    print(head);
    return 0;
}
