//
//  main.cpp
//  Bai270
//
//  Created by MACBOOK PRO on 10/9/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//


#include <iostream>
using namespace std;
void NhapMangXuatRaTangDan(int a[], int n)
{
    int i,j;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]\n";
        cin>>a[i];
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                int k;
                for(k=i;k>j;k--)
                {
                    a[k]=a[k-1];
                }
                a[j]=t;
            }
        }
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
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;

    cout<<"nhap N: \n";
    cin>>n;

    int a[100];
    NhapMangXuatRaTangDan(a, n);
    
    cout<<"\n-------- Mang Khi Sap Xep Tang Dan ------\n";
    In(a, n);
    
    
    
    
    return 0;
}
