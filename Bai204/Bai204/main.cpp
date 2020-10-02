//
//  main.cpp
//  Bai204
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

void TongGiaTriLonHonGiaTriTruocNo(int a[], int n)
{
    int i;
    int tong=0;
    
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            tong+=a[i];
        }
    }
    
    cout<<"Tong Gia Tri lon gia tri truoc no la: "<<tong;
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
    
    TongGiaTriLonHonGiaTriTruocNo(a, n);
    return 0;
}
