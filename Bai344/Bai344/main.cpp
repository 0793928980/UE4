//
//  main.cpp
//  Bai344
//
//  Created by MACBOOK PRO on 10/17/20.
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

int DemSoluongPTPhanBiet(int a[], int n)
{
    int i,j;
    int dem=0;
    int kt=0;
    for(i=0;i<n;i++)
    {
        kt=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                kt=0;
            }
        }
        if(kt==1)
        {
            dem++;
        }
    }
    return dem;
}

void DemSoluongPTPhanBiet(int a[][100], int n, int m)
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
    
    
 
  int dem =  DemSoluongPTPhanBiet(b, nb);
    cout<<"\nCo "<<dem<<" phan tu phan biet trong ma tran\n";
    
    
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
    DemSoluongPTPhanBiet(a, n, m);
    return 0;
}
