#include<iostream>
using namespace std;
class Construct
{
    int data1,data2;
    public:
       Construct(int a,int b=9)//constructor with default value
       {
        data1=a;
        data2=b;
       }
       void display()
       {
        cout<<"the value of data1:"<<data1<<endl;
        cout<<"the value of data2:"<<data2<<endl;
       }
};

int main()
{
    Construct c(2,8);
    c.display();
    Construct d(2);
    d.display();
   return 0;
}