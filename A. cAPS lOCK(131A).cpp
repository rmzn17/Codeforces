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
    char a[1001]= {0};
    int l,i,s;
    scanf("%s",a);
    l=strlen(a);
    s=0;
    for(i=1; i<l; i++)
    {
        if(islower(a[i]))
            s=1;
    }
    if(s==0)
    {
        for(i=0; i<l; i++)
        {
            if(isupper(a[i]))
                printf("%c",tolower(a[i]));
            else printf("%c",toupper(a[i]));
        }
        printf("\n");
    }
    else
        printf("%s\n",a);
    return 0;
}



