#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cout<<"enter length and no of operations";
    cin>>n;
    cin>>k;
    string bulb;
    cout<<"enter the string of bulbs";
    cin>>bulb;
   
    for(int L=1;L<n;L++)
    { int count=0;int i=0;
while(i<n)
{
    if(bulb[i]=='1')
    {
        i=i+L;
        count++;
    }
    else
    {
        i++;
    }
}
if(count<=k)
{
    cout<<L<<endl;
    break;
}

    }
    return 0;
}