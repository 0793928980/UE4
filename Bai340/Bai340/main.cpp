//
//  main.cpp
//  Bai340
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

void Demsoluongamtrencot(int a[][100], int m, int socot)
{
    int i;
    int dem=0;
    for(i=1;i<m+1;i++)
    {
        if(a[i][socot]<0)
        {
            dem++;
        }
    }
    
    cout<<"Co "<<dem<<" so am tren cot "<<socot<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n,m,socot;
       
       do {
           cout<<"Nhap N la Cot: \n";
           cin>>n;
           cout<<"Nhap M la Hang: \n";
           cin>>m;
           cout<<"Nhap So cot: \n";
           cin>>socot;
          
          
           
       } while (n<0 && m<0);
       int a[n][100];
       
       NhapMaTran(a,n,m);
       XuatMaTran(a, n, m);
    
    Demsoluongamtrencot(a, m, socot);
    return 0;
}
