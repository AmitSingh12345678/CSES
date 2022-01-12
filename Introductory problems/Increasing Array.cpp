/*----------------------------------------------------*
* लेखक --> अमित सिंह
* संस्थान --> राष्ट्रीय प्रौद्योगिकी संस्थान, कुरुक्षेत्र
*-----------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define w(t) int t; cin>>t; while(t--)
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define rfo(i,a,b) for(int i=b;i>=a;i--)
#define deb(x) cout<<#x<<" "<<x<<endl;
#define mem(a, b) memset(a, (b), sizeof(a))
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define sz(a) int((a).size())
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define endl '\n'
#define MOD (int)1000000007
#define INF (int)1e18
#define PI 3.1415926535897932384626433832795
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int, int> mpii;
typedef set<int> seti;
typedef multiset<int> mseti;


void Tez() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
}
int32_t main() {
   Tez();
    int  n;
    cin>>n;
    int a[n],ans=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int diff=a[i]-a[i+1];
        if(diff>0){
            ans+=diff;
            a[i+1]+=diff;
        }
    }
    cout<<ans;
   return 0;
}

