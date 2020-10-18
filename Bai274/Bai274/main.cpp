//
//  main.cpp
//  Bai274
//
//  Created by MACBOOK PRO on 10/9/20.
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

void XoaPt(int a[], int &n,int k)
{
    int i;
    for(i=k;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}

void XoaCacGiaTriChan(int a[], int &n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            XoaPt(a, n, i);
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout << "Hello, World!\n";
       int n;

       cout<<"nhap N: \n";
       cin>>n;

       int a[100];
       Nhap(a, n);
       In(a, n);
       
       cout<<"\nXoa cac Gia tri chan\n";
    XoaCacGiaTriChan(a, n);
       In(a, n);
    return 0;
}
