//
//  main.cpp
//  Bai254
//
//  Created by MACBOOK PRO on 10/5/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <iostream>
using namespace std;

void Nhap(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]"<<"\n";
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


int  DemGiatriTrongMangLonhonGiatriTrcNo(int a[], int n)
{
    int i,j;

    int dem=0;
    for(i=1;i<n-1;i++)
    {
        int kt=1;
        for(j=0;j<i;j++)
        {
            if(a[i]<a[j] || a[i]==a[j])
            {
                kt=0;
                
            }
        }
        if(kt==1)
        {
               dem++;
        }
    }
   
    return dem;
}

int DemGiatri(int a[], int n)
{
    int i;
    int dem=0;
    for(i=1;i<n-1;i++)
    {
        int kt=1;
        if(a[i]<a[i-1] && a[i]==a[i-1])
        {
            kt=0;
        }
        if(kt==1)
        {
            dem++;
        }
    }
    return dem;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
    
    cout<<"nhap N: \n";
    cin>>n;
    
    int a[100];
    Nhap(a, n);
    In(a, n);
    int dem=DemGiatri(a, n);
    cout<<"\nCo "<<dem<<" gia tri lon hon gia tri truoc no\n";
    return 0;
}
