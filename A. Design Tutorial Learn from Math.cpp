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

bool composite(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            return true;
    }
    return false;
}

int main()
{
    vc v;
    for(int i=2; i<=1000000; i+=2)
        v.push_back(i);

    int n,x=2;
    cin>>n;
    for(int i=4;; i+=2)
    {
        if(composite(n-i))
        {

            printf("%d %d\n",i,n-i);
            break;
        }
    }
return 0;
}
