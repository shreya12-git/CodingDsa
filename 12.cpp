//Finding the previous binary integer:
#include<iostream>
#include<string>
using namespace std;
string findPreviousInteger(string s){
int i;
s.erase(0,s.find_first_not_of('0'));
for(i=s.length();i>=0;i--){//i=01
    if(s[i]=='1'){//
        s[i]='0';
        break;
    }
    else{
        s[i]='1';
    }
}
if(i<0){
    s='0'+s;
}   
   
return s;
}
int main(){
    string s="00010";
    cout<<"The previous integer is:"<<endl;
    cout<<findPreviousInteger(s);
}