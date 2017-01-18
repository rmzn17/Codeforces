
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
    int x1,y1,x2,y2;


    while(cin >> x1 >> y1 >> x2 >> y2)
    {

        int dx = abs(x1-x2);
        int dy = abs(y1-y2);

        if(x1==x2)
            cout <<  x1+dy << ' ' << y1 << ' ' << x2+dy << ' ' << y2 << endl;
        else if(y2==y1)
            cout <<  x1 << ' ' << y1+dx << ' ' << x2 << ' ' << y2+dx << endl;
        else if(dx==dy)
            cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1 << endl;
        else
            cout << -1 << endl;

    }
    return 0;
}
