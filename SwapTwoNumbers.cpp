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
	int x, y; 
	cin>>x>>y;

	int temp = x; 
	x = y; 
	y = x; 

	cout<<x<<" "<<y;
	return 0; 
} 
