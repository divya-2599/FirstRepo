#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
ll n,m,k,app=0,apt=0,c=0;
cout<<"Enter the values of n,m and k"<<endl;
cin>>n>>m>>k;
ll a[n],b[m];
for(ll i=0;i<n;i++)
    cin>>a[i];
for(ll i=0;i<m;i++)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
while(app<n && apt<m)
{
    if(b[apt]<=a[app]+k && b[apt]>=a[app]-k)
    {
        c++;
        apt++;
        app++;
    }
    else if(b[apt]<a[app]-k)
    apt++;
    else if(b[apt]>a[app]+k)
    app++;

}
cout<<"Added new line here"<<endl;
cout<<c<<endl;;
return 0;
}
