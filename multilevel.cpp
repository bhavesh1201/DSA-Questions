#include<iostream>
using namespace std;
class humans{
    public:
    int age;
    string name;

    humans()
    {
        cout<<" constructor has been called"<<endl;
    }


    void print()
    {
        cout<<" vOID PRINT HAD BEEN CALLED"<<endl;
    }

    void setname(string ch)
    {
        this -> name = ch;
    }
};

class male : public humans
{
    public:

              
      male()
      {
        cout<<" male consturctor has been called"<<endl;
      }
};

class gay : public male
{
    public:
          gay()
          {
            cout<<" gay constructor has beeen called"<<endl;
          }
};

int main()
{

 gay ramesh;
 ramesh.setname("bhardwa");
 cout<<" "<<ramesh.name;
 
 



}