//
//  main.cpp
//  Bai220
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


int KiemTraSoTancungla5(int n)
{
    int dv;
    while(n>=10)
    {
        dv=n%10;
      
        if(dv==5)
        {
            return 1;
        }
          n/=10;
    }
    return 0;
    
}


void DemSoTanCungla5(int a[], int n)
{
    int i;
    int dem=0;
    for(i=0;i<n;i++)
    {
        if(KiemTraSoTancungla5(a[i])==1)
        {
            dem++;
        }
    }
    cout<<"\nCo " << dem << " so tan cung la 5\n";
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
    DemSoTanCungla5(a, n);
    return 0;
}
