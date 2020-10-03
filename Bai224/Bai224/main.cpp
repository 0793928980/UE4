//
//  main.cpp
//  Bai224
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

int KiemTraSoHoanThien(int n)
{
    int tong=0;
    int i;
    //So hoan thien la tong uoc so bang chinh no.
    //Cac uoc so luon <=n/2.
    for(i=1;i<=n/2;i++)
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

void DemSoHoanThien(int a[], int n)
{
    int dem=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(KiemTraSoHoanThien(a[i])==1)
        {
            dem++;
        }
    }
    cout<<"\nCo " <<dem <<" so hoan thien\n";
    
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
    DemSoHoanThien(a, n);
    return 0;
}
