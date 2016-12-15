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
    int n,k,x;
    vc v;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int temp=v[k-1];
    int cnt=0;
    for(int i=0; i<n; i++)
    {

        if(v[i]>=temp&&v[i]>0)
            cnt++;
    }
    printf("%d\n",cnt);
    v.clear();
    return 0;

}




