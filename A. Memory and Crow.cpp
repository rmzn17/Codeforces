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


  long int n,x;
   while(cin>>n)
   {
       vector<long int>v;

       for(long int i=0;i<n;i++)
       {
           cin>>x;
           v.push_back(x);
       }
       for(long int i=1;i<n;i++)
       {
          printf("%ld ",v[i]+v[i-1]);
       }
       printf("%ld\n",v[n-1]);



   }
   return 0;
}

