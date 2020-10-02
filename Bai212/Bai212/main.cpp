//
//  main.cpp
//  Bai212
//
//  Created by MACBOOK PRO on 10/2/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <iostream>
using namespace std;

void Nhap(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]"<<"\n";
        cin>>a[i];
        
    }
}



void In(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void TongCacSoDuong(float a[], int n)
{
    int i;
    float tong=0;
    
    int dem=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            dem++;
            tong+=a[i];
        }
    }
    cout<<"Trung Binh Cua Cac So duong la: "<<tong/dem;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
          do {
              cout<<"Nhap N:\n";
              cin>>n;
          } while (n<0);
          float a[100];
          
          Nhap(a, n);
          In(a, n);
    
    TongCacSoDuong(a, n);
    return 0;
}
