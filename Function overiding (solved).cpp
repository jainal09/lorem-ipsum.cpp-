/* 
        class Base
        {
            ... .. ...
            public:
          void getData(); <<---------------------.
            {                                    . 
             ... .. ...                          . 
            }                                    .
        };                                       .  Function
                    class Derived: public Base   .   Call2
                         {                       .
            ... .. ...                           . 
                        public:                  .
  .-------------------> void getData();          .
  .      {                                       .
  .          ... .. ...                          .
  .          Base::getData(); ....................         
  .          ... ... ...
  .      }                            Function Call 1
  .      };
  .      int main()
  .      {
  .      Derived obj;               
  .......obj.getData();
        }
        */

 #include <iostream>
using namespace std;
class Base
{
public:
int a,b;

    void getData(){
    cout<<"Enter values of a,b:";
    cin>>a>>b;

    }
};
class Derived:public Base
{
public:
    int sum;
void getData(){
    Base::getData();
    sum=a+b;
    cout<<endl<<"sum="<<sum;
}

};
int main()
{
    Derived obj;
    obj.getData();
}
