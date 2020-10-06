//
//  main.cpp
//  Bai251
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

void KiemTraPTbangnhau(int a[], int n)
{
    int i,j;
    int kt=1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]!=a[j])
            {
                kt=0;
                break;
            }
        }
    }
    if(kt==1)
    {
        cout<<"\nCac Phan tru Trong mang bang nhau\n";
    }else{
        cout<<"\nCac Phan tu trong mang khac nhau\n";
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
    KiemTraPTbangnhau(a, n);
    return 0;
}
