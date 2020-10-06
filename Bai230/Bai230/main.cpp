//
//  main.cpp
//  Bai230
//
//  Created by MACBOOK PRO on 10/4/20.
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

void LietKetansuatxuathien(int a[], int n)
{
    int i,j;
     
    for(i=0;i<n;i++)
    {
        int dem=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                if(i<=j)
                    dem++;
                else
                    break;
              
            }
        }
        if(dem!=0)
        {
            cout<<"\n"<<a[i]<<" co tan suat xuat hien la " <<dem<<" lan\n";
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
       int a[100];
       Nhap(a, n);
       In(a, n);
    LietKetansuatxuathien(a, n);
    return 0;
}
