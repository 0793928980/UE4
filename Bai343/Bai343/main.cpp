//
//  main.cpp
//  Bai343
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


void DemSoluongPTcucTri(int a[][100], int n, int m)
{
    
    int dem=0;
    int i,j;
    int kt=0;// 1 la Max 2 la Min
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            kt=0;
            if(i-1>=0)
            {
                if(a[i][j]>a[i-1][j])
                {
                    kt=1;
                }
                else if(a[i][j]<a[i-1][j])
                {
                    kt=2;
                }else
                {
                    continue;
                }
            }
            if(i+1<m)
            {
                if(a[i][j]>a[i+1][j] && (kt==1 || kt==0))
                {
                    kt=1;
                }
                else if(a[i][j]<a[i+1][j] && (kt==2 || kt==0))
                {
                    kt=2;
                }else{
                    continue;
                }
            }
            
            if(j-1>=0)
            {
                if(a[i][j]>a[i][j-1] && (kt==1 || kt==0))
                {
                    kt=1;
                }
                else if(a[i][j]<a[i][j-1] && (kt==2 || kt==0))
                {
                    kt=2;
                }
                else{
                    continue;
                }
            }
            if(j+1<n)
            {
                if(a[i][j]>a[i][j+1] && (kt==1 || kt==0))
                {
                    kt=1;
                }
                else if(a[i][j]<a[i][j+1] && (kt==2 || kt==0))
                {
                    kt=2;
                }else{
                    continue;
                }
            }
              dem++;
        }
    }
    
    cout<<"\nCo "<<dem<<" so cuc tri trong ma tran"<<endl;
}


int DemPTCucTriMang1chieu(int a[], int n)
{
    int dem=0;
    int i;
    int kt=0;
    for(i=0;i<n;i++)
    {
        kt=1;
       if(i==0 &&  a[i]==a[i+1])
       {
           kt=0;
       }
        else if(i==n-1 && a[i]==a[i-1])
        {
            kt=0;
        }else if((a[i]<a[i+1] && a[i]>a[i-1]) || (a[i]>a[i+1] && a[i]<a[i-1]))
        {
            kt=0;
        }
        if(kt==1)
        {
            dem++;
        }
    }
    return dem;
}


void DemSoLuongPtCT(int a[][100], int n, int m)
{
    int dem;
    int b[100];
    int nb=0;
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[nb++]=a[i][j];
        }
    }
    
    dem=DemPTCucTriMang1chieu(b, nb);
    cout<<"\nCo "<<dem<<" phan tu cuc tri\n"<<endl;
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
    DemSoluongPTcucTri(a, n, m);
    DemSoLuongPtCT(a, n, m);
    return 0;
}
