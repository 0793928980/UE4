//
//  main.cpp
//  Bai312+314
//
//  Created by MACBOOK PRO on 10/13/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
using namespace std;

void NhapSoThuc(float a[][100], int n, int m)
{
    int i,j;
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"a["<<i<<"]"<<"["<<j<<"] = \n";
            cin>>a[i][j];
        }
    }
}

void XuatMaTranThuc(float a[][100],int n, int m)
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
    
    NhapSoThuc(a, n, m);
    XuatMaTranThuc(a, n, m);
    return 0;
}
