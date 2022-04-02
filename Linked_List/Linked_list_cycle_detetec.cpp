#include <iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        cout<<"memory is free with value : "<<value<<endl;
    }
};

void print(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;

}

void addintail(Node* &tail , int d) {
    Node* node = new Node(d);
    tail->next = node;
    tail = node;
}

void createloop(Node* &tail , Node* &head , int pos){
    Node* temp = head;
    int num = 0;
    while (temp != NULL , num < pos)
    {
        temp = temp->next;
        num++;
    }
    tail->next = temp;
}

void findloop(Node* head){
    Node* temp = head;
    Node* tem = head;
    while (temp != NULL && temp->next != NULL)
    {
        temp = temp->next->next;
        tem = tem->next;
        if (tem == temp)
        {
            cout<<"This linked list is a loop"<<endl;
            return;
        }
    }
    cout<<"This linked list is not a loop"<<endl;
}

void removecycle(Node* &head){
    Node* fast = head;
    Node* slow = head;
    do
    {
        fast = fast->next->next;
        slow = slow->next;
    } while (fast != slow);

    fast = head;
    while (fast->next != slow->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next->next = NULL;
}

int main () {
    Node* node = new Node(23);
    Node* head = node;
    Node* tail = node;
    addintail(tail , 5);
    addintail(tail , 10);
    createloop(tail , head , 2);
    findloop(head);
    removecycle(head);
    findloop(head);
    print(head);
    return 0;
}
