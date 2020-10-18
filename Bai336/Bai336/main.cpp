//
//  main.cpp
//  Bai336
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
void XuatMaTran(int a[][100], int n, int m)
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

void DemTanSuatXuatHienGiaTriX(int a[][100], int n, int m, int x)
{
    int i,j;
    int dem=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==x)
            {
                dem++;
            }
        }
    }
    
    cout<<"\n"<<x<<" co "<<dem<<" lan xuat hien trong ma tran\n";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n,m,x;
    
    do {
        cout<<"Nhap N la Cot: \n";
        cin>>n;
        cout<<"Nhap M la Hang: \n";
        cin>>m;
       cout<<"Nhap X: \n";
       cin>>x;
       
        
    } while (n<0 && m<0);
    int a[n][100];
    
    NhapMaTran(a,n,m);
    XuatMaTran(a, n, m);
    DemTanSuatXuatHienGiaTriX(a, n, m, x);
    return 0;
}
