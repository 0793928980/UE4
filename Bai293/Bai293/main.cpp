//
//  main.cpp
//  Bai293
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

void LietKeTatCaMangCon(int a[], int n)
{
    int chieudai,i,j;
    
    for(i=0;i<n;i++)
    {
        
        for(chieudai=1;chieudai<=n;chieudai++)
        {   cout<<"\n";
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
    LietKeTatCaMangCon(a, n);
    return 0;
}
