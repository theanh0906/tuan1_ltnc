#include<iostream>
#include<string>

using namespace std;

string fiboraci_word(int n)
{
    if(n==0)
        return "a";
    else if(n==1)
        return "b";
    else
        return fiboraci_word(n-1)+fiboraci_word(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fiboraci_word(n);
    return 0;
}
