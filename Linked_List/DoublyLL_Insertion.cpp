#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *pre;

    // default ctor
    Node()
    {
        this->next = NULL;
        this->pre = NULL;
    }

    // param ctor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->pre = NULL;
    }
};

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int findLenght(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    //    Empty LL
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // NON_EMPTYLL

        // step 01: create newNode
        Node *newNode = new Node(data);

        // step 02: newNode ke next ko head se connect kro
        newNode->next = head;

        // step 03: head ke pre ko newNOde se connect kro
        head->pre = newNode;

        // step 04: updata head
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    //    Empty LL
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // NON_EMPTYLL

        // step 01: create newNode
        Node *newNode = new Node(data);

        // step 02: newNode ke next ko head se connect kro
        newNode->pre = tail;

        // step 03: head ke pre ko newNOde se connect kro
        tail->next = newNode;

        // step 04: updata head
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node*tail,int data,int position)
{
    int length = findLenght(head);
    //    Empty LL
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    else if(position==1)
    {
        insertAtHead(head,tail,data);
    }

    else if(position >length)
    {
        insertAtTail(head,tail,data);
    }

    else
    {
        //create new node
        Node* newNode = new Node(data);

        // set pre & next node 
        Node* currNode =head;
        Node* preNode = NULL;

        while(position != 1)
        {
            position--;
            preNode = currNode;
            currNode = currNode->next;

        }
        // app position par ho jaha data insert krana h
        preNode->next = newNode;
        newNode->pre = preNode;
        newNode->next = currNode;
        currNode->pre = newNode;

    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,tail,40);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,10);
    insertAtTail(head,tail,50);
    insertAtPosition(head,tail,200,1);
    printLL(head);
    
    return 0;
}