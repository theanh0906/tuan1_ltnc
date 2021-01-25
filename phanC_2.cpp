#include<iostream>

using namespace std;

int main()
{
    int n=0;
    while(n!=-1){
        cin>>n;
        if(n%5==0&&n>=0)
            cout<<n/5<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
