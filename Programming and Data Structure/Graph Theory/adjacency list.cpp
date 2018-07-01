
/*******************************\
   Name:    REAJUL HAQUE REAYZ  |
   School:  COMILLA UNIVERSITY  |
            CSE (5TH BATCH)     |
********************************/
#include<bits/stdc++.h>
#define endl "\n"
#define inf 1<<30
#define pb push_back
#define mp make_pair
#define ss stringstream
#define ll long long int
#define all(v) v.begin(), v.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define pi 2*acos(0.0)
#define PI 3.1415926535897932384626433832795
using namespace std;

#define M 1000000007
#define MAX 10001

template <class T> inline   T gcd(T a, T b){if(b==0) return a; return gcd(b,a%b);}
template <class T> inline   T ncr(T n, T r){return n*(n-1)/r;}

int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int node, edge;
    vector<int>matrix[MAX];      ///like int matrix[max][max]
    vector<int>cost[MAX];      ///like int cost[max][max]
    cin>>node>>edge;
    while(edge--)
    {
        int x, y, c;
        cin>>x>>y>>c;
        matrix[x].pb(y);
        matrix[y].pb(x);
        cost[x].pb(c);
        cost[y].pb(c);
    }
    return 0;
}
