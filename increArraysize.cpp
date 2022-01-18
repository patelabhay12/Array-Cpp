#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p=new int[5];
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;
    int *q=new int[10];
    int i;
    for (i=0;i<5;i++)
    {
        q[i]=p[i];
    }

    for(i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    } 
    cout<<"after Incresing "<<endl;
    for(i=0;i<10;i++)
    {
        cout<<q[i]<<endl;
    } 

    delete []p;
    p=q;
    q=NULL;

    

}