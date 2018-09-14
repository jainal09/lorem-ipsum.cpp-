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
    void show()
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
    c1.display();
    c1.show();
    c1.output();
}
