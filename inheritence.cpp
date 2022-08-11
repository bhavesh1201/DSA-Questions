#include<iostream>
using namespace std;
class human
{
    protected:

  int height;
  int weight;
  string color;

   int getheight()
   {
    return this-> height;
   }
   void setheight(int x)
   {
    this-> height = x;
   }


};


class male : public human
{
public:
int age;


int getheight()
{
    return this-> height;
}
void print()
{

    cout<<" this function is called";
}


};

 int main()
 {

    male h1;
    cout<<endl<<" Value"<<h1.getheight();
    // cout<<endl<<" Value"<<h1.color;
    // cout<<endl<<" Value"<<h1.height;
    // cout<<endl<<" Value"<<h1.weight;
    // h1.print();


 }