#include<iostream>

using namespace std;

int main()
{
    int n=1;
    string s;
    bool temp=true;
    for(int i=1;i<=11;i++)
    {

        if(n==1&&temp)
        {
            s=" midnight";
            cout<<12<<s<<endl;
            temp=false;

        }

        if(s==" midnight")
        {
            cout<<i<<" am\n";
            if(i==11)
                {
                    i=1;
                    n++;
                }
        }
        if(n==2)
        {
            s="noon";
            cout<<12<<s<<endl;
            n++;
        }
        if(s=="noon")
        {
            cout<<i<<" pm\n";

        }

    }
    return 0;
}
