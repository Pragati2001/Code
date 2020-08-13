//Replace all occurrences of pi with 3.14


#include<iostream>
using namespace std;
#define ll long long int
void replacepi(char a[],ll i)
{
	if(a[i]=='\0'||a[i+1]=='\0')
	return;
	if(a[i]=='p'&&a[i+1]=='i')
	{
		ll j=i+2;
		while(a[j]!='\0')
		j++;
		while(j>=i+2)
		{
			a[j+2]=a[j];
			j--;
		}
		a[i]='3';
		a[i+1]='.';
		a[i+2]='1';
		a[i+3]='4';
		replacepi(a,i+4);
	}
	else
	replacepi(a,i+1);
	return;
}
int main() {
	ll n;
	cin>>n;
	while(n--)
	{
	    char c[1005];
		cin>>c;
		replacepi(c,0);
		cout<<c<<endl;
	}
	return 0;
}
