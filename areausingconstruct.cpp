#include<iostream>
using namespace std;
class A
{  
      int r;
      public:
           A()
           {
            
              cout<<"enter radius :"<<endl;
              cin>>r;
              cout<<"area of circle is :"<<3.14*r*r<<endl;
           }
};
int main()
{ 
     A a; 
   return 0;
}