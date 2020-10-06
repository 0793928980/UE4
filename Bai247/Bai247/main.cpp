//
//  main.cpp
//  Bai247
//
//  Created by MACBOOK PRO on 10/5/20.
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
int tong2TPlientiep(int a[], int n)
{
    int tong=0;
    int i;
    for(i=0;i<n;i++)
    {
        tong=a[i]+a[i+1];
    }
    return tong;
    
}

void KiemTraTinhChatle(int a[] ,int n)
{
    int i;
  
    int kt=1;
    for(i=0;i<n;i++)
    {
    
        if((a[i]+a[i+1]%2)==0)
        {
            kt=0;
          break;
        }
    }
    if(kt==1)
    {
        cout<<"\nMang thoa tinh chat le\n";
    }else{
        cout<<"\nMang khong thoa tinh chat le\n";
    }
   
}
int KiemTraTinhChatLe(int a[], int n)
{
    int flag = 1;
    for(int i = 0; i < n; i++)
    {
       if((a[i]%2==0 && a[i+1]%2!=0) || (a[i]%2!=0 && a[i+1]%2==0) || (a[i]%2==0 && a[i+1]%2==0))
       {
           if((a[i]+a[i+1]%2)==0)
           {
               flag=0;
               break;
           }
       }
    }
    return flag;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int n;
              do {
                  cout<<"Nhap N:\n";
                  cin>>n;
                
              } while (n<0);
              int a[100];
              Nhap(a, n);
              In(a, n);
    KiemTraTinhChatle(a, n);

    int kt=KiemTraTinhChatLe(a, n);
    
    if(kt==1)
    {
        cout<<"\nMang co tinh chat le\n";
    }else{
        cout<<"\nMang K co tinh chat le\n";
    }
    return 0;
}
