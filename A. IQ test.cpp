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
    int a;
    while(cin>>a)
    {
        vc v;
        int x;

        for(int i=0; i<a; i++)
        {
            cin>>x;
            v.push_back(x);
        }

        int eve=0,odd=0,diff=0;
        if(v[0]%2==0)
            eve++;
        else
            odd++;
        if(v[1]%2==0)
            eve++;
        else
            odd++;
        if(v[2]%2==0)
            eve++;
        else
            odd++;

        int m=MAX(eve,odd);
        if(m==3)
        {
            if(v[0]%2==0)
            {
                for(int i=2; i<a; i++)
                {
                    if(v[i]%2!=0)
                    {
                        diff=i+1;
                        break;
                    }
                }
            }
            else
            {


                for(int i=3; i<a; i++)
                {
                    if(v[i]%2==0)
                    {
                        diff=i+1;
                        break;
                    }
                }


            }

        }

        else
        {
            if(eve>odd)
            {
                for(int i=0; i<3; i++)
                {
                    if(v[i]%2!=0)
                    {
                        diff=i+1;
                        break;
                    }


                }
            }
            if(eve<odd)
            {
                for(int i=0; i<3; i++)
                {
                    if(v[i]%2==0)
                    {
                        diff=i+1;
                        break;
                    }

                }
            }

        }

        cout<<diff<<endl;


    }
    return 0;
}






