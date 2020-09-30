//
//  main.cpp
//  Bai198
//
//  Created by MACBOOK PRO on 9/30/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <iostream>
using namespace std;


void Nhap(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]"<<"\n";
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

int TimMax(float a[], int n)
{
    int i;
    float max=a[0];
    
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
void LietKeVitriGiaTriMax(float a[], int n)
{
    int i;
    float max=TimMax(a, n);
    for(i=0;i<n;i++)
    {
        if(max==a[i])
        {
            cout<<i<<" ";
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
    do {
        cout<<"Nhap N:\n";
        cin>>n;
    } while (n<0);
    
    float a[100];
    
    Nhap(a, n);
    In(a, n);
    
    cout<<"\nLiet Ke Vi tri Co gia Tri Max\n";
    LietKeVitriGiaTriMax(a, n);
    return 0;
}
