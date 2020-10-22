
int main() {
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt","r",stdin);
  //   freopen("output.txt","w",stdout);
  // #endif

    ll n,i,j;
    n=10;
    ll a[]={1,2,3,100,5,6,7,8,9,10};
    ll mx=a[0];  
    for(i=0;i<10;i++)
    {
        mx=max(mx,a[i]);
    }
    cout<<mx;
}
