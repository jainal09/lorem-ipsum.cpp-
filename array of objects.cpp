#include<iostream>

class sample
{
char nm[10];
int no;
public:

    void input()
    {
        cin>>no>>nm[10];
    }
    void output()
    {
        cout<<"no="<<no<<endl;
        cout<<"name"<<nm[10];
    }
};
int main()
{
    int n;
    sample s1[20];

cout<<"enter array count";
cin>>n;
for(int i=0;i<n;i++)
{
    s1[i].input();

}
for(int i=0;i<n;i++)
{
    s1[i].output();

}
}
