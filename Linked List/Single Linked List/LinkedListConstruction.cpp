#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// Insert at Start
void addNodeStart(ListNode *&head, ListNode *&tail, int val)
{
    if (head == NULL)
    {
        ListNode *newnode = new ListNode(val);
        head = tail = newnode;
    }
    else
    {
        ListNode *newnode = new ListNode(val);
        newnode->next = head;
        head = newnode;
    }
}

// Insert at End.
void addNodeEnd(ListNode *&head, ListNode *&tail, int val)
{
    if (head == NULL)
    {
        ListNode *newnode = new ListNode(val);
        head = tail = newnode;
    }
    else
    {
        ListNode *newnode = new ListNode(val);
        tail->next = newnode;
        tail = newnode;
    }
}

// Traversing a Linked List
void traverseLinkedList(ListNode *&head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void deleteLinkedList(ListNode *&head)
{
    while (head != NULL)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;

    addNodeEnd(head, tail, 1);
    addNodeEnd(head, tail, 2);
    addNodeEnd(head, tail, 3);
    addNodeEnd(head, tail, 4);
    addNodeEnd(head, tail, 5);
    addNodeEnd(head, tail, 6);

    traverseLinkedList(head);
    cout << endl;
    cout << head->val << " " << tail->val << endl;

    deleteLinkedList(head);

    return 0;
}