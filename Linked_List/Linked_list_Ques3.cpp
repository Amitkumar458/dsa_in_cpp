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
    ~Node() {
        int value = this->data;
        cout<<"memory free with value "<<value<<endl;
    }
};

void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertattail(Node* &tail , int d){
    Node * temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void inserthead(Node* &head , int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Put Even Position Node after Odd Position Node
void putevenafterodd(Node* head1 , Node* &head2) {
    Node* tempeven = head1->next;
    Node* tempodd = head1;
    Node* tem = head2;
    // while (tempodd->next != NULL)
    // {
    //     tem->next = tempodd;
    //     tempodd = tempodd->next->next;
    //     tem = tem->next;
    // }
    while (tempeven->next != NULL)
    {
        tem->next = tempeven;
        tempeven = tempeven->next->next;
        tem = tem->next;
    }
    
}

int main() {
    Node* node = new Node(1);
    Node* head = node;
    Node* tail = node;
    insertattail(tail , 2);
    insertattail(tail , 3);
    insertattail(tail , 4);
    insertattail(tail , 5);
    insertattail(tail , 6);
    insertattail(tail , 7);
    insertattail(tail , 8);
    insertattail(tail , 9);
    insertattail(tail , 10);
    // print(head1);
    Node* temp = new Node(0);
    putevenafterodd(head , temp);
    print(temp);
    return 0;
}