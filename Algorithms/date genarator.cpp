//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define psi pair<string,int>
#define pis pair<int,string>
#define mii map<int,int>
#define msi map<string,int>
#define mis map<int,string>
#define S string
#define fi first
#define se second
#define sp " "
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define DDD fprintf(stderr, "====TESTING====\n")
#define FOR() for(auto it=data.begin();it!=data.end();it++)
#define Input freopen("/home/mozahed/Documents/Love/input.txt", "r", stdin)
#define Output freopen("/home/mozahed/Documents/Love/output.txt", "w", stdout)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define time cerr<<"Time : "<<(float)clock()/CLOCKS_PER_SEC<<" s"<<endl
#define maxx 100005
#define EPS 1e-9;
using namespace std;
const double PI = acos(-1);

bool leaf(int y)
{
    if(y%4==0)
    {
        if(y%100!=0)
            return true;
    }
    if(y%400==0)return true;
    return false;
}

int main()
{

Boost;
#ifndef ONLINE_JUDGE
Input;
Output;
#endif

/*-----------------------START-----------------------*/


int n;
while(cin>>n && n)
{
int d2=0,m2=0,y2=0,kw2=0;
    int d,m,y,kw;
    int sum=0,cnt=0;
    cin>>d>>m>>y>>kw;
  //  cout<<d<<sp<<m<<sp<<y<<sp<<kw<<dl;
 n=n-1;
   // DDD;
  // while(n--)
    for(int kk=0;kk<n;kk++)
    {

        int d1,m1,y1,kw1;
        cin>>d1>>m1>>y1>>kw1;
//cerr<<d1<<sp<<m1<<sp<<y1<<sp<<kw1<<dl;
        if(d<=30 &&( m==4|| m==6|| m==9|| m==11))
        {
           // DDD;
           // d2=(d+1)%30;
            if(d==30)d2=1;
            else d2=d+1;
            if(d==30)m2=m+1;
            else m2=m;
            y2=y;
             cerr<<d2<<sp<<m2<<sp<<y2<<dl;
        }
       else if(d<=31 &&( m==1|| m==3|| m==5|| m==7 ||m==8 ||m==10 ||m==12))
        {
            //d2=(d+1)%31;
            if(d==31)d2=1;
            else d2=d+1;
            if(d==31)m2=(m+1)%12;
            else m2=m;
            if(d==31 && m==12)y2=y+1;
            else y2=y;
            cerr<<d2<<sp<<m2<<sp<<y2<<dl;
        }
     else if(m==2)
        {
            if(d<=27)d2=d+1,m2=m,y2=y,cerr<<d2<<sp<<m2<<sp<<y2<<dl;
            if(d==28 && leaf(y))
            {
                d2=d+1;
                m2=m;
                y2=y;
                cerr<<d2<<sp<<m2<<sp<<y2<<dl;
            }
            else if(d==28 && !leaf(y))
            {
                //d2=(d+1)%28;
                if(d==28)d2=1;
                else d2=d+1;
                m2=m+1;
                y2=y;
                cerr<<d2<<sp<<m2<<sp<<y2<<dl;
            }
            if(d==29 && leaf(y))
            {
                d2=1;
                m2=3;
                y2=y;
                cerr<<d2<<sp<<m2<<sp<<y2<<dl;
            }
        }

if(d1==d2 &&m1==m2 &&y1==y2)
{
    sum=sum+abs(kw-kw1);
    cnt++;
}
d=d1;
m=m1;
y=y1;
kw=kw1;

    }
    //cout<<d2<<sp<<m2<<sp<<y2<<dl;
    cout<<cnt<<sp<<sum<<dl;
}


/*------------------------END------------------------*/

time;
return 0;

}

