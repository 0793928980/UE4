//
//  main.c
//  Bai179->B180
//
//  Created by MACBOOK PRO on 9/30/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <stdio.h>
#include <math.h>



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
