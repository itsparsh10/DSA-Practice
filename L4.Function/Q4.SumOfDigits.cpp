#include<iostream>
using namespace std;
int SumofDights(int x){
    int val=0;
    while(x>0){
        int lastdigit;
        lastdigit=x%10;
        x=x/10;
        val=val+lastdigit;

    }
    return val;
}
int main()
{
    int x;
    cin>>x;
    cout<<"The sum is "<<SumofDights(x)<<endl;

   return 0;
}