//
//  main.cpp
//  bai185
//
//  Created by MACBOOK PRO on 9/30/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <iostream>
#include <math.h>
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

int KiemTraSoCP( int n)
{
    
   if(n>1 && sqrt(n) == (int)sqrt(n))
   {
       return 1;
   }
    return 0;
}

void LietKeVitriSoCP(int a[], int n)
{
    int i;
    int kt=0;
    for(i=0;i<n;i++)
    {
        if(KiemTraSoCP( a[i]))
        {
            kt=1;
            cout<<i<<" ";
        }
    }
    if(kt==0)
    {
        cout<<"Khong Co so CHinh Phuong Nao!!";
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int n;
    do {
        cout<<"Nhap N: \n";
        cin>>n;
       } while (n<0);
       
       int a[100];
       Nhap(a, n);
       In(a, n);
    
    cout<<"\nLiet Ke Vitri So Chinh Phuong\n";
    LietKeVitriSoCP(a, n);
    return 0;
}
