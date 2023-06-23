#include<bits/stdc++.h>
using namespace std;
struct company
{
    string name;
    int age;
    int salary;
};
int main()
{
    int n;
    cin>>n;
    company p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i].name;
        cin>>p[i].age;
        cin>>p[i].salary;
    }
    for(int i=0;i<n;i++)
    {
        cout<<p[i].name<<" "<<p[i].age<<" "<<p[i].salary<<endl;
    }
    return 0;
}