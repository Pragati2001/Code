//Take as input str, a string. Write a recursive function which returns all the words possible by rearranging the characters of this string which are in dictionary order smaller than the given string. The output strings must be lexicographically sorted.


#include<iostream>
#include<algorithm>
using namespace std;
int k=0;
string b[1000000];
bool compare(string a,string b)
{
return a<b;}
int compares(string a,string b)
{
return a<b;}
void permute(string s,string a,int i)
{
    if(s[i]=='\0')
    {
        bool x=compare(s,a);
        if(x)
        {
            b[k]=s;
            k++;
        }
    }
    for(int j=i;s[j]!='\0';j++)
    {
        swap(s[i],s[j]);
        permute(s,a,i+1);
        swap(s[i],s[j]);
    }
}
int main()
{
   string a,s;
   cin>>s;
    a=s;
    // cout<<a<<endl<<endl;
    permute(s,a,0);
    int num=sizeof(b)/sizeof(string);
    sort(b,b+num,compares);
    for(int i=0;i<num;i++)
    {
        cout<<b[i]<<endl;
    }
}
