//
//  main.c
//  Bai163
//
//  Created by MACBOOK PRO on 9/27/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <stdio.h>
#include<math.h>
#define MAX 100
void Nhapint(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}

void Inint(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
}
int KTCP(int n)
{
    int i=0;
    
    while(i*i<=n)
    {
        if(i*i==n)
        {
            return 1;
        }
        i++;
    }
    return 0;
    
}

int TimGTFirstCP(int a[], int n)
{
    int i;
   
    for(i=0;i<n;i++)
    {
        if(KTCP(a[i])==1)
        {
            return a[i];
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
// insert code here...
int n;
int a[MAX];


do{
    printf("Nhap N: ");
    scanf("%d",&n);
}while(n<0 || n>MAX);

Nhapint(a, n);
printf("M\n--------------- Mang a ------------------\n");
Inint(a, n);
    
    printf("\nSo chinh Phuong dau tien la: %d\n",TimGTFirstCP(a, n));
    return 0;
}
