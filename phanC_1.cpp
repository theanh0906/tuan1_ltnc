#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0,maxs=0,mins=1000;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>n;
        sum+=arr[i];
        if(arr[i]>=maxs)
            maxs=arr[i];
        if(arr[i]<=mins)
            mins=arr[i];
    }
    cout<<(double)sum/n<<endl<<maxs<<endl<<mins;
    return 0;
}
