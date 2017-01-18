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

    vector<string>s;
    s.push_back("Sheldon");
    s.push_back("Leonard");
    s.push_back("Penny");
    s.push_back("Rajesh");
    s.push_back("Howard");
    while(cin>>n)
    {
        n--;
        while(n>=5)
        {
            n=n-5;
            n=n/2;
        }
        cout<<s[n]<<endl;

    }
    return 0;
}




