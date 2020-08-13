



#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void insertAtTail(node*&head,int data)
{
    if(head==NULL)
    {
        head=new node(data);
        return;
    }
    node*tail=head;
    while(tail->next!=NULL)
    {tail=tail->next;}
    tail->next=new node(data);
    return;
}
istream& operator>>(istream &is,node*head)
{
    buildlist(head);
    return is;
}
ostream& operator<<(ostream &os,node*head)
{
    buildlist(head);
    return os;
}
node *midpoint(node*head)
{
    if(head==NULL||head->next==NULL)
    return head;
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
node*merge(node*a,node*b)
{
    if(a==NULL)
    return b;
    else if(b==NULL)
    return a;
    node*c;
    if(a->data<b->data)
    {
        c=a;
        c->next=merge(a->next,b);
    }
    else
        {c=a;
        c->next=merge(a,b->next);}
        return c;
}

void buildlist(node*&head)
{
    int data;
    cin>>data;
    while(data!=NULL)
    {
        insertAtTail(head,data);
        cin>>data;
    }
}
void print(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    print(head);
}


