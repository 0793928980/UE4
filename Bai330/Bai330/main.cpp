//
//  main.cpp
//  Bai330
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

void BienDoiSoThucThanhSoNguyen(float &n)
{
    int phannguyen=(int)(n);
    float phanle=n-(float)(phannguyen);
    if(phanle<0.5)
    {
        n=(float)(phannguyen);
    }else{
        n=(float)(phannguyen)+1;
    }
}
void BienDoiMaTran(float a[][100], int n,int m)
{
    int i,j;
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            BienDoiSoThucThanhSoNguyen(a[i][j]);
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
       float a[n][100];
       
       NhapMaTran(a,n,m);
       XuatMaTran(a, n, m);
       
    BienDoiMaTran(a, n, m);
    cout<<"\n----------- Ma Tran Sau Khi bien doi ---------\n";
    XuatMaTran(a, n, m);
    return 0;
}
