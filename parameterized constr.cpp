#include<iostream>
using namespace std;
class constr
{
 public:
 int value;
 constr(int x)
  {
   value=x;
  }
};

int main()
{
 constr c1(10);
 cout << c1.value;


}