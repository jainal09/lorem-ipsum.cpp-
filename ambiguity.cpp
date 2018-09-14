/* What is ambiguity problem?
The most obvious problem with multiple inheritance occurs during function overriding.

Suppose, two base classes have a same function which is not overridden in derived class.

If you try to call the function using the object of the derived class, compiler shows error. It's because compiler doesn't know which function to call. For example,

class base1
{
  public:
     void someFunction( )
     { .... ... .... }  
};
class base2
{
    void someFunction( )
     { .... ... .... } 
};
class derived : public base1, public base2
{
    
};

int main()
{
    derived obj;

    obj.someFunction() // Error!  
}

This problem can be solved using scope resolution function to specify which function to class either base1 or base2

int main()
{
    obj.base1::someFunction( );  // Function of base1 class is called
    obj.base2::someFunction();   // Function of base2 class is called.
}


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
