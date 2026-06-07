#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;//no of testcases
    while(t--)
    {
        string A,B;
        cin>>n;//length of string A
        cin>>m;//length og string B
        cin>>A;
        cin>>B;
        int freqA[26]={0};
        int freqB[26]={0};
        //frequency counting of A
        for(int i=0;i<n;i++)
        {
            freqA[A[i]-'a']++;
        }
        //frequency counting of B
        for(int i=0;i<m;i++)
        {
            freqB[B[i]-'a']++;
        }
        int copies=1000000000;
        for(int i=0;i<26;i++)
        {
            if(freqB[i]>0)
            {
                copies=min(copies,freqA[i]/freqB[i]);
            }
        }
        cout<<copies<<endl;
    }
    return 0;
}