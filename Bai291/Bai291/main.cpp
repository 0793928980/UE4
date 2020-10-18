//
//  main.cpp
//  Bai291
//
//  Created by MACBOOK PRO on 10/12/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
using namespace std;

void Nhap(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"] = \n";
        cin>>a[i];
    }
}

void In(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void Hoandoi(int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
}
int Timmax(int a[], int n)
{
    int i;
    int max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}

int timmin(int a[], int n)
{
    int i;
    
    int min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    return min;
}


void TimminMax(int a[],int n, int &max, int &min)
{
    int i;
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
}
void BienDoiMaxthanhMin(int a[], int n, int max, int min)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            a[i]=min;
        }
        else if(a[i]==min)
        {
            a[i]=max;
        }
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n,max,min;

       cout<<"nhap N: \n";
       cin>>n;

       int a[100];
       Nhap(a, n);
       In(a, n);
    TimminMax(a, n, max, min);
     cout<<"\nMang sau khi bien doi\n";
    BienDoiMaxthanhMin(a, n, max, min);
    
   
    In(a, n);
    return 0;
}
