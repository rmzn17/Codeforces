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
    int n,k,w,res;

    while(cin>>n)
    {
        bool ok=false;
        int year=0;
        for(int i=n+1;i<=9012; i++)
        {

            //set<int>st;
            int temp=i;
            int fr=temp%10;
            temp=temp/10;
            int sc=temp%10;
            temp=temp/10;
            int th=temp%10;
            temp=temp/10;
            int fo=temp%10;
            //cout<<fr<<endl<<sc<<endl<<th<<endl<<fo<<endl;

//            st.insert(fr);
//            st.insert(sc);
//            st.insert(th);
//            st.insert(fo);
            //printf("%d \n",st.size());

            if(fr!=sc&&fr!=th&&fr!=fo&&sc!=th&&sc!=fo&&th!=fo)
            //if(st.size()==4)
            {
                //ok=true;
                year=i;
                break;
            }

        }

        cout<<year<<endl;

    }
    return 0;
}




