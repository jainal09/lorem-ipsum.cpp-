


#include<iostream>
using namespace std;
class a
{
    int i;      //private member
    public:
            a()  // parent  constructor called
            {
                i=5;
            }

            void show()   // parent class function
            {
                cout<<"i="<<i;
            }
};

class b: public a       //child class with inherited parameters from parent
{
    int j;
    public:
    b()  // child constructor called
    {
        j=10;
    }
    void display()  //child class function
    {
        cout<<"j="<<j;
        show();      //excessing parent function
    }
};
int main()
{
    b b1;         //child class object
    b1.display();  //excessing child class function
}
