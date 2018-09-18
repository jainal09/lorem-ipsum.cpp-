/*  class Base
{
    ...........
    public:
    void getData(); <-----------------------  
    {                                      .
        ... ... ...                        .
    }                                      .
};                                         .
class Derived: public Base                 .
{                                          .    
    .. .. ..                               .
    public:                                .
    void getData(); <---------.            . This function 
    {                         .            . will not be 
        ... ... ...           .            . called.
    }                         .            .
};                            . Function   .
                              .   Call     .  
int main()                    .            .
{                             .            .
    Derived obj;              .            .
                 -------------.            .
    obj.getData(); .........................
}
*/



#include <iostream> 
using namespace std;
class Base
{
public:
int a=5,b=10;
void getData()
{
   
}
};
class Derived: public Base
{
    public:
    void getData()
{
    cout<<"sum="<<a+b;
}
};
int main()
{
    Derived obj;
    obj.getData();
}