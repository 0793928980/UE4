//
//  main.cpp
//  Bai328
//
//  Created by MACBOOK PRO on 10/15/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
void NhapMaTran(float a[][100],int n, int m)
{
    int i,j;
    //n la cot, m la hang.
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Nhap a["<<i<<"]"<<"["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
}
void XuatMaTran(float a[][100], int n, int m)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
float Pow(float n, float x)
{
    int i;
    float tich=1;
    for(i=0;i<n;i++)
    {
        tich*=x;
    }
    return tich;
}
float TinhTichTrungBinhNhan(float a[][100], int n, int m)
{
    int i,j;
    float tich=1;
    float dem=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            tich*=a[i][j];
            dem++;
        }
    }
    return pow(tich, 1.0/dem);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n,m;
       
       do {
           cout<<"Nhap N la Cot: \n";
           cin>>n;
           cout<<"Nhap M la Hang: \n";
           cin>>m;
          
          
           
       } while (n<0 && m<0);
       float a[n][100];
       
       NhapMaTran(a,n,m);
       XuatMaTran(a, n, m);
    float tichtb=TinhTichTrungBinhNhan(a, n, m);
    cout<<"Trung Binh Nhan Cua Ma Tran la: "<<tichtb;
    return 0;
}
