#include<iostream>
using namespace std;
int minval(int a,int b)
{
    if(a>b){
        return b;
    }
    else{
        return a;
    }
    }
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"The minvalue of this is :" <<minval(a,b)<<endl;

   return 0;
}