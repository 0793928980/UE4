//
//  main.cpp
//  Bai239
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

int KTNT(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
        
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        
        }
    return 1;
}
int KIBiTrung(int a[], int n, int vt)
{
    int i;
    for(i=vt-1;i>=0;i--)
    {
        if(a[i]==a[vt])
        {
            return 0;
        }
    }
    return 1;
}
void DemSoNTPhanbiet(int a[], int n)
{
    int i;
    int check;
    int dem=0;
    for(i=0;i<n;i++)
    {
        
        check=KIBiTrung(a, n, i);
        if(check==1)
        {
            if(KTNT(a[i])==1)
            {
                dem++;
            }
        }
    }
    cout<<"Co "<<dem<<" so nguyen to phan biet\n";
    
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
    DemSoNTPhanbiet(a, n);
    DemSoNTPb(a, n);
    return 0;
}
