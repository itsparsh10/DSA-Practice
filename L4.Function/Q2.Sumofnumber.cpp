// The Sum of number from1 to n using function
#include<iostream>
using namespace std;
int sumofn(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<"The sum of the n for 1 is : "<<sumofn(n)<<endl;
   return 0;
}

