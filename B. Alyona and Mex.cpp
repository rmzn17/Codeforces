#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<stdio.h>
#include<stdlib.h>
#include<sstream>
#define vc vector<int>
#define pb push_back
#define pf printf
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define max 1000001
#define inf 999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;

int main()
{


    int n;

    while(cin>>n)
    {
        vc v;
        int x;

        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.pb(x);

        }
        int ans=0;
        sort(v.begin(),v.end());

        for(int i=0; i<n; i++)
        {
            if(v[i]>ans)
                ans++;
        }
        cout<<ans+1<<endl;

    }
    return 0;
}


