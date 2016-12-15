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
    int len,i,t,n,m,sum,p,j;
    //printf("%d\n",-123%10);
    while(cin>>n)
    {
        if(n>=0)
        {
            cout<<n<<endl;
            continue;

        }
        else
        {

            n=n*-1;
            int temp1=n;


            int d=log10(n)+1;
            //cout<<d<<endl;

            if(d==1)
                printf("0\n");
            else
            {
                int f=temp1%10;
                temp1=temp1/10;
                int temp2=temp1;

                int s=temp1%10;
                if(f>s)
                {
                    temp1=temp1*-1;
                    cout<<temp1<<endl;
                }
                else
                {
                    temp1=temp1+f;
                    temp1=temp1*-1;
                    cout<<temp1<<endl;

                }

            }


        }
    }
    return 0;
}


