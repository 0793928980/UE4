//
//  main.cpp
//  Bai246
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
void KiemTraMangDoiXung(int a[], int n)
{
    int i;
    int kt=1;
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            kt=0;
            break;
        }
    }
    if(kt==1)
    {
        cout<<"\nMang doi xung\n";
    }else{
        cout<<"\nMang k doi xung\n";
    }
    
}

void KiemTrdx(int a[], int n)
{
    int i,j;
    int kt=1;
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>0;j--)
        {
            if(a[i++] !=a[j])
            {
                kt=0;
                break;
            }
        }
    }
    if(kt==1)
    {
        cout<<"\nMang doi xung\n";
    }else{
        cout<<"\nMang k doi xung\n";
    }
    
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
    KiemTraMangDoiXung(a, n);
    KiemTrdx(a, n);
    return 0;
}
