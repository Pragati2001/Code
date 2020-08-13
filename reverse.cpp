
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
void reverse(node*&head)
{
    node*C=head;
    node*P=NULL;
    node*N;
    while(C!=NULL)
    {
        N=C->next;
        C->next=P;
        P=C;
        C=N;
    }
    head=P;
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
void buildlist(node*&head)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        insertAtTail(head,data);
        cin>>data;
    }
}

istream& operator>>(istream &is,node*&head)
{
    buildlist(head);
    return is;
}
ostream& operator<<(ostream &os,node*head)
{
    print(head);
    return os;
}
int main()

{
    node*head=NULL;
    buildlist(head);
    reverse(head);
    print(head);

}
