#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
   int count=0;
   string str;
   getline(cin,str);
   for(int i=0;str[i]!='\0';i++)
     {
          if(str[i]==' ')
            {
                 count++;
            }
     }
   cout<<count+1;
}
