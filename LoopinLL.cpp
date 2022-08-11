#include<iostream>
using namespace std;
class node{
    public :
    int data;
     node* next;

     node(int d)
     {
         this->data = d;
         this-> next = NULL;
     }
};


void insertHead(node* &head,int data)
{

node *temp = new node(data);

temp->next = head;
head=temp;


}

void insertTail(node* &tail , int data)

{


    node * temp = new node(data);
    
    tail->next= temp;

    tail=temp;

 
       
    
}
void insertPos(node* &head ,node* &tail , int posti , int data)
{
 
if(posti == 1)
{
   insertHead(head,data);
   return;
}

int cnt = 1;

node * track = head;
while(cnt < posti-1)

{
    track=track->next;
    cnt++;
     
}
if(track->next == NULL)
{

    insertTail(tail,data);
    return;
}
node* temp = new node(data);

temp-> next = track->next;
track->next=temp; 



}

void print(node* head)
{  
    node * temp = head;
     
     while(temp != NULL)
     {
        cout<<" "<<temp->data;
        temp = temp ->next;
     }
}
int main()
{

    node *n1 = new node(10);

    node * head= n1;
    node *  tail = n1;
    insertHead(head,20);
    insertTail(tail,5);
    insertTail(tail,6);
    insertTail(tail,7);

    insertPos(head,tail,1,0);
    insertPos(head,tail,7,99);
    insertPos(head,tail,2,50);

    print(head);


}