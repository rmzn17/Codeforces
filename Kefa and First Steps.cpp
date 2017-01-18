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
    vc v;
    int n,x;
    while(cin>>n)
    {
        v.clear();
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.pb(x);
        }

        int seq=1,mx=-1;

        for(int i=0; i<n-1; i++)
        {
            if(v[i]<=v[i+1])
            {
                seq++;
            }

            else
            {
                if(seq>mx)
                    mx=seq;
                seq=1;
            }
        }

        cout<<MAX(mx,seq)<<endl;

    }

return 0;
}
