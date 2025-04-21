#include<iostream>
using namespace std;
class A
{
    protected:
        int a;
        A()
        {
            cout<<"enter a number:"<<endl;
            cin>>a;
        }
};
class B:public A{
    public:
       void getsq()
       {
         cout<<"the square of a number:"<<a*a<<endl;
       }
};
class C:public A{
    public:
        void getcb()
        {
            cout<<"the cube of a number"<<a*a*a<<endl;
        }
};
int main()
{ 
    //A a1;
    B b;
    b.getsq();
    C c;
    c.getcb();
   return 0;
}