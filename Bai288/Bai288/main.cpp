//
//  main.cpp
//  Bai288
//
//  Created by MACBOOK PRO on 10/12/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
using namespace std;

void Nhap(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"] = \n";
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

void XuatPt(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<"Vang ";
        }else{
            cout<<"Trang ";
        }
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
    
    cout<<"\nMang sau khi phan mau`\n";
    XuatPt(a, n);
    return 0;
}
