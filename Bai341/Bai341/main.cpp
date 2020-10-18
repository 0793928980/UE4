//
//  main.cpp
//  Bai341
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

void DemSoLuongduongTrenBien(int a[][100], int n, int m)
{
    int i,j;
    int dem=0;
    //xet bien hang
    for(j=0;j<n;j++)
    {
        if(a[0][j]>0)
        {
            dem++;
        }
        if(a[n-1][j]>0)
        {
            dem++;
        }
    }
    //xet tren bien cot.
    for(i=1;i<m-1;i++)
    {
        if(a[i][0]>0)
        {
            dem++;
        }
        if(a[i][m-1]>0)
        {
            dem++;
        }
    }
    
    cout<<"\nCo "<<dem<<" so duong tren bien cua ma tran"<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code herem...
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
    DemSoLuongduongTrenBien(a, n, m);
    return 0;
}
