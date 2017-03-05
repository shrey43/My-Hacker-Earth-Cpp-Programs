










#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int isprime(int m)
{
    int count=0;
    for(int i=1;i<m;i++)
    {
        if(m%i==0)
        {
            count =count+1;
        }
    }
    if(count==1)
    {
        return 0;
    }
    else
        return 1;
}
int findprime(int z)
{
    int v;
    v =z;
    int q1,u;
    int o,p;
    while(z>0)
    {
        z--;
        if(isprime(z)==0)
          {
           q1=z;
           break;
          }
    }
    while(z<z+200)
    {
        z++;
        if(isprime(z)==0)
        {
           u=z;
           break;
        }
    }
    o=v-q1;
    p=u-v;

    if(u>121)
    {
        return q1;
    }
    if(o<p)
    {
    return q1;
    }
    else if(o==p)
        return q1;
        else
            return u;


}

int main(){
int n;
cin>>n;
for(int i=0;i<n;i++)
{
char f[500];
int a[500];
int y;
cin>>y;
for(int i=0;i<y;i++)
{
    cin>>f[i];
}
char w[500];
int x[500];

int z=strlen(f);

for(int i=0;i<z;i++)
{
    a[i]=f[i];
}
for(int i=0;i<z;i++)
{
    if(a[i]>=33 && a[i]<65)
    {
        a[i] =67;
    }
    if(a[i]>=91 && a[i]<93)
    {
        a[i] =89;
    }
    if(a[i]>=94 && a[i]<97)
    {
        a[i] =97;
    }


}


for(int i=0;i<z;i++)
{
    int c = isprime(a[i]);
    if(c==0)
    {
     x[i]=a[i];
    }
    else
     x[i] =  findprime(a[i]);
}

for(int i=0;i<z;i++)
{
    w[i]=x[i];
}
for(int i=0;i<y;i++)
{
    cout<<w[i];
}
cout<<"\n";
}
return 0;
}
