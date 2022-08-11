#include<iostream>
using namespace std;
class node
{ 
    public:
int data ;
node *next;
node *prev;

node(int d)
{
    this->data=d;
    this->next=NULL;
    this->prev=NULL;
}
};
 void insertHead(node* &head , int data,node* &tail)
 {
    if(head==NULL)
    {
        node *temp = new node(data);
        head= temp;
        tail= temp;
    }
    node *temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
 }
 void insertTail(node* &tail , int data, node* &head)
 {
    if(tail==0)
    {
        node* temp = new node(data);
        tail = temp;
        head=temp;
    }
            node *temp = new node(data);
            tail-> next = temp;
            temp-> prev= tail;
            tail= temp;
 }

 void insertPosition(node* &head, int position , int data, node* &tail)
 {

    if(position==1)
    {
        insertHead(head,data,tail);
        return;
    }
    node* pre = head;
    int cnt = 0;
    while(cnt < position-1)
    {
        pre= pre->next;
        cnt++;
    }
    if(pre->next==NULL)
    {
        insertTail(tail,data,head);
        return;
    }
    node* temp = new node(data);
    temp -> next = pre->next;
    temp->prev= pre;
    pre->next->prev = temp;
    pre->next = temp;
    


 }


void print (node *head)
{
node* temp = head;
while(temp != NULL)
{ 
    cout<<" "<<temp->data;
    temp = temp->next;
    

}
cout<<endl;
}

int len(node *head)
{
    int cnt=0;
    node* temp = head;
     while(temp != NULL)
     {
        cnt++;
        temp=temp->next;
     }
     return cnt;
}

int main()
{

node *n1 = new node(1);
node* head = NULL;
node* tail =  NULL ;
print(head);
cout<<" "<<len(head);
insertHead(head,2,tail);
insertHead(head,3,tail);

print(head);
cout<<" "<<len(head);
insertTail(tail,2,tail);
print(head);

insertTail(tail,3,tail);
print(head);

insertPosition(head,3,0,tail);
insertPosition(head,1,4,tail);
insertPosition(head,6,4,tail);
print(head);











}