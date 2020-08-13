//Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns the last index at which M is found in the array and -1 if M is not found anywhere. Print the value returned

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll findLastIndex(ll a[],ll n,ll x,ll currentIndex)
{
if(currentIndex==n)
{
return -1;
}
int index = findLastIndex(a,n,x,currentIndex+1);
if(index==-1 && a[currentIndex]==x)
{
return currentIndex;
}
else
{
return index;
}
}

int main() {
ll n,a[100000],x;
cin>>n;
for(ll i=0;i<n;i++){
cin>>a[i];
}
cin>>x;
cout<<findLastIndex(a,n,x,0);
return 0;
}
