//
//  main.cpp
//  Bai342
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


void DemCacPhanTuCucDai(int a[][100], int n, int m)
{
    int i,j;
    int dem=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i-1>=0)
            {
                if(a[i][j]<=a[i-1][j])
                {
                    continue;
                }
            }
            if(i+1<m)
            {
                if(a[i][j]<=a[i+1][j])
                {
                    continue;
                }
            }
            
            if(j-1>=0)
            {
                if(a[i][j]<=a[i][j-1])
                {
                    continue;
                }
            }
            if(j+1<n)
            {
                if(a[i][j]<=a[i][j+1])
                {
                    continue;
                }
            }
            dem++;
             
            
        }
    }
    
    cout<<"\nCo "<<dem<<" phan tu cuc dai\n";
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
    DemCacPhanTuCucDai(a, n, m);
    return 0;
}
