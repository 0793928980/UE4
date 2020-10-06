//
//  main.cpp
//  Bai259
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

void Hoanvi(int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
}


int KTSoHT(int n)
{
    int tong=0,i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            tong+=i;
        }
    }
    if(tong==n)
    {
        return 1;
    }
    return 0;
}

void SapXepHTGiamDan(int a[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(KTSoHT(a[i])==1)
        {
            for(j=i+1;j<n;j++)
            {
                if(KTSoHT(a[j])==1 && a[i]<a[j])
                {
                    Hoanvi(a[i], a[j]);
                }
            }
        }
    }
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
    
    SapXepHTGiamDan(a, n);
    cout<<"\nMang sau khi sap\n";
    In(a, n);
    return 0;
}
