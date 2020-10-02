//
//  main.cpp
//  Bai124
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

void TinhTrungBinhNhan(float a[], int n)
{
    int i;
    
    float tich=1;
    float tb;
    float dem=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            dem++;
            tich*=a[i];
        }
    }
    //Trung Binh Nhan Duoc DInh Nghiax la Can Bac N cua tich N so.
    
    tb=pow(tich, 1.0/dem);
    cout<<"Trung Binh nhan cac so duong "<<tb;
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
    TinhTrungBinhNhan(a, n);
    return 0;
}
