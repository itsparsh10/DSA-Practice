#include<iostream>
using namespace std;
int primeornot(int n){
    
        int count=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count=count+1;
                
            }
        }
        if(count==2){
            cout<<"It is a prime";
            
        }
        else{
            cout<<"It is not prime ";
        }
}
int main()
{
    int n;
    cin>>n;
    cout<<primeornot(n)<<endl;
   return 0;
}