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



    long int a,b;
    while(cin>>a>>b)
    {

        vc v;
        v.pb(b);
        bool flag=true;
        while(flag)
        {
            if(b<a)
            {
                flag=false;
                break;
            }
            if(b%2==0)
            {
                int temp=b/2;
                v.pb(temp);
                b=b/2;
                if(b==a)
                    break;
            }
            else
            {
                int mod=b%10;
                if(mod!=1)
                {
                    flag=false;
                    break;

                }

                else
                {
                    int temp=b/10;
                    v.pb(temp);
                    b=b/10;
                    if(b==a)
                        break;
                }
            }


        }
        sort(v.begin(),v.end());
        if(flag==false||v[0]<a)
        {
            printf("NO\n");

        }
        else
        {
            printf("YES\n");
            printf("%d\n",v.size());
            for(int i=0; i<v.size(); i++)
                printf("%d ",v[i]);
            printf("\n");
        }


    }
    return 0;
}


