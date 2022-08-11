#include<iostream>
using namespace std;

class human{
    public:

    void print()
    {
        cout<<" Human can be called";
    }
};

class male{
       
       public:

       void print()
       {
        cout<<" Male is called";
       }
};
class  ch : public human , public  male{

};
int main()
{

  ch hc;
  hc.human::print();
  hc.male::print();
}