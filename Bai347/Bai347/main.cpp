//
//  main.cpp
//  Bai347
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
int KTSoLuongYenNgua(int a[][100], int n, int m, int vitridong,int vitricot)
{
    int i,j;
    int x =a[vitridong][vitricot];
    //Duyet Lon Nhat Tren Dong
    for(j=0;j<n;j++)
    {
       if(a[vitridong][j]>x)
       {
           return 0;
       }
    }
    
    //Duyet Nho Nhat tren Cot.
    for(i=0;i<m;i++)
    {
        if(a[i][vitricot]<x)
        {
            return 0;
        }
    }
    return 1;
    
}


void DemSoLuongYenNgua(int a[][100], int n, int m)
{
    int i,j;
    int dem=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(KTSoLuongYenNgua(a, n, m,i,j)==1)
            {
                cout<<"Gia Tri Yen Ngua la: "<<a[i][j]<<endl;
                dem++;
            }
        }
    }
    cout<<"Co "<<dem<<" gia tri la YenNgua"<<endl;
    
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
    DemSoLuongYenNgua(a, n, m);
    return 0;
}
