#include<iostream>
using namespace std;

class node 
{
public:
int value;
node *next;
node(int data)
{
    this -> value = data;
    this -> next = NULL;
}






};
void inster(node* &head , int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void abcde(node* &head)
{
    node *temp = head;
    while(temp != NULL)
    {
        cout<<" "<<temp->value;
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
 
node *n1 = new node(10);
cout<<" "<<(*n1).value;
cout<<" "<<n1->next;
node *head = n1;


  abcde(head);
  inster(head,12);
  abcde(head);



}