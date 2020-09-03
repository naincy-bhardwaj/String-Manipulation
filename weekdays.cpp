#include <iostream>
#include<string.h>

using namespace std;

int main()
{
   char day[10];
   cin>>day;
   if(strcmp(day,"Monday")==0 || strcmp(day,"MONDAY")==0 || strcmp(day,"monday")==0)
        cout<<"1";
   else if(strcmp(day,"Tuesday")==0 || strcmp(day,"TUESDAY")==0 || strcmp(day,"tuesday")==0)
        cout<<"2";
   else if(strcmp(day,"Wednesday")==0 || strcmp(day,"WEDNESDAY")==0 || strcmp(day,"wednesday")==0)
        cout<<"3";        
   else if(strcmp(day,"Thrusday")==0 || strcmp(day,"THRUSDAY")==0 || strcmp(day,"thursday")==0)
        cout<<"4";       
   else if(strcmp(day,"Friday")==0 || strcmp(day,"FRIDAY")==0 || strcmp(day,"friday")==0)
        cout<<"5";        
   else if(strcmp(day,"Saturday")==0 || strcmp(day,"SATURDAY")==0 || strcmp(day,"saturday")==0)
        cout<<"6";        
   else if(strcmp(day,"Sunday")==0 || strcmp(day,"SUNDAY")==0 || strcmp(day,"sunday")==0)
        cout<<"7";
   else 
    cout<<"INVALID INPUT";
   return 0;
}
