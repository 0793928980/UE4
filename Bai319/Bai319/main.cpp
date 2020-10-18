//
//  main.cpp
//  Bai319
//
//  Created by MACBOOK PRO on 10/14/20.
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

//Sap Xep Dung Mang Phu

void HoanVi(int &a, int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}

void SapXepMaTranTangDan(int a[][100], int n, int m)
{
    int i,j;
    int b[100];
    int nb=0;
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[nb++]=a[i][j];
        }
    }
    
    for(i=0;i<nb-1;i++)
    {
        for(j=i+1;j<nb;j++)
        {
            if(b[i]>b[j])
            {
                HoanVi(b[i], b[j]);
            }
        }
    }
    
    nb=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=b[nb++];
        }
    }
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
    
    cout<<"\nMa Tra Sau Khi Sap Xep\n";
    SapXepMaTranTangDan(a, n, m);
    XuatMaTran(a, n, m);
    return 0;
}
