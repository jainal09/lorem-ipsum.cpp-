#include<iostream>
using namespace std;
class a
 {
     public:
  void display()
  {
  cout<<"in class a"<<endl;
  }
};
class b
{
    public:
    void display()
    {
        cout<<"in class b"<<endl;
    }
};
class c: public a , public b
{
public:
void output()
{
    cout<<"in class c"<<endl;
}
};
int main()
{


    c c1;
    c1.a::display();   //syntax obj.class name::func();
    c1.b::display();
    c1.output();
}
