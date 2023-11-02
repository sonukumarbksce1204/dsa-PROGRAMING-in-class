#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* link;
};

void counts(struct node* head)
{
    int count = 0;

    if (head == NULL)
        cout << "Linked List is empty" << endl;

    struct node* ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    cout << count;
}

int main()
{
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    struct node* current = (struct node*)malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;
    head->link = current;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 30;
    current->link = NULL;
    head->link ->link= current;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 40;
    current->link = NULL;
    head->link->link->link = current;

    counts(head);

    return 0;
}