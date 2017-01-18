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
    while(getline(cin,s))
    {
        int len=s.size();
        bool ok=false;
        while(len--)
        {
            if(s[len]>='A'&&s[len]<='Z'||s[len]>='a'&&s[len]<='z')
            {
                if(s[len]=='A'||s[len]=='E'||s[len]=='I'||s[len]=='O'||s[len]=='U'||s[len]=='Y'||s[len]=='a'||s[len]=='e'||s[len]=='i'||s[len]=='o'||s[len]=='u'||s[len]=='y')
                    ok=true;
                break;
            }
        }
        if(ok)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}

