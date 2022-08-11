#include<iostream>
using namespace std;
class node
{

    public :
    int data;
    node *next;

    node(int dat)
    {
     
        this->data = dat;
        this->next = NULL;
    }
    ~node()
    {
        if(this->next !=NULL)
        {
            delete next;
            next = NULL;
        }
    }

    

};

void insterhead(int data , node* &tail,int element)

{
       

    if(tail==NULL)
    {
            node *tempi = new node(data);
            
            tail=tempi;
            tempi->next=tempi;
    }
    else{

                node* curr = tail;
                 while( curr-> data != element)
                 {
                    curr=curr->next;
                 }
                 node* temp = new node(data);
                 temp->next= curr->next;
                 curr->next = temp;
    }
}

void prink(node* tail){
        cout<<" print called";

    node* tempx = tail;
   

    while(tail->next !=tempx)
    {
        cout<<" "<<tail->data;
        tail=tail->next;
    }
    cout<<" "<<tail->data;
   


}
int main()
{
        cout<<" first line"<<endl;
    node *tail = NULL;
    insterhead(9,tail,10);
cout<<endl;

prink(tail);
cout<<endl;

    insterhead(8,tail,9);
    prink(tail);
cout<<endl;
    insterhead(7,tail,8);
    insterhead(6,tail,7);
    insterhead(5,tail,6);


prink(tail);

    


// prints(tail);
//     insterhead(8,tail,9);
//     insterhead(97,tail,8);
// prints(tail);
}