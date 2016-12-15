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
#define MAX 1000001
#define inf 999999999
#define PI acos(-1)
#define MOD 1000000007

using namespace std;

int main()
{
    long long len,i,t,n,m,sum,p,j;
    while(cin>>n>>t)
    {
        if(t==10 && n==1)
        {
            cout<<"-1\n";
            continue;
        }
        if(t==10)
        {
            cout<<"1";
            for(i=1; i<n; i++)
                cout<<"0";
            cout<<endl;
        }
        else
        {
            for(i=0; i<n; i++)
                cout<<t;
            cout<<endl;
        }
    }
    return 0;
}
