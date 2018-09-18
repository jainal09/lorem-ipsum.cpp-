
#include<iostream>
using namespace std;
class student
{
public:
int rno;
char nam[100];
void getrno()
{
    cout<<"Enter roll no: ";
    cin>>rno;
}

void getnam()
{
    cout<<"Enter student name: ";
    cin>>nam;

}
void outputrno()
{
    cout<<"Roll no: "<<rno;
}
void outputnam()
{
    cout<<endl<<"Name:  "<<nam<<endl;
}
};
class test : public student
{
    protected:
    float sub1,sub2,sub3;  // private members can only be accessible in the same class
                           // protected members can be accessible in the same class in the class where the inherit from

    public:
        int i;


                void inputmarks()

                {
                cout<<"Enter marks for sub1: ";
                cin>>sub1;
                for(i=1;i>=1;i++)
                {

                if(sub1>30){

            cout<<"Wrong value inserted!!"<<endl<<"Enter values between 0 - 30"<<endl;
        sub1=0;
        break;
}
else {
    cout<<endl<<"_______Values Accepted For Subject1________"<<endl;
    break;
}
                }
                cout<<"Enter marks for sub2: ";
                cin>>sub2;
                for(i=1;i>=1;i++)
                {

                if(sub2>30)
    {
           cout<<"Wrong value inserted!!"<<endl<<"Enter values between 0 - 30"<<endl;
        sub2=0;
        break;
}
else {
    cout<<endl<<"_______Values Accepted For Subject2________"<<endl;
    break;
}
                }
                cout<<"Enter marks for sub3: ";
                cin>>sub3;
                for(i=1;i>=1;i++)
                {

                if(sub3>30)
    {
           cout<<"Wrong value inserted!!"<<endl<<"Enter values between 0 - 30"<<endl;
        sub3=0;
        break;
}
else {
     cout<<endl<<"_______Values Accepted For Subject3________"<<endl;
    break;
}
                }
            }

            void outputmarks()
            {
                cout<<endl<<"Marks of subject 1: "<<sub1<<endl;
                cout<<endl<<"Marks of subject 2: "<<sub2<<endl;
                cout<<endl<<"Marks of subject 3: "<<sub3<<endl;

            }
};
class sports
{
  protected:
          float score;
          public:
              int i=1;
         void getsports()
          {
              cout<<endl<<"Enter sports score: ";
              cin>>score;
              for(i=1;i>=1;i++)
                {
              if(score>30){

        cout<<"Wrong value inserted!!"<<endl<<"Enter values between 0 - 30"<<endl;
        score=0;
        break;
}
else {
     cout<<endl<<"_______Values Accepted For Sports________"<<endl;
    break;
}
          }
          }
          void outputsprtsscore()
          {
              cout<<"Sports Score: "<<score<<endl;
          }
};
class result: public test, public sports
{
    float Total;
      public:
void resultoutput()
    {
        Total= sub1 + sub2 + sub3 + score;
        cout<<endl<<"----------------RESULTS------------------"<<endl;
                if(sub1<=0)
                {
                    cout<<"[Incorect input] or [U scored : 0] in - Subject1"<<endl;
                }
                else{
                    cout<<endl<<"Marks of subject 1: "<<sub1<<endl;
                }
                   if(sub2<=0)
                {
                   cout<<"[Incorect input] or [U scored : 0] in - Subject2"<<endl;
                }
                else{
                    cout<<endl<<"Marks of subject 2: "<<sub2<<endl;
                }

                   if(sub3<=0)
                {
                    cout<<"[Incorect input] or [U scored : 0] in - Subject3"<<endl;
                }
                else{
                    cout<<endl<<"Marks of subject 3: "<<sub3<<endl;
                }
                   if(score<=0)
                {
                    cout<<"[Incorect input] or [U scored : 0] in - Sports"<<endl;
                }
                else{
                      cout<<endl<<"Marks of sports   : "<<score<<endl;
                }
        cout<<"Total score: "<<Total;
        if(Total<=35)
        {

        cout<<endl<<" U Failed"<<endl;
        }
        else if(Total<=55)
        {

        cout<<endl<<" Pass!!----->Average result"<<endl;

        }
        else if(Total<=75)
        {

        cout<<endl<<" Pass!!----->Above average result"<<endl;
        }
        else if(Total<=100)
        {
            cout<<endl<<" Pass!!----->Good Result"<<endl;
        }
        else{
            cout<<endl<<" Pass!!----->Awesome result"<<endl;
        }
    }
};

int main()
{
    result r;
    r.getrno();
    r.getnam();
    r.outputrno();
    r.outputnam();
    r.inputmarks();
    r.outputmarks();
    r.getsports();
    r.outputsprtsscore();
    r.resultoutput();
}
