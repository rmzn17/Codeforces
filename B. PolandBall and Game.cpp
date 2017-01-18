#include <iostream>
#include<stdlib.h>
#include <cstdio>
#include<sstream>
#include <algorithm>
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
#define vc vector<int>
#define pb push_back
#define pf printf
#define mxpq priority_queue<int>
#define mnpq priority_queue<int,vector<int>,compare>
#define ms(a) memset(a,0,sizeof(a));
#define input(s) getline(cin,s);
#define str string s;
#define sz size();
#define ln strlen(s);
#define gcd(x,y)  __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define mn2(a, b) (a<b?a:b)
#define mn3(a, b, c) mn2(a, mn2(b, c))
#define mn4(a, b, c, d) mn2(a, mn2(b, mn2(c, d)))
#define mx2(a, b) (a>b?a:b)
#define mx3(a, b, c) mx2(a, mx2(b, c))
#define mx4(a, b, c, d) mx2(a, mx2(b, mx2(c, d)))
#define mx 10001
#define Pinf 99999999999
#define Ninf -99999999999
#define PI acos(-1)
#define MOD 1000000007
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;


struct compare
{
    bool operator()(const int& l, const int& r)
    {
        return l > r;
    }
};


struct Custom_Class
{

public:
    string name;
    int temp;
    Custom_Class( string n, int t)
    {
        name = n;
        temp = t;
    }
};


struct ccompare
{
    bool operator()(const Custom_Class& abc, const Custom_Class& def)
    {
        return abc.temp > def.temp;
    }
};


priority_queue<Custom_Class,vector<Custom_Class>,ccompare>cpq;


vector<long int>prime;
bool not_prime[mx];

void sieve()
{
    memset(not_prime,true,sizeof(not_prime));
    //prime.push_back(2);
    not_prime[0]=false;
    not_prime[1]=false;
    for(long int i=2; i*i<mx; i++)
    {
        if(not_prime[i]==true)
        {
            for(long int j=i*2; j<mx; j+=i)
            {
                not_prime[j]=false;
            }
        }
    }

    for(long int i=2; i<mx; i++)
    {
        if(not_prime[i]==true)
            prime.push_back(i);
    }
}



int main()
{
    FastRead;

    int n,m;
    while(cin>>n>>m)
    {
        map<string,int>mp;
        if(n>m)
        {
            printf("YES\n");
            continue;
        }
        else if(m>n)
        {
            printf("NO\n");
            continue;

        }
        else
        {


            string s;
            int i;

            for(i=0; i<n; i++)
            {
                cin>>s;
                mp[s]=1;
            }

            int dif1=n,dif2=0,sme=0;

            for(i=0; i<m; i++)
            {
                cin>>s;
                if(mp[s]==1)
                {
                    sme++;
                    dif1--;
                }
                else
                    dif2++;


            }

            if(dif1>dif1)
                printf("YES\n");
            else if(dif1==dif2&&sme%2!=0)
                printf("YES\n");
            else
                printf("NO\n");

        }
    }
    return 0;
}


