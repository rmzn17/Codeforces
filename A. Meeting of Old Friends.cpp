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



    long long int l1,r1,l2,r2,k;
    while(cin>>l1>>r1>>l2>>r2>>k)
    {
        long long int start=MAX(l1,l2);
        long long int endd=min(r1,r2)+1;

        long long int ans=endd-start;
        //cout<<start<<endl<<endd<<endl;
        if(ans<0)
        {
            printf("0\n");
            continue;

        }
        //if()
        if(k>=start&&k<endd)
            ans--;
        cout<<ans<<endl;



    }
    return 0;
}




