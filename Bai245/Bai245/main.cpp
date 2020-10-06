//
//  main.cpp
//  Bai245
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
void KiemTraMangToanCHan(int a[], int n)
{
    int i;
    int kt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            kt=1;
        }else{
            kt=0;
            break;
        }
    }
    if(kt==1)
    {
        cout<<"Mang toan chan\n";
    }else{
        cout<<"Mang khong chan\n";
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
    KiemTraMangToanCHan(a, n);
    return 0;
}
