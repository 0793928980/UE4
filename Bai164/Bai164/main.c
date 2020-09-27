//
//  main.c
//  Bai164
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
int SoGanh(int n)
{
    int t=n;
    int dv;
    int dn=0;
    while(t!=0)
    {
        dv=t%10;
        dn=10*dn+dv;
        t/=10;
    }
    if(dn==n)
    {
        return 1;
    }
    return 0;
}

int TimSoGanhDautien(int a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(SoGanh(a[i])==1)
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
    float x;
    printf("Nhap X: \n");
    scanf("%f",&x);
    Nhapint(a, n);
    printf("M\n--------------- Mang a ------------------\n");
    Inint(a, n);
    
    printf("SO ganh Dau Tien la: %d",TimSoGanhDautien(a, n));
    
    
    
    return 0;
}
