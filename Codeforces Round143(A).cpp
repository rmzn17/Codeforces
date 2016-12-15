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
    int n;
    while(scanf("%d",&n)==1)
    {
        int a,b,c;
        int cnt=0;
        while(n--)
        {
            scanf("%d%d%d",&a,&b,&c);
            if(a+b+c>=2)
                cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}





