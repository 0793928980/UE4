//
//  main.c
//  Bai171
//
//  Created by MACBOOK PRO on 9/28/20.
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
int Max2so(int a, int b)
{
    if(a>b)
    {
        return a;
    }else{
        return b;
    }
}

int UCLN(int a, int b)
{
        
    if(a==0 || b==0)
    {
        return a+b;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }else
        {
            b=b-a;
        }
    }
    return a;
}


int BCNN(int a, int b)
{
    return a*b/UCLN(a, b);
}

int TimUSCLN(int a[], int n)
{
    int x=a[0];
    int i;
    for(i=1;i<n;i++)
    {
        x = UCLN(x, a[i]);
    }
    return x;
}

int TimBCNN(int a[], int n)
{
    int x=a[0];
    int i;
    for(i=1;i<n;i++)
    {
        x = BCNN(x, a[i]);
    }
    return x;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    
    printf("Nhap N: \n");
    scanf("%d",&n);
    int a[100];
    
    Nhap(a, n);
    
    In(a, n);
    
    printf("\nUCLN cua Phan tu trong Mang la %d",TimBCNN(a, n));
    return 0;
}
