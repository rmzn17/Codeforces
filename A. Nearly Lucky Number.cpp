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

    string s;
    while(cin>>s)
    {
        int sz=s.size();
        int cnt=0;
        for(int i=0;i<sz;i++)
        {
            if(s[i]=='4'||s[i]=='7')
                cnt++;
        }
        if(cnt==4||cnt==7)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}



