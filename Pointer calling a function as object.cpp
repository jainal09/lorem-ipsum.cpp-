#include <iostream>
using namespace std;
class Base
{
    public:
    void point()
    {
cout<<"Base Class";
    }
};
int main()
{
Base *b;
b->point();
}
