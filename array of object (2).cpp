#include<iostream>
using namespace std;
class sample
{

public:
    char nm[10];
    int no;

    void input()
    {
        cin>>no;
        cin>>nm;
    }
    void outputrno()
    {
        cout<<"no="<<no<<endl;
    }
    void name_output()
    {
        cout<<nm;
    }
};
int main()
{
    int n=0;
    cout<<"enter array count:";
     cin>>n;

    sample s1[n];

for(int i=0;i<n;i++)
{
    s1[i].input();

}
for(int i=0;i<n;i++)
{
    s1[i].outputrno();

}
for(int i=0;i<n;i++)
{
    s1[i].name_output();

}

}
