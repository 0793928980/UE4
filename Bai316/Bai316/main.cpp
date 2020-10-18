//
//  main.cpp
//  Bai316
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

int KiemTraChanNhoHon2015(int a[][100], int n, int m)
{
    int i,j;
    int kt=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]%2==0 && a[i][j]<2015)
            {
                kt=1;
                
            }
        }
    }
    return kt;
}
int KiemTraCoSoChanNhoHon2015(int a[][100], int dong, int cot)
{
    int flag = 0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            if(a[i][j] % 2 == 0 && a[i][j] < 2015)
            {
                flag = 1;
            }
        }
    }
    return flag;
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
    
    int kt = KiemTraCoSoChanNhoHon2015(a, m, n);
    
    if(kt!=1)
    {
        cout<<"\nkhong Thoa ";
    }else{
        cout<<"\nThoa DK\n";
    }
    return 0;
}