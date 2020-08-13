//Take as input str, a string. Write a recursive function which returns a new string in which all duplicate consecutive characters are separated by a ‘ * ’. E.g. for “hello” return “hel*lo”. Print the value returned

#include<iostream>
#include<cstring>
using namespace std;
void dup_str(char *a,int i)
{
    if(i==(strlen(a)-1))
        return;
    if(a[i]==a[i+1])
    {
        for(int j=strlen(a);j>i;j--)
        {
            a[j]=a[j-1];
        }
        a[i+1]='*';
    }
    dup_str(a,i+1);
}
int main() {
	char ch[100005];
	cin>>ch;
    dup_str(ch,0);
	cout<<ch;
	return 0;
}
