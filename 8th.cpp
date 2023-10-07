//Removing duplicates:
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string removingDuplicate(string s){
       string ans;
	   for(char ch:s){
	       if(ans.find(ch)==string::npos){
	           ans+=ch;
	       }
	   }
	   return ans;
}
int main(){
    string s="111";//i=0 j=1 h->e,h->l,h->l,h->o||||| i=1 j=2,e->l,e->l,e->o |||i=2 j=3 l->l,l->o|||i=3 j=4 l->o
    cout<<removingDuplicate(s);
}//h