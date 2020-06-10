#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

void removeDueString(string& str , vector<string>& s){ 
    string tempString = ""; //temporary string
    for(int i=0 ; i< str.length(); ++i){
        if(str[i] != ' '){
            tempString = tempString + str[i];
        }else{
            s.push_back(tempString);
            tempString = ""; 
        }
    }
    s.push_back(tempString); //fixing last token not being pushed to the string vector
}
void printStringVector(vector<string>& s){ //this fuction just for printing the vector<string> str
    for(int i=0 ; i<s.size(); ++i)
        cout<<s[i]<<endl;
}

int main(){
vector<string> s;
string str;
cout<<"Enter the string:"; 
getline(cin, str);
removeDueString(str ,s);
printStringVector(s);
    return 0;
}
