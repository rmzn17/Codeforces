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
    long long int n,x,i,j;
    //vector<long long int>v;
    //vector<long long int>v1;
    while(cin>>n>>x)
    {
        // v.clear();
        //v.clear();
//        for(i=1; i<=n; i++)
//        {
//            if(i%2==0)
//                v1.push_back(i);
//            else
//                v.push_back(i);
//        }
//        for(i=0; i<v1.size(); i++)
//        {
//            v.push_back(v1[i]);
//        }

        if (x<=(n+1)/2)
            cout<<2*x-1<<endl;

        else
            cout<<(x-(n+1)/2)*2<<endl;

    }
    return 0;
}










