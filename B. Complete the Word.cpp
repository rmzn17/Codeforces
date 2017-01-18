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

    while(cin>>s)
    {
        int n=s.size();
        set<char>st;
        int cnt=0;
        vector<char>v;

        for(long int i=0; i<n; i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                st.insert(s[i]);
            else
                cnt++;

        }
        if(st.size()<26&&st.size()+cnt<26)
        {
            printf("-1\n");
            continue;

        }
        for(char ch='A'; ch<='Z'; ch++)
            v.push_back(ch);

        while (!st.empty())
        {
            char ch=*st.begin();
            st.erase(st.begin());
            for(int j=0; j<26; j++)
            {

                if(ch==v[j])
                {
                    v.erase(v.begin()+j);
                    break;
                }

            }

        }

        int j=0;
        for(int i=0; i<n; i++)
        {
            if(j==v.size())
                j=0;
            if(s[i]=='?')
            {
                printf("%c",v[j++]);
            }
            else
                printf("%c",s[i]);

        }
        printf("\n");

    }
    return 0;
}



