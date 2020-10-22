//c++ program to reverse an array
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define se second
using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0 ; i<n ; i++)
   cin >> a[i];
   
   for (int i=0 ; i<(n+1)/2 ; i++){
      swap(a[i], a[n-i]);
  
}
