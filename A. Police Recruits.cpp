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
    int n,x;
    vc v;

    while(cin>>n)
    {
        v.clear();
        for(int i=0; i<n; i++)
        {
            cin>>x;
            v.pb(x);
        }
        int cnt=0,freee=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]!=-1)
            {
                freee+=v[i];
               // printf("free=%d\n",freee);
            }
            else
            {
                if(freee!=0)
                {
                     //printf("free=%d\n",freee);

                    freee--;
                }
                else
                    cnt++;
            }

        }
        cout<<cnt<<endl;
    }
return 0;
}
