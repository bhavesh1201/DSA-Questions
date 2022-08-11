#include<iostream>
using namespace std;

class node{
    public:
int data;
node* next;
 
 node(int d)

 {
  this->data = d;
  this->next=NULL;
 }

 ~node()
 {
            if(this->next != 0)
            {
                delete next;
                this -> next = NULL;

            } 
            cout<<" distructed";
 }


};
void insertHead(node* &head,int data)
{
    node *temp = new node(data);
    temp->next= head;
    head = temp;
}

void instertTail(node* &tail, int data)
{
     node* temp = new node(data);
     tail->next = temp;
     tail = temp;
     

}

void insertmiddle(int position , int data , node *head , node *tail)
{

    if(position==1)
    {
        insertHead(head,data);
        return;
    }

    
    node *temp = head;
    int cnt =1;
    while(cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL)
    {
        instertTail(tail,data);
        return;
    }

     node *middle = new node(data);
    
     middle->next=temp->next;
      temp->next = middle;

}


void print(node* head)
{      node *temp = head;
       while(temp != NULL)
       {

        cout<<" "<<temp->data;
            temp = temp-> next;
       }
       cout<<endl;
       


}
void del(node* &head,int post)
{
    if(post==1)
    {   node* temp = head;
        head=head->next;
        temp -> next = NULL;
        delete temp;
    }
    else{

        node* curr= head;
        node* prev=NULL;

        int cnt=1;
        while(cnt < post)
        {          
            prev = curr;
                  curr= curr->next;
                  
                  cnt++;
        }

        prev -> next = curr->next;
        curr -> next = NULL;
        delete curr;
    }
}

int main()
{
    node *n1 = new node(10);
    node* head = n1;
    node *tail = n1;
    print(head);
    cout<<endl;
    insertHead(head,20);
    print(head);
    cout<<endl;

    insertHead(head,30);
    print(head);
    cout<<endl;
instertTail(tail,20);
    print(head);

    cout<<endl;
instertTail(tail,30);
    print(head);

    insertmiddle(3,0,head,tail);
    print(head);
    cout<<endl;
    del(head,2);
    print(head);















}