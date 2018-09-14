#include<iostream>
using namespace std;
class a
{
    int a1, a2;
    public:
            int sum(int n1,int n2)
            {
                a1 = n1;
                a2 = n2;
                int sum1=0;
                sum1= a1+a2;
                return sum1;
            }
            void show()
            {
                cout<<"in class a"<<endl;
            }
};
class b: public a // inheritance in class a
{
    public:
    void display()
    {
        cout<<"display function in class b"<<endl;
    }
};
class c: public b
{
    public:
            void output()
            {
                cout<<"in class c "<<endl;
                int s = sum(10,5);
                cout<<"sum = " <<s<<endl;
            }
};
int main()
{
    c c1;
    c1.show();
    c1.display();
    c1.output();
}
