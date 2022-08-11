#include<iostream>

class colours
{


colours ()
{
   cout<<" constructor is called";

}
  int spell = 34;
  char word = 'C';

  int getspell()
  {
    return spell;
  }
  char getword()
  {

    return word;
  }

  



};

using namespace std;
int main()
{

    colours red;

    red.spell = 35;
        
    // cout<<" "<<sizeof(red);
}