//
//  main.cpp
//  Bai292
//
//  Created by MACBOOK PRO on 10/12/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
using namespace std;

void Nhap(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"] = \n";
        cin>>a[i];
    }
}

void In(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void ThaysoGanNhat(float &n)
{
    int phannguyen=(int)(n);
    float phanle=n-phannguyen;
    if(phanle<=0.5)
    {
        n= phannguyen;
    }else{
        n= phannguyen+1;
    }
}

void ThayCacPhanTutrongMang(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        ThaysoGanNhat(a[i]);
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;

    cout<<"nhap N: \n";
    cin>>n;

    float a[100];
    Nhap(a, n);
    In(a, n);

    cout<<"\nMang Sau khi chuyen doi\n";
    ThayCacPhanTutrongMang(a, n);
    In(a, n);
    
    return 0;
}
