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
    int tc,cs=1,a,b;

    while(cin>>n)
    {
        int sum=0,temp;
        cin>>a>>b;
        sum=a*b;
        temp=b;

        for(int i=1; i<n; i++)
        {
            cin>>a>>b;
            temp=MIN(b,temp);

            sum+=a*temp;
        }

        cout<<sum<<endl;


    }
    return 0;
}



