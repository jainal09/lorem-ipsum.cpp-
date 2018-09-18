#include <iostream>
using namespace std;
class Base
{
public:
int a,b;
void getData()
{
   cout<<"enter values of a and b:"<<endl;
   cin>>a>>b;
}
};
class Derived: public Base
{
    public:
    void getData()
{
    cout<<"sum="<<a+b;
}
};
int main()
{
    Base obj1;
    obj1.getData();
    Derived obj;
    obj.getData();
}

/*
output:
enter values of a and b:
5
10
sum=4354132
*/
