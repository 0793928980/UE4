//
//  main.c
//  Bai167
//
//  Created by MACBOOK PRO on 9/27/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <stdio.h>
#define MAX 100

void Nhap(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("Nhap a[%d] = \n",i);
        scanf("%d",&a[i]);
    }
}
void In(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int KiemTraToanle(int n)
{
    int dv;
    while(n!=0)
    {
        dv=n%10;
        if(dv%2==0)
        {
            return 0;
        }
        n/=10;
    }
    return 1;
}

int TimSoleMax(int a[], int n)
{
    int i;
    int max;
    int dem=0;
    for(i=0;i<n;i++)
    {
        if(KiemTraToanle(a[i])==1)
        {
            max=a[i];
            dem++;
           break;
           
            
        }
    }
    if(dem==0)
    {
        return 0;
    }
    
    for(i=0;i<n;i++)
    {
        if(KiemTraToanle(a[i])==1)
        {
            max = (max > a[i]) ? max : a[i];
        }
    }
    
    
    return max;
}




int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    
    int a[MAX];
    
    do{
        printf("Nhap N: \n");
        scanf("%d",&n);
        
    }while(n<0 || n>MAX);
    
    Nhap(a, n);
    
    printf("So le Max trong Mang: %d",TimSoleMax(a, n));
    return 0;
}
