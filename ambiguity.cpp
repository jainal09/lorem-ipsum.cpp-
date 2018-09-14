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


    c c2;
    c2.a::display();   //syntax obj.class name::func();
    c2.b::display();
    c2.output();
}
