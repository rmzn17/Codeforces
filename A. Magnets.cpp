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
    int n,a,b,x;

    while(cin>>n)
    {
        int prev=0;
        int res=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x==prev)
                continue;
            else
            {
                res++;
                prev=x;

            }

        }

        //int sum1=n*(n+1)/2;
        cout<<res<<endl;

    }
    return 0;
}









