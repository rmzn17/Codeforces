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
   int arr[20][20];
    while(cin>>n)
    {
      for(int i=1;i<=n;i++)
        arr[i][1]=1;
        for(int i=1;i<=n;i++)
        arr[1][i]=1;

        int res=1;
        for(int i=2; i<=n; i++)
        {
            for(int j=2;j<=n;j++)
            {
                 arr[i][j]=arr[i-1][j]+arr[i][j-1];
                 res=MAX(res,arr[i][j]);
            }

        }
        cout<<res<<endl;
    }
    return 0;
}

