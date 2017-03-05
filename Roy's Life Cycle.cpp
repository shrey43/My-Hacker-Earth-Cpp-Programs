#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
int numofc(string b){
    int count[14000000];
    int l=b.length();
    int k=0;
    count[0]=0;
    for(int i=0;i<l;i++){
        if(b[i]=='C'){
            count[k]++;
        }
        else{
            k++;
            count[k]=0;
        }
    }
    int max1=count[0];
    for(int i=0;i<k+1;i++)
{
    if(max1<count[i])
    {
        max1 =count[i];
    }
}
    return max1;
}
int main()
{
int v[200000];
string a[20000];
int k;
cin>>k;
for(int i=0;i<k;i++)
{
 cin>>a[i];
 int z;
v[i]=numofc(a[i]);
}
int max1;
max1=v[0];
for(int i=0;i<k;i++)
{
    if(max1<v[i])
    {
        max1 =v[i];
    }
}
string b="";
for(int i=0;i<k;i++)
{
    b=b+a[i];
}
int f=numofc(b);
  cout<<max1<<" "<<f;
}
