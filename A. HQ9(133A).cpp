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
    string s;
    while(cin>>s)
    {

        int len=s.size();
        bool ok=false;


        for(int i=0; i<len; i++)
        {
            if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
            {
                ok=true;
                break;
            }


        }
        if(ok)
            printf("YES\n");
        else
            printf("NO\n");



    }
    return 0;
}


