#include<iostream>
using namespace std;
int main()
{
    int i;
    int N;
    cout<<"ENTER THE LENGTH OF ARRAY";
    cin>>N;
    int A[N];
    cout<<"ENTER THE ELEMENTS OF ARRAY";
    for(i=0;i<N;i++)
    {
        cin>>A[i];
    }
    int pairs=0;
    for(i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i!=j)
            {
                if(A[i]-i==A[j]-j)
                {
                    pairs++;
                }
                else{return 0;}
            }
        }
    }
    cout<<"THE NO OF ODERED PAIRS :"<<pairs;
    return 0;
} 