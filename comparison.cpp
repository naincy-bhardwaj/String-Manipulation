#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   char str1[50];
   char str2[50];
   cin>>str1;
   cin>>str2;
   int f=strcmp(str1, str2);
    if(f==0) 
     {
        cout<<"Strings are identical";
     }
   else
     {
        cout<<"Strings are not identical";
     }
   return 0;
}
