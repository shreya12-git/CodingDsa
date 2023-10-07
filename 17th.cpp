//Count distinct occurrences as a subsequence:
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void findSubsequence(string s,string outs){
if(s.empty()){
    cout<<outs<<endl;
    return;
}
findSubsequence(s.substr(1),outs+s[0]);
findSubsequence(s.substr(1),outs);
}
int   distinctOccurences()
int main(){
    string s="banana";
    string outs="";
    string t="ban";
    string outt="";
    distinctOccurences(s,outs);
}