using namespace std;
#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define sqr(x) ((x) * (x))
#define pb push_back
#define ff first
#define ss second
#define f(n) for (int i = 0; i < n; i++)
#define si(x) scanf("%d", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define ps(s) printf("%s\n", s)
typedef string st;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int, int> mii;
typedef pair<int, int> pii;

bool powof2(int n)
{
    return(n && !(n&n-1));
}

int main()
{  
  int num;
  cin>>num;
  cout<<powof2(num);
  return 0;
}
