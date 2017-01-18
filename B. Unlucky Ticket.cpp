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
        string s;

        cin>>s;
        vc f1;
        vc s1;

        for(int i=0; i<n*2; i++)
        {
            if(i<n)
                f1.pb(s[i]-'0');
            else
                s1.pb(s[i]-'0');
        }

        sort(f1.begin(),f1.end());
        sort(s1.begin(),s1.end());

        bool ok=true;

        for(int i=0; i<n; i++)
        {

            if(f1[i]>=s1[i])
            {
                ok=false;
                break;
            }

        }
        if(ok)
        {
            printf("YES\n");
            continue;
        }
        sort(f1.rbegin(),f1.rend());
        sort(s1.rbegin(),s1.rend());

        bool okk=true;
        for(int i=0; i<n; i++)
        {
            if(f1[i]<=s1[i])
            {
                okk=false;
                break;
            }
        }
        if(okk)
        {
            printf("YES\n");

        }
        else
            printf("NO\n");

    }
    return 0;
}


