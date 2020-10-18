//
//  main.cpp
//  Bai296
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
int TimMax(int a[], int n)
{
    int i;
    int max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(max==a[i])
        {
            return 1;
        }
    }
    return 0;
}

int KiemTraTangDan(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            return 0;
        }
    }
    return 1;
}

void LietKeDayconTangvachuagiatriMax(int a[], int n)
{
    int i,chieudai,j;
    int b[100],nb;
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
            
            if(KiemTraTangDan(b, nb)==1)
            {
                if(TimMax(b, nb)==1)
                {
                    In(b, nb);
                }
            }
        }
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
    
    cout<<"Nhap N: \n";
    cin>>n;
    
    int a[100];
    Nhap(a, n);
  
    cout<<"\nDay con Tang dan chua gia tri lon nhat\n";
    LietKeDayconTangvachuagiatriMax(a, n);
    return 0;
}
