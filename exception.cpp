#include<iostream>
using namespace std;
int main()
{
    int a=6,b=0,c;
    try{
        //if(b==0) throw "divide by zero error";
       // throw 20;
        throw runtime_error("divide by zero");//standard exception classes
        c=a/b;
        cout<<c;
    }
    catch(const char* e){
       cout<<"exception occurred"<<endl<<e;
    }
    catch(int error)
    {
       cout<<"exception occurred"<<endl<<error;
    }
    catch(runtime_error &err)
    {
        cout<<"exception occurred"<<endl;
        cout<<err.what();

    }
   return 0;
}