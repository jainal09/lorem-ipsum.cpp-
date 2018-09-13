#include<iostream>




class sample
{


 public:

 int a;

    //syntax    class classname 

   void input_value ()     // syntax data_type function_name()   input function created which takes values
   {
       cout<<"enter the value";
       cin>>a;

}
    void output_value()  // output funct  i o n         
    {
       cout<<a;
    }

};                //ends with semicolon    class ends here

int main()

{
  sample s1;

  s1.input();

  s1.output();


}
