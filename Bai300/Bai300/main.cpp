//
//  main.cpp
//  Bai300
//
//  Created by MACBOOK PRO on 10/12/20.
//  Copyright © 2020 MACBOOK PRO. All rights reserved.
//

#include <iostream>
using namespace std;

void Nhap(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"] = \n";
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
    cout<<"\n";
    
}
int KiemTraMangGiam(int a[], int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            return 0;
        }
    }
    return 1;
}
void DemMangConGiam(int a[], int n)
{
    int i,j,chieudai;
    int b[100],nb;
    int dem=0;
    
    for(i=0;i<n;i++)
    {
        for(chieudai=1;chieudai<=n;chieudai++)
        {
            nb=0;
            for(j=i;j<chieudai;j++)
            {
                b[nb]=a[j];
                nb++;
            }
            if(KiemTraMangGiam(b, nb)==1)
            {
                In(b, nb);
                dem++;
            }
        }
    }
    cout<<"\nCo "<<dem<<" mang con giam\n";
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
    
    cout<<"Nhap N: \n";
    cin>>n;
    
    int a[100];
    Nhap(a, n);
    DemMangConGiam(a, n);
    return 0;
}
