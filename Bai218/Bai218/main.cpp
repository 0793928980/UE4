//
//  main.cpp
//  Bai218
//
//  Created by MACBOOK PRO on 10/3/20.
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

int KTSoDoiXUng(int n)
{
    int dv=0;
    int t=n;
    int snd=0;
    while(n>0)
    {
        dv=t%10;
        t/=10;
        snd=10*snd+dv;

    }
    if(snd==n)
    {
        return 1;
    }
    return 0;
}

void DemSodoiXung1(int a[], int n)
{
    int i;
    int dem=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            break;
        }
        if(KTSoDoiXUng(a[i])==1)
        {
            dem++;
        }
    }
    cout<<"So luong So doi Xung la : "<<dem;
}
int KiemTraDoiXung(int n)
{
    int dv = 0;
    int daonguoc = 0;
    int tam = n;
    while(tam > 0)
    {
        dv = tam % 10;
        tam /= 10;
        daonguoc = daonguoc * 10 + dv;
    }
    if(daonguoc == n)
    {
        return 1;
    }
    return 0;
}

int DemSoDoiXung(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            break;
        }
        if(KiemTraDoiXung(a[i]) == 1)
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
       do {
           cout<<"Nhap N:\n";
           cin>>n;
       } while (n<0);
       int a[100];
       
       Nhap(a, n);
       In(a, n);
    int so = DemSoDoiXung(a, n);
    cout<<"So luong so doi xung: "<<so<<"\n";
    return 0;
}
