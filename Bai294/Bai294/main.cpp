//
//  main.cpp
//  Bai294
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
}

void LietKeMangConCochieudailonhon2(int a[], int n)
{
    int i,j,chieudai;
    
    for(i=0;i<n;i++)
    {
        for(chieudai=1;chieudai<=n;chieudai++)
        {
            
            if(chieudai>=3+i)
            {
                for(j=i;j<chieudai;j++)
                {
                    cout<<a[j]<<" ";
                }
                cout<<"\n";
            }
        }
    }
}



void LietKe(int a[], int n)
{
    int i,j,chieudai;
    
    for(i=0;i<n;i++)
    {
        for(chieudai=3+i;chieudai<=n;chieudai++)
        {
            cout<<"\n";
            for(j=i;j<chieudai;j++)
            {
                cout<<a[j]<<" ";
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
       In(a, n);
       
       cout<<"\n------------- Liet Ke Mang con ----------\n";
    
    LietKe(a, n);
    
    return 0;
}
