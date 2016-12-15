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

  string s[1000];
int w=0,b=0;
    for(int i=0; i<8; i++)
    {
        cin>>s[i];
        int l=s[i].size();
        for(int j=0; j<l; j++)
        {
            if(s[i][j]>='A' && s[i][j]<='Z')
            {
                if(s[i][j]=='Q')w+=9;
                if(s[i][j]=='R')w+=5;
                if(s[i][j]=='B')w+=3;
                if(s[i][j]=='N')w+=3;
                if(s[i][j]=='P')w+=1;
            }
            if(s[i][j]>='a' && s[i][j]<='z')
            {
                if(s[i][j]=='q')b+=9;
                if(s[i][j]=='r')b+=5;
                if(s[i][j]=='b')b+=3;
                if(s[i][j]=='n')b+=3;
                if(s[i][j]=='p')b+=1;
            }
        }

    }
    if(w==b)
        cout<<"Draw\n";
    else if(w>b)
        cout<<"White\n";
    else
        cout<<"Black\n";

    return 0;
}




