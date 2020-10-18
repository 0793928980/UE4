//
//  main.cpp
//  Bai324
//
//  Created by MACBOOK PRO on 10/15/20.
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
int TongCacGiaTriDuongtren1dong(int a[][100], int n,int sodong)
{
    int i,j;
    int tong=0;
 
       
        for(j=0;j<n;j++)
        {
            if(a[sodong][j]>0)
            {
                tong+=a[sodong][j];
            }
        }
        
    return tong;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int n,m;
    int sodong;
    do {
        cout<<"Nhap N la Cot: \n";
        cin>>n;
        cout<<"Nhap M la Hang: \n";
        cin>>m;
        cout<<"Nhap Sodong: "<<endl;
        cin>>sodong;
       
        
    } while (n<0 && m<0);
    int a[n][100];
    
    NhapMaTran(a,n,m);
    XuatMaTran(a, n, m);
    int tong= TongCacGiaTriDuongtren1dong(a, n,sodong);
    cout<<"Tong cac gia tri duong cua "<<sodong<<" la: "<<tong;
    return 0;
}
