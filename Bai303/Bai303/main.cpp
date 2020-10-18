//
//  main.cpp
//  Bai303
//
//  Created by MACBOOK PRO on 10/13/20.
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

int KTDuong(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            return 0;
        }
    }
    return 1;
}

void LietKeDayConDuongDaiNhat(int a[], int n)
{
    int i,j,chieudai;
    int b[100],nb;
    
    for(i=0;i<n;i++)
    {
        for(chieudai=1;chieudai<=n;chieudai++)
        {
            nb=0;
           if(chieudai<chieudai+i)
           {
               for(j=i;j<chieudai;j++)
                {
                    b[nb]=a[j];
                    nb++;
                }
                if(KTDuong(b, nb)==1)
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
    LietKeDayConDuongDaiNhat(a, n);
    return 0;
}
