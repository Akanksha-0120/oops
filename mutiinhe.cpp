#include<iostream>
using namespace std;
class Base1
{
    public:
        int data1int;
        void setdata1int(int a)
        {
            data1int =20;
        }
};
class Base2
{
    protected:
            int data2int;
    public:
           void setdata2int(int a)
           {
              data2int=a;
           }
};
class Derived:public Base1, public Base2
{
    public:
          void show()
          {
            cout<<"the value of base1 is:"<<data1int<<endl;
            cout<<"the value of base2 is:"<<data2int<<endl;
            cout<<"the sum of the value of  is:"<<data1int+data2int<<endl;
          }

};
int main()
{
    Derived der;
    der.setdata1int(34);
    der.setdata2int(7);
    der.show();
}