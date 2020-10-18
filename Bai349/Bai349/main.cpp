//
//  main.cpp
//  Bai349
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

int KTHoanThien(int n)
{
    int i;
    int sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        return 1;
    }
    return 0;
}

void KiemTraMaTranCoSoHoanThienKhong(int a[][100], int n, int m)
{
    int i,j;
    int kt=0;
    for(i=0;i<m;i++)
    {
     
        for(j=0;j<n;j++)
        {
            if(KTHoanThien(a[i][j])==1)
            {
                kt=1;
             
            }
        }
    }
    if(kt==1)
    {
        cout<<"Ma tran co So hoan thien"<<endl;
    }else{
        cout<<"Ma tran Khong co So hoan thien"<<endl;
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
    KiemTraMaTranCoSoHoanThienKhong(a, n, m);
    return 0;
}
