#include<iostream>
using namespace std;
class a{
    public:
    int value;

    void print()
    {
        cout<<" this is a";
    }

    void setvalue(int ch)
    {
        this -> value = ch;
    }
};

class b : public a{

};

class c : public a{

};


int main()
{

b bc;
c  cb;
a ca;
bc.print();
bc.setvalue(34);
cout<<" "<<bc.value<<endl;
cb.setvalue(43);
cout<<" "<<bc.value<<endl;
cout<<" "<<cb.value<<endl;
cout<<" "<<ca.value<<endl;

}