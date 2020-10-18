//
//  main.cpp
//  Bai339
//
//  Created by MACBOOK PRO on 10/16/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
using namespace std;
void NhapMaTran(int a[][100],int n, int m)
{
    int i,j;
    //n la cot, m la hang.
    for(i=1;i<m+1;i++)
    {
        for(j=1;j<n+1;j++)
        {
            cout<<"Nhap a["<<i<<"]"<<"["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
}
void XuatMaTran(int a[][100], int n, int m)
{
    int i,j;
    for(i=1;i<m+1;i++)
    {
        for(j=1;j<n+1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int KTSoHoanThien(int n)
{
    int sum=0;
    int i;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        return 1;
        
    }
    return 0;
}


void DemSoluongSoHoanThienTren1Hang(int a[][100], int n, int sohang)
{
    int j;
    int dem=0;
    for(j=1;j<n+1;j++)
    {
        if(KTSoHoanThien(a[sohang][j])==1)
        {
            dem++;
        }
    }
    cout<<"Co "<<dem<<" so hoan thien tren hang "<<sohang<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n,m,sohang;
    
    do {
        cout<<"Nhap N la Cot: \n";
        cin>>n;
        cout<<"Nhap M la Hang: \n";
        cin>>m;
        cout<<"Nhap So hang: \n";
        cin>>sohang;
       
       
        
    } while (n<0 && m<0);
    int a[n][100];
    
    NhapMaTran(a,n,m);
    XuatMaTran(a, n, m);
    DemSoluongSoHoanThienTren1Hang(a, n, sohang);
    return 0;
}
