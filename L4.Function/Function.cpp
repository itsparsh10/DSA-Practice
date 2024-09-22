#include<iostream>
using namespace std;
// this is the exaple of void return 
//There is also is parameterized function
void returnFunction(int a){
    cout<<"This is a return function"<<endl;
    cout<<a<<endl;
}
int  intFunction(){
    cout<<"This is a return function"<<endl;
    return 4;
}

int main()
{
    int val=intFunction();
    cout<<val<<endl;

    // function call and function invoeke
    for(int i=0;i<5;i++){
        returnFunction(5);
    }
    
   return 0;
}