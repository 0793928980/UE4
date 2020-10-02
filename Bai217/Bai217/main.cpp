//
//  main.cpp
//  Bai217
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

void DemSoDuongChiaHetcho7(int a[], int n)
{
    int i;
    int dem=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%7==0 && a[i] >0)
        {
            dem++;
        }
    }
    cout<<"So Luong So duong chia het cho 7: "<<dem<<"\n";
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
    DemSoDuongChiaHetcho7(a, n);
    return 0;
}
