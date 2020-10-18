//
//  main.cpp
//  Bai317
//
//  Created by MACBOOK PRO on 10/13/20.
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

int KTNT(int n)
{
    if(n<2)
    {
        return 0;
    }
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int DemSoNtMaTran(int a[][100], int n, int m)
{
    int i,j;
    int dem=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(KTNT(a[i][j])==1)
            {
                dem++;
            }
        }
    }
    return dem;
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
    
    int dem=DemSoNtMaTran(a, n, m);
    cout<<"\nCo "<<dem<<" so nguyen to\n";
    return 0;
}
