#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* link;
};
void add_at_end(struct node *head,int data){
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}
void print_data(struct node* head)
{
    int count = 0;

    if (head == NULL)
        cout << "Linked List is empty" << endl;

    struct node* ptr = head;
    while (ptr != NULL)
    {
        //count++;
        cout<<ptr->data<<endl;
        ptr = ptr->link;
    }
    //cout << count;
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
    int data;
    cin>>data;
    add_at_end(head,data);
    print_data(head);


    return 0;
}