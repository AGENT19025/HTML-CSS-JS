#include<bits/stdc++.h> // header files
using namespace std;
int res;
int demo(int x,int y) // void null
{
    int r=x+y;
    return r;
}
void largest(int x,int y,int z)
{
    // cout<<max(x,max(y,z));
    if(x>y && x>z)
    {
        cout<<x<<endl;
    }
    else if(y>x && y>z)
    {
        cout<<y<<endl;
    }
    else{
        cout<<z<<endl;
    }
}
int main()
{
   int a,b,c,d,g,h,s1,s2,s3; // 
   cin>>a>>b>>c>>d>>g>>h;
   s1=demo(a,b);
   s2=demo(c,d);
   s3=demo(g,h);
   largest(s1,s2,s3);
   return 0;
}