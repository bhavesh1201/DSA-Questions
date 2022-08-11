#include<iostream>
using namespace std;
class node{

    public :
    int data;
    node *next;

    node(int data)
    {
        this-> data = data;
        this-> next = NULL;
    }
  
  


};

void insertStart(node* &head , int data)
  {
    node *temp = new node(data);
    temp -> next = head;
    head = temp;
  }

  void print (node* head)
  {
    node *temp = head;
   
    while(temp != NULL)
    {
        cout<<" "<<temp->data;
        temp = temp -> next;
    }
    cout<<" "<<endl;

  }
int main()
{

    node *n1 = new node(10);
    node *head = n1;
    print(head);

    insertStart(head, 11);
    print(head);

    insertStart(head, 12);
    insertStart(head, 13);
    print(head);



}