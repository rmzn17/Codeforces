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


    int n,m;

    while(cin>>n>>m)
    {


        bool ok=false;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                getchar();
                char ch;
                scanf("%c",&ch);

                if(ch=='C'||ch=='M'||ch=='Y')
                {
                    ok=true;

                }
            }


        }
        if(ok)
            printf("#Color\n");
        else
            printf("#Black&White\n");


    }
    return 0;
}

