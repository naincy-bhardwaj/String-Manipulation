#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    string s;
    char temp;
    int ct=0;
    getline(cin,s);
    int l=s.length()-1;
    for(int i=0;i<l;i++,l--)
    {
        temp=s[i];
        s[i]=s[l];
        s[l]=temp;
    }
    cout<<s;
    return 0;
}
