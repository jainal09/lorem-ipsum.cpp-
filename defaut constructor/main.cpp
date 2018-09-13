#include<iostream>
using namespace std;
class defconstr
{
    public:
    int no1, no2;
defconstr()
{
    no1=5;
    no2=6;
}
void output()
{
    cout<<no1<< endl <<no2;
}
};
int main()
{
    defconstr s1;
    s1.output();
}
