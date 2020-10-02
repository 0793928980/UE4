//
//  main.cpp
//  Bai211
//
//  Created by MACBOOK PRO on 10/2/20.
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

int KTNguyenTo(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    else if(n>2)
    {
        if(n%2==0)
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
    }
    return 1;
}




void TrungBinhCongSNT(int a[], int n)
{
    int i;
    int tong=0;
    float tb;
    int dem=0;
    
    for(i=0;i<n;i++)
    {
        if(KTNguyenTo(a[i])==1)
        {
            dem++;
            tong+=a[i];
        }
    }
    tb=tong/dem;
    cout<<"Trung Binh Cong So Nguyen To la: "<<tb;
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
    
    TrungBinhCongSNT(a, n);
    return 0;
}
