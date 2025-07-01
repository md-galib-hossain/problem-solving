
#include<iostream>
using namespace std;
int main()
{
    string s="abcdefghi";
    int k = 2;
//if(k>s.length())
    for(int i=0; i<s.length(); i+=2*k)
    {


        for(int j=i; j<i+2*k; j++)
        {
            //cout<<"j:"<<j<<endl;
            if(2*i<=s.length())
            {
                cout<<"i:"<<i<<endl;
//cout<<j<<endl;
                char temp=s[j];

                s[j]=s[j+1];
                s[j+1]=temp;
            }
            //cout<<"j:"<<j<<endl;
        }
    }

cout<<s<<endl;

    return 0;
}
