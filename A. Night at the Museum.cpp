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


   string s;
   while(cin>>s)
   {
       int len=s.size();
       char start='a';
       int ans=0;
       for(int i=0;i<len;i++)
       {
           int xx=start-s[i];
           int yy=s[i]-start;
           if(xx<0)
            xx+=26;
           if(yy<0)
            yy+=26;

           ans+=MIN(xx,yy);
           start=s[i];

       }
       cout<<ans<<endl;

   }
   return 0;
}
