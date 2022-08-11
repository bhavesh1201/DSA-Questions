#include<iostream>
using namespace std;

class colours{

    public:

    int spell = 4;
    char name = 'c';

    

    // colours()

    // {
        // cout<<" constructor called\n";
        
    // }
 /*  colours(int spell,char name)
   {
    this -> spell = spell;
    this -> name = name;
   }
   void print()
    {
        cout<<" "<<this-> name;
        cout<<" "<<this->spell;
    }
    */





char getname()
{
    return name;
}

void setname( char name)
{

    name = 'z'; 
}


};
int main()
{


  colours pink;
  cout<<" "<<pink.getname();













   /* colours red(7,'a');
    colours blue(red);
    red.print();
    blue.print();
    
    cout<<" "<<red.spell;
    cout<<" "<<red.name;
    */
   
}