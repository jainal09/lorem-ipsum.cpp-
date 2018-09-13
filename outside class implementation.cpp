#include <iostream>
using namespace std;



class sample
{
int no;

public:
    void input();

    void output();
};

        void sample :: input(){
            cin>> no;
    }
        void sample :: output() {
             cout<<"no = "<< no <<endl;
    }


int main()
{
       sample s1;


          s1.input();
          s1.output();


}

