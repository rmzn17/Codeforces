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
    string s1,s2;
    while(cin>>n)
    {
        cin>>s1;
        cin>>s2;
        int res=0;
        for(int i=0; i<n; i++)
        {
            int f=s1[i]-48;
            int s=s2[i]-48;
            int mx=MAX(f,s);
            int mn=MIN(f,s);
            int temp=(10-mx)+mn;
            int temp2=mx-mn;
            res+=MIN(temp,temp2);


        }
        cout<<res<<endl;
    }
}
