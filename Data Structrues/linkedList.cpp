#include <iostream>
using namespace std;

class LinkedList
{
private:
    class node
    {
    public:
        int body;
        node *next;

        node()
        {
            body = 0;
        }

        node(int data)
        {
            body = data;
        }
    };
    node *tail;

public:
    node *head;
    int length;

    ~LinkedList()
    {
        node *elem;
        node *nextElem = head;
        for (int i = 0; i < length; ++i)
        {
            elem = nextElem;
            nextElem = elem->next;
            delete elem;
        }
    }

    // Only with length
    LinkedList(int len)
    {
        head = new node();
        node *lastElem = head;
        for (int i = 1; i < len; ++i)
        {
            lastElem->next = new node();
            lastElem = lastElem->next;
        }
        tail = lastElem;
        length = len;
    }

    // Length and init element
    LinkedList(int len, int data)
    {
        head = new node(data);
        node *lastElem = head;
        for (int i = 1; i < len; ++i)
        {
            lastElem->next = new node(data);
            lastElem = lastElem->next;
        }
        tail = lastElem;
        length = len;
    }

    LinkedList() {}

    void addItem(int data)
    {
        if (tail == nullptr)
        {
            head = new node(data);
            tail = head;
            length = 1;
        }
        else
        {
            tail->next = new node(data);
            tail = tail->next;
            ++length;
        }
    }

    int getAtIndex(int idx)
    {
        if (idx >= length)
            throw "Index out of range";

        if (idx == 0)
            return head->body;
        if (idx == (length - 1))
            return tail->body;

        node *elem = head;
        for (int i = 1; i <= idx; ++i)
        {
            elem = elem->next;
        }
        return elem->body;
    }
    void setAtIndex(int idx, int data)
    {
        if (idx >= length)
            throw "Index out of range";

        if (idx == 0)
        {
            head->body = data;
            return;
        }
        if (idx == (length - 1))
        {
            tail->body = data;
            return;
        }

        node *elem = head;
        for (int i = 1; i <= idx; ++i)
        {
            elem = elem->next;
        }
        elem->body = data;
        return;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
