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
    int n;
    string s,kk;
    char ss[10000];
    while(cin>>n)
    {
        kk="";
        int loc=0,st=0,f,sc,big=0;
        bool ok=false;
        for(int i=1; i<=n; i++)
        {
            cin>>s;
            if(s[0]=='O'&&s[1]=='O'||s[3]=='O'&&s[4]=='O')
            {

                ok=true;
                if(big==0)
                {
                    if(s[0]=='O'&&s[1]=='O')
                    {
                        f=0;
                        sc=1;


                    }
                    else
                    {

                        f=3;
                        sc=4;
                    }
                    st=i;
                    big=1;
                }
            }
            kk+=s;

        }

//        for(int i=0; i<kk.size(); i++)
//        {
//
//            if(i%5==4)
//                cout<<kk[i]<<endl;
//            else
//                cout<<kk[i];
//        }
        if(ok)
        {
            printf("YES\n");
             int l=0;
            for(int i=1; i<=n; i++)
            {

                if(i==st)
                {
                    for(int j=0; j<5; j++)
                    {
                        if(j==f)
                        {
                            if(f==0)
                            {
                                printf("++");
                            }
                            else
                                printf("++");

                            j++;
                            l++;
                            l++;

                        }
                        else
                        {
                            printf("%c",kk[l++]);
                        }

                    }
                    printf("\n");

                }
                else
                {


                    for(int j=0; j<5; j++)
                        printf("%c",kk[l++]);
                    printf("\n");
                }
            }
        }
        else
        {
            printf("NO\n");
        }

    }
}

