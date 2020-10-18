//
//  main.cpp
//  Bai297
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
int TongDayso(int a[], int n)
{
    int i;
    int tong=0;
    for(i=0;i<n;i++)
    {
        tong+=a[i];
    }
    return tong;
}

int KiemTraTangDan(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            return 0;
        }
    }
    return 1;
}
void TongDayConTangDan(int a[], int n)
{
    int i,j,chieudai;
    int b[100],nb;
    int tong=0;
    for(i=0;i<n;i++)
    {
        for(chieudai=1;chieudai<=n;chieudai++)
        {
            nb=0;
            for(j=i;j<chieudai;j++)
            {
                b[nb]=a[j];
                nb++;
            }
            if(KiemTraTangDan(b, nb)==1)
            {
                In(b, nb);
                tong=TongDayso(b, nb);
                cout<<"\nTong mang nay la: "<<tong<<"\n";
            }
            
            
            
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
    
    cout<<"Nhap N: \n";
    cin>>n;
    
    int a[100];
    Nhap(a, n);
    
    TongDayConTangDan(a, n);
    return 0;
}
