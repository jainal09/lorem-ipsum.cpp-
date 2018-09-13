#include <iostream>

using namespace std;


   class sample
 {

int no[5];
public:

     void input()
     {
         for(int i=0;i<5;i++)
         {


        cin>>no[i];
         }
     }

     void output()
     {
         for(int i=0;i<5;i++)
         {
             cout<<no[i];
         }
     }
 };
   int main()
   {


   sample s1;
   s1.input();
   s1.output();
   return 0;
}
