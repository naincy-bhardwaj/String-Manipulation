#include <iostream>

using namespace std;

int main()
{
   string s1;
   getline(cin,s1);
   string r = s1.substr(3,9); 
   cout<<"String is: "<< r; 
   return 0;
}
