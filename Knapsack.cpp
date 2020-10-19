#define ll long long
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, w;
	    cin>>n>>w;
	    ll val[n],wt[n];
	    for(ll i=0;i<n;i++)
	    cin>>val[i];
	    for(ll i=0;i<n;i++)
	    cin>>wt[i];
	    
	    ll ar[n][w];
	    for(ll i=0;i<=n;i++)
	    {
	        for(ll j=0;j<=w;j++)
	        {
	            if(i==0 or j==0)
	            ar[i][j]=0;
	            else if(j>=wt[i-1])
	            ar[i][j]=max(ar[i-1][j], val[i-1]+ar[i-1][j-wt[i-1]]);
	            else 
	            ar[i][j]=ar[i-1][j];
	        }
	    }
	    cout<<ar[n][w]<<"\n";
	}
	return 0;
}