#include <iostream>
using namespace std;

class DoubleLinkedList
{
public:
    int value;
    DoubleLinkedList *prev;
    DoubleLinkedList *next;

    DoubleLinkedList(int val)
    {
        this->value = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

int main()
{

    return 0;
}