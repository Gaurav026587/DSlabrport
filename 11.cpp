#include<iostream>
using namespace std;
 long fact(int n)
{
    if(n==0)
    {
        return 1;
        
    }
    else
    {
        return n*fact(n-1);    
    }
}
int main()
{
    
 long n,r ,r1;
cout<<"Enter value of  N and C \n ";
cin>>n>>r;
r1=fact(n)/fact(n-r);
cout<<"Number of possible Permutation is "<<r1;
    
    return 0;
}

