//
//  main.cpp
//  Bai271
//
//  Created by MACBOOK PRO on 10/9/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <iostream>
using namespace std;
void Nhap(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]"<<"\n";
        cin>>a[i];
        
    }
}



void In(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void XoaPTcoChisoK(int a[], int &n, int k)
{
    int i;
    
    
    for(i=k;i<n;i++)
    {
       
            a[i]=a[i+1];
        
        
    }
    n--;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;

       cout<<"nhap N: \n";
       cin>>n;

       int a[100];
       Nhap(a, n);
       In(a, n);
    
    cout<<"\nMang Sau khi xoa\n";
    XoaPTcoChisoK(a, n,2);
    In(a, n);
    return 0;
}
