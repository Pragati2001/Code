/*Take as input str, a string. We are concerned with all the possible subsequences of str. E.g.

a. Write a recursive function which returns the count of subsequences for a given string. Print the value returned.

b. Write a recursive function which prints all possible subsequences for a “abcd” has following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”, “abd”, “abc”, “abcd”.given string (void is the return type for function).
Note: Use cin for input for C++*/




#include<iostream>
#include<cstring>
using namespace std;
int count=0;
void subseq(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<" ";
        count++;
        return;
    }
    char ch=input[0];
    string ros=input.substr(1);
    subseq(ros,output);
    subseq(ros,output+ch);
    return;
}
int main()
{
    string input;
    cin>>input;
    string output;
    subseq(input," ");
    cout<<endl<<count;
}
