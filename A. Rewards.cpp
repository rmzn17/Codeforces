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

    int a1,a2,a3,b1,b2,b3,n;


    while(cin>>a1>>a2>>a3)
    {
        cin>>b1>>b2>>b3;

        cin>>n;
        int cup=a1+a2+a3;
        int tot=0;
        while(cup>5)
        {
            tot++;
            cup=cup-5;


        }
        if(cup!=0)
            tot++;
        int madel=b1+b2+b3;
        while(madel>10)
        {
            tot++;
            madel=madel-10;


        }
        if(madel!=0)
            tot++;

        if(tot<=n)
            printf("YES\n");
        else
            printf("NO\n");



    }
    return 0;
}



