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

    string s1;

    while(cin>>s1)
    {
        int len=s1.size();
        char s2[500];
        int cnt=0,i=0,j=0;
        for(i=0; s1[i];)
        {
            if(s1[i]=='W'&&s1[i+1]=='U'&&s1[i+2]=='B')
            {
                i+=3;
                continue;
            }

            else
            {
                s2[j]=s1[i];
                i++;
                j++;
                if(s1[i]=='W'&&s1[i+1]=='U'&&s1[i+2]=='B')
                {
                    s2[j]=' ';
                    j++;
                }

            }

        }
        s2[j]='\0';

        cout<<s2<<endl;
    }
    return 0;
}






