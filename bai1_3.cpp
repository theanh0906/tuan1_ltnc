#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int maxs=100;
    int mins=1;
    int the_1,the_2;
    int n=0;
    for(int i=0;i<50;i++)
    {
        the_1=rand()%(maxs-mins+1)+mins;
        the_2=rand()%(maxs-mins+1)+mins;
        cout<<the_1<<" "<<the_2<<"   ";
        int xem_the=rand()%(2-1+1)+1;
        cout<<xem_the<<"   ";
        if(xem_the==1)
        {
            if(the_1>50)
            {
                cout<<the_1<<" ";
                if(the_1>the_2)
                {
                    cout<<"win"<<endl;
                    n++;
                }
                else
                    cout<<"lose"<<endl;
            }
            else if(the_1<=50)
            {
                cout<<the_2<<" ";
                if(the_2>the_1)
                {
                    cout<<"win"<<endl;
                    n++;
                }
                else
                    cout<<"lose"<<endl;
            }
        }
            else if(xem_the==2)
        {
            if(the_2>50)
            {
                cout<<the_2<<" ";
                if(the_2>the_1)
                {
                    cout<<"win"<<endl;
                    n++;
                }
                else
                    cout<<"lose"<<endl;
            }
            else if(the_2<=50)
            {
                cout<<the_1<<" ";
                if(the_1>the_2)
                {
                    cout<<"win"<<endl;
                    n++;
                }
                else
                    cout<<"lose"<<endl;
            }
        }
        }
    cout<<n;

    return 0;
}
