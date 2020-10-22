// C++ program to swap two variables 
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define se second
using namespace std;

int main() 
{ 
	ll a,b; 
	cin>>a>>b;
	//take a temp variable
	ll t=a; 
	a=b; 
	b=a; 
	cout<<a<<" "<<b;
	return 0; 
} 
