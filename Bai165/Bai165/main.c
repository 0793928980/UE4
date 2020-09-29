//
//  main.c
//  Bai165
//
//  Created by MACBOOK PRO on 9/27/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//


// Bai165
#include <stdio.h>
#define MAX 100

void NhapInt(int a[], int n)
{
    
    
    
    
    int i;
    for(i=0;i<n;i++)
    {
        printf("Nhap a[%d]", i);
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

int TimSodauTien(int n)
{
    int dv;
    while(n>=10){
        dv=n%10;
        n/=10;
    }
    if(n%2==0)
    {
        return 1;
    }
    return 0;
}
int ChuSoDaule(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(TimSodauTien(a[i])==1)
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
        printf("Nhap N ");
        scanf("%d",&n);
        
    }while(n<0 || n>MAX);
    NhapInt(a, n);
    printf("\n------------  Mang A -------------\n");
    Inint(a, n);
    
    printf("\nSo le dau tien la: %d",ChuSoDaule(a, n));
    return 0;
}
