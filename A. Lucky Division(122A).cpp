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

    int n;
    scanf("%d",&n);
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%447==0 ||n%474==0 ||n%477==0 ||n%747==0 ||n%774==0)
        printf("YES");
    else  printf("NO");

    return 0;
}



