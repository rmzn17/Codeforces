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
    string s;

    while(cin>>s)
    {
        char ch[1005];
        int j=0;
        int len=s.size();
        for(int i=0; i<len; i++)
        {
            if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'||s[i]=='y'||s[i]=='Y')
            {
                continue;
            }
            else
            {
                if(s[i]>='A'&&s[i]<='Z')
                {
                    ch[j++]=tolower(s[i]);
                }
                else
                    ch[j++]=s[i];
            }
        }
        for(int i=0; i<j; i++)
            printf(".%c",ch[i]);
        printf("\n");
    }
    return 0;
}





