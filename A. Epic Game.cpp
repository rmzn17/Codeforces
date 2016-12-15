#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<sstream>
#define vc vector<int>
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define inf 999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;

int main()
{
    int n,a,b,k;

    while(cin>>a>>b>>n)
    {
        bool f=true;
        int ans=0;
        int win=0,simx,antix;
        while(f)
        {
            simx=__gcd(a,n);
            n=n-simx;
            if(n==0)
            {
                ans=0;
                break;
            }
            antix=__gcd(b,n);
            n=n-antix;
            if(n==0)
            {
                ans=1;
                break;
            }

        }
        cout<<ans<<endl;

    }
    return 0;
}








