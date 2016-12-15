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
    int a,b,c,d,cnt,i,n;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&n)==5)
    {
        cnt=0;
        for (i=1; i<=n; i++)
        {
            if(i%a==0||i%b==0||i%c==0||i%d==0) cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
