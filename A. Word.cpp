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
        string up="",lo="";
        int upp=0,low=0;
        int len=s.size();
        for(int i=0; i<len; i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                low++;
            else
                upp++;

        }

        if(low>=upp)
        {


            for(int i=0; i<len; i++)
            {
                if(s[i]>='A'&&s[i]<='Z')
                    printf("%c",tolower(s[i]));
                else
                    printf("%c",s[i]);

            }
            printf("\n");
        }
        else
        {
            for(int i=0; i<len; i++)
            {
                if(s[i]>='a'&&s[i]<='z')
                    printf("%c",toupper(s[i]));
                else
                    printf("%c",s[i]);

            }
            printf("\n");

        }
    }
}



