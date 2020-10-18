//
//  main.cpp
//  Bai337
//
//  Created by MACBOOK PRO on 10/15/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
#include <math.h>
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

int logarit(int n)
{
    int dem=0;
  while(n>10)
  {
      n/=10;
      dem++;
  }
    return dem;
}

void DemSoLuongChuSoTrongMaTran(int a[][100], int n, int m)
{
    int i,j;
    int tong=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            int chuso=logarit(a[i][j])+1;
            
            tong+=chuso;
        }
    }
    
    cout<<"\nCo "<<tong<<" so luong chu so trong ma tran \n";
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
    
    DemSoLuongChuSoTrongMaTran(a, n, m);
    return 0;
}