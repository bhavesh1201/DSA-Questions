#include<iostream>
using namespace std;

class stack{
    public:

    int *arr;
    int top;
    int size;

    stack(int size)
    {
        this ->size = size;
        arr = new int[size];
        this->top =-1; 


    }

    void push(int element)
    {
          
          if(size - top > 1)
          {
            top++;
            arr[top]=element;
          }
          else{
        
        cout<<" Stack Overflow";
          }
    }
    
    void pop ()
    {
  if(top>=0)
  {
    top--;
  }
  else{
    cout<<" stack underflow";
  }
        
    }
    void peak()
    {
        if(top >= 0)
        {
            cout<<" "<<arr[top];
        }
        else{
            cout<<" stack is empty";
        }
    }

    bool isempty()
    {
        if(top == -1)
        {
             return true;
        }
        else 
        {
            return false;
        }
    }
};
int main()
{ 
    stack s1(4);

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    

    s1.peak();
    s1.pop();
    s1.peak();

    




}