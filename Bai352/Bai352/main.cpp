//
//  main.cpp
//  Bai352
//
//  Created by MACBOOK PRO on 10/18/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
using namespace std;
void NhapMaTran(int a[][100],int n, int m)
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
void XuatMaTran( int a[][100], int n, int m)
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


void KiemTraMotHangMaTranTangDanKhong(int a[][100], int n, int sohang)
{
    int j;
    int kt=0;
    for(j=0;j<n;j++)
    {
        if(a[sohang][j]<a[sohang][j+1])
        {
            kt=1;
        }
    }
    if(kt==1)
    {
        cout<<"Ma Tran Tren Hang "<<sohang<<" Tang Dan"<<endl;
    }else{
         cout<<"Ma Tran Tren Mot Hang Khong Tang Dan"<<endl;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n,m;
    int sohang;
    do {
        cout<<"Nhap N la Cot: \n";
        cin>>n;
        cout<<"Nhap M la Hang: \n";
        cin>>m;
     
        do {
            cout<<"Nhap Hang: \n";
            cin>>sohang;
        } while (sohang>n);
       
       
        
    } while (n<0 && m<0);
    int a[n][100];
    
    NhapMaTran(a,n,m);
    XuatMaTran(a, n, m);
    
    KiemTraMotHangMaTranTangDanKhong(a, n, sohang);
    return 0;
}
