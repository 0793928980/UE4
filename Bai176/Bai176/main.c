//
//  main.c
//  Bai176
//
//  Created by MACBOOK PRO on 9/29/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//
//Bai176->178
#include <stdio.h>
#include <math.h>
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
void Nhapfloat(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("Nhap a[%d] = \n",i);
        scanf("%f",&a[i]);
    }
}
void Infloat(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("%.f ",a[i]);
    }
}

void LietKe176(float a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%.f ",a[i]);
        }
    }
}
void Lietke177(float a[], int n,float x, float y)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        if(x<=a[i] && y>=a[i])
        {
            printf("%.f ",a[i]);
        }
    }
}

void LietKe178(int a[], int n, int x, int y)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(x<=a[i]&& y>=a[i] &&a[i]%2==0)
        {
                printf("%d ",a[i]);
            
        }
    }
}
void Lietke179(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
       
            if(a[i]>fabsf(a[i+1]))
            {
                printf("%.f ",a[i]);
            }
        
    }
}

void Lietke180(float a[], int n)
{
    int i;
    int t=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<fabsf(a[i+1]) && a[i]>fabsf(a[i-1]))
        {
            t=1;
            printf("%.f ",a[i]);
        }
    }
    if(t==0)
    {
        printf("Mang khong co phan tu nao\n");
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    scanf("%d",&n);
    
    float a[n];
  

    Nhapfloat(a, n);
    Infloat(a, n);
    printf("\nLietKe\n");
    Lietke180(a, n);
    
    
   
    return 0;
}
