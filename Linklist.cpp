#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;   // Correct type

    // Constructor
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void addatbegin(Node* &head, int value)
{
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(Node*head,int value){
    Node*newNode =new Node(value);
    if(head==NULL){
        head =newNode;
        return;
    }
}

void display(Node *head)
{
    if(head == NULL)
    {
        cout << "Head is NULL" << endl;
        return;
    }

    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;   // Move to next node
    }

    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;

    addatbegin(head, 5);
    addatbegin(head, 3);
    addatbegin(head, 2);

    display(head);

    return 0;
}