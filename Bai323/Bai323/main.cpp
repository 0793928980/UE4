//
//  main.cpp
//  Bai323
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

int TichCacGiaTriDuongtren1Cot(int a[][100], int m, int socot)
{
    int i;
    int tich=1;
    for(i=0;i<m;i++)
    {
        if(a[i][socot]>0)
        {
            tich*=a[i][socot];
           
        }
    }
    return tich;
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
        cout<<"\nNhap so cot: ";
        cin>>socot;
        
    } while (n<0 && m<0 && socot<0);
    int a[n][100];
    
    NhapMaTran(a,n,m);
    XuatMaTran(a, n, m);
    int tich = TichCacGiaTriDuongtren1Cot(a, m, socot);
    cout<<"Tich cua cot "<<socot<<" la: "<<tich;
    return 0;
}
