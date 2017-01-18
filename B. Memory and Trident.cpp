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
        int len=s.size();
        if(len%2!=0)
        {
            printf("-1\n");
            continue;

        }
        int xx=0,yy=0;

        for(int i=0; i<len; i++)
        {
            if(s[i]=='U')
                yy++;
            if(s[i]=='D')
                yy--;
            if(s[i]=='R')
                xx++;
            if(s[i]=='L')
                xx--;


        }
        if(xx<0)
            xx=xx*-1;
        if(yy<0)
            yy=yy*-1;

        cout<<(xx+yy)/2<<endl;

    }
    return 0;
}

