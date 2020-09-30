//
//  main.cpp
//  bai188
//
//  Created by MACBOOK PRO on 9/30/20.
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

void LietKeVitriChanMax(int a[], int n)
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
        if(a[i]%2==0 && max==a[i])
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
           cout<<"Nhap N: \n";
           cin>>n;
          } while (n<0);
          
          int a[100];
          Nhap(a, n);
          In(a, n);
    
    cout<<"\nLiet Ke Vitri Chan Max\n";
    LietKeVitriChanMax(a, n);
       
    return 0;
}
