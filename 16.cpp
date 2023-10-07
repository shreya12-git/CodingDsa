#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void findSubsequence(string input,string output){
    //base case
    if(input.empty()){
        cout<<output<<endl;
        return;
    }
    findSubsequence(input.substr(1),output+input[0]);//findSubsequence("bc","a");
    findSubsequence(input.substr(1),output);//findSubsequence("bc","");
}
int main(){
    string input="abc";
    string output="";
  findSubsequence(input,output);
    return 0;
}