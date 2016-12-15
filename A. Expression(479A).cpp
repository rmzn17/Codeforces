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
    int a,b,c;
    vc v;
    while(cin>>a>>b>>c)
    {
        int res1=a+(b*c);
        int res2=a*(b+c);
        int res3=a*b*c;
        int res4=(a+b)*c;
        int res5=a+b+c;

        cout<<MAX(res1,MAX(res2,MAX(res3,MAX(res4,res5))))<<endl;

    }
    return 0;
}





