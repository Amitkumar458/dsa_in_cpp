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

void insertatmiddle(Node* &head , Node* &tail , int pos , int d){
    Node* tem = head;
    if (pos == 1)
    {
        inserthead(head , d);
        return;
    }
    
    for (int i = 1; i < pos-1; i++)
    {
        tem = tem->next;
        if (tem->next == NULL)
        {
            insertattail(tail , d);
            return;
        }
    }
    Node* temp = new Node(d);
    temp->next = tem->next;
    tem->next = temp;
    
}

void deletemiddle(Node* &head , int pos , Node* &tail){
    Node* temp = head;
    Node* tem = head;
    if (pos == 1)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    int cnt = 1;
    while (cnt < pos)
    {
        temp = tem;
        tem = tem->next;
        cnt++;
    }
    if(tem->next == NULL){
       tail = temp;
    }
    temp->next = tem->next;
    delete tem;
}

void search(Node* head , int key) {
   Node* temp = head;
   while (temp->next != NULL)
   {
       if(temp->data == key){
           cout<<key<<" is present in Node"<<endl;
       }
       temp = temp->next;
   }
   if (temp->next == NULL)
   {
       if (temp->data == key)
       {
           cout<<key<<" is present in Node"<<endl;
       }
       
   }
   
}

void reverse(Node* &head){
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr=nextptr;
    }
    head = prevptr;
}

// reverse a linked list using recursion method
Node* reverserecurtion(Node* &head) {
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node* newhead = reverserecurtion(head->next);
    Node* headnext = head->next;
    headnext->next = head;
    head->next =  NULL;
    return newhead;
}

int main()
{
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head = node1;
    Node* tail = node1;
    cout<<head<<endl;
    inserthead(head , 12);
    inserthead(head , 15);
    insertattail(tail , 12);
    insertattail(tail , 17);
    insertatmiddle(head, tail , 6 , 50);
    deletemiddle(head , 6 , tail);
    cout<<tail->data<<endl;
    cout<<head->data<<endl;
    search(head , 50);
    print(head);
    // reverse(head);
    head = reverserecurtion(head);
    print(head);
    
    return 0;
}
