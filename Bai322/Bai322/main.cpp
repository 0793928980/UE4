//
//  main.cpp
//  Bai322
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
int TongCacGiatritren1dong(int a[][100], int n,int sodong)
{
    sodong=1;
    int i,j;
    int tong=0;
    
    for(j=0;j<n;j++)
    {
        tong+=a[sodong][j];
    }
  return tong;
}

int TongCacGiaTriTren1Dong(int a[][100], int x, int n)
{
    int i;
    int tong=0;
    for(i=0;i<n;i++)
    {
        tong+=a[x][i];
    }
    return tong;
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
    int a[n][100];
    
    NhapMaTran(a,n,m);
    XuatMaTran(a, n, m);
    int tong=TongCacGiaTriTren1Dong(a, 0, n);
    cout<<"Tong gia tri la: "<<tong;
    return 0;
}
