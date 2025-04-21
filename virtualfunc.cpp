#include<iostream>
using namespace std;
class B{
    public:
         int vb=1;
          void display()
         {
            cout<<"1 displaying base class variable"<<vb<<endl;
         }
};
class D:public B
{
    public:
        int vd=2;
        void display()
        {
            cout<<"2 displaying base class variables"<<vb<<endl;
            cout<<"2 displaying derived class variables"<<vd<<endl;
        }
};
int main()
{
    D *bp;
   // B ob;
    D obj;
    //bp=&ob;
    bp=&obj;
    bp->display();
   return 0;
}