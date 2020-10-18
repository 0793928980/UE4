//
//  main.cpp
//  Bai327
//
//  Created by MACBOOK PRO on 10/15/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
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
int TongCacGiaTriNamTrenBien(float a[][100], int n, int m)
{
    int i,j;
    int tong=0;
    for(j=0;j<n;j++)
    {
        tong+=a[0][j];
        tong+=a[m-1][j];
    }
    for(i=1;i<m-1;i++)
    {
        tong+=a[i][0];
        tong+=a[i][n-1];
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
    float a[n][100];
    
    NhapMaTran(a,n,m);
    XuatMaTran(a, n, m);
    int tong=TongCacGiaTriNamTrenBien(a, n, m);
    cout<<"Tong cac gia tri tren bien la: "<<tong<<endl;
    return 0;
}
