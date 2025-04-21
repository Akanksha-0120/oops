#include<iostream>
using namespace std;
class base
{
    public:
        int data1,data2;
        void setdata()
        {
            data1=20;
            data2=45;

        }
        int getdata()
        {
            cout<<" the value of data1 = "<<data1<<endl
                 <<"the value of data2 = "<<data2<<endl;          
        }
};

class derive:public base{
    public:
       int data3;
       void process()
       {
        data3=data1*data2;
       }
       void display()
       {
           getdata();
        cout<<"the product of data = "<<data3<<endl;
       }
};
int main()
{
    derive d;
   d.setdata();
  
    d.process();
    d.display();
    return 0;
}