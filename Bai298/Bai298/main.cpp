//
//  main.cpp
//  Bai298
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


int KiemTraMangtang(int a[], int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            return 0;
        }
    }
    return 1;
}

void DemMangConTangDoDailonhon1(int a[], int n)
{
    int i,j,chieudai;
    int b[100],nb;
    int dem=0;
    
    for(i=0;i<n;i++)
    {
        
        for(chieudai=2+i;chieudai<=n;chieudai++)
        {
            nb=0;
            if(chieudai>=2+i)
            {   for(j=i;j<chieudai;j++)
                {
                     b[nb]=a[j];
                     nb++;
                 }
                if(KiemTraMangtang(b, nb)==1)
                {
                        In(b, nb);
                        dem++;
                }
                          
                 
            }
             
           
        }
    }
    cout<<"\nCo "<<dem<<" day con lon hon 1\n";
    
}
void DemMangConTang(int a[], int n)
{
    int ChieuDaiCon, dem = 0;
    int b[100], nb;
    for(int i = 0; i < n; i++)
    {
        for(ChieuDaiCon = 2 + i; ChieuDaiCon <= n; ChieuDaiCon++)  // phải có hơn 2 phần tử
        {
            nb = 0;
            for(int j = i; j < ChieuDaiCon; j++)
            {
                b[nb] = a[j];
                nb++;
            }
            if(KiemTraMangtang(b, nb)==1)
            {
                In(b, nb);
                dem++;
            }
        }
    }
    printf("\nTong so mang can tim: %d\n", dem);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
    
    cout<<"Nhap N: \n";
    cin>>n;
    
    int a[100];
    Nhap(a, n);
   
    
  
    DemMangConTangDoDailonhon1(a, n);
    return 0;
}
