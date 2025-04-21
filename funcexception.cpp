#include<iostream>
using namespace std;
void test() throw(/*int,char,runtime_error*/)
{
    throw 20;
}
int main()
{
    try{
        test();
    }
    catch(int err)
    {
        cout<<"exception occurred\n"<<err;
    }
    catch(char c)
    {
        cout<<"exception occurred\n"<<c;
    }
    catch(runtime_error rt)
    {
        cout<<"exception occurred\n"<<rt.what();
    }
   return 0;
}