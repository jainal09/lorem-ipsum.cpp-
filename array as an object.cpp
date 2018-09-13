#include <iostream>
using namespace std;



class sample
{
int no;

char nm [10];

public:
    void input(){
        cin>> no>>nm;
    }

    void output(){

        cout<<"no = "<< no <<endl;
        cout<<"name = " << nm;
    }
};


void main()
{
    int n;
    sample s1[n];


    cout<< "enter array name "<< n;
    cin>> n;


    for(int i = 0; i < n; i++)
    {
      s1[i].input();  /* code */
    }
      for(int i = 0; i < n; i++)
      {
          s1[i].output;
      }

}
