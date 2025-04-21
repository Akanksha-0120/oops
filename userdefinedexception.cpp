#include<iostream>
using namespace std;
class Demo1
{
   /*public:
         void fun()
         {
             cout<<"this is the demo1 class"<<endl;
         }*/
};
class Demo2:public Demo1
{
   /* public:
         void fun()
         {
             cout<<"this is the demo2 class"<<endl;
         }*/
};

int main()
{
    for(int i=1;i<=2;i++)
    {
        try{
             if(i==1) throw Demo1();
            else if(i==2) throw Demo2();
         }
         catch(Demo1 d1)
         {
            cout<<"exception of demo1"<<endl;
         }
         catch(Demo2 d2)
         {
             cout<<"exception of demo2"<<endl;
         }
    }
   return 0;
}