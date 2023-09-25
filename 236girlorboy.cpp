#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main(){

    string username;
    cin>>username;
    int count=0;

    sort(username.begin(),username.end());

    for(int i=0;i<username.length()-1;i++)
       if(username[i]!=username[i+1])
         count++;

        
    if(count%2==0)
      cout<<"IGNORE HIM!"<<endl;

    else
      cout<<"CHAT WITH HER!"<<endl;

      
  return 0;
}