//
//  main.cpp
//  Bai208
//
//  Created by MACBOOK PRO on 10/2/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <iostream>
#include <math.h>
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

int KiemtraSoCP(int n)
{
    if(n<1)
    {
        return 0;
    }
        
    if(n>=1 && sqrt((float)n) == (int)(sqrt((float)n)))
    {
        return 1;
    }
    return 0;
}

void TongGiaTriSoCP(float a[], int n)
{
    int i;
    float tong=0;
    for(i=0;i<n;i++){
        if(KiemtraSoCP(a[i])==1)
        {
            tong+=a[i];
        }
    }
    cout<<"\nTong Gia Tri Cac So CP trong Mang: "<<tong;
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
    TongGiaTriSoCP(a, n);
    return 0;
}
