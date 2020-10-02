//
//  main.cpp
//  Bai207
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


void TongPhantuCucTri(float a[], int n)
{
    int i;
    float tong=0;
    for(i=0;i<n;i++)
    {
        if(i==0 && a[i]!=a[i+1])
        {
            tong+=a[i];
        }
        else if ((a[i]>a[i+1] && a[i]>a[i-1]) || (a[i]<a[i-1] && a[i]<a[i+1]))
        {
            tong+=a[i];
        }else if(i==n-1 && a[i] != a[i-1])
        {
            tong+=a[i];
        }
    }
    
    
    cout<<"Tong Phan Tu Cuc tri: "<<tong;
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
    
    TongPhantuCucTri(a, n);
    return 0;
}
