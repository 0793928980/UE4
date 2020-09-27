//
//  main.c
//  Bai161
//
//  Created by MACBOOK PRO on 9/26/20.
//  Copyright © 2020 Ganukuyou. All rights reserved.
//

#include <stdio.h>
#include<math.h>
#define MAX 100
void Nhapfloat(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("Nhap a[%d] = ",i);
        scanf("%f",&a[i]);
    }
}


void Infloat(float a[], int n)
{
    int i;
    
    for(i=0;i<n;i++)
    {
        printf("%.2f ", a[i]);
    }
}
float TimGiatriXDautien(float a[], int n, int x, int y)
{
    int i;
    int dem=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=x && a[i]  <= y)
        {
            dem++;
            break;
            
        }
    }
    if(dem==0)
    {
      return x;
    }
    
    return a[i];
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    float a[MAX];
  
    
    do{
        printf("Nhap N: ");
        scanf("%d",&n);
    }while(n<0 || n>MAX);
    float x,y;
    printf("Nhap X: \n");
    scanf("%f",&x);
    printf("Nhap Y: \n");
    scanf("%f",&y);
    Nhapfloat(a, n);
    printf("M\n--------------- Mang a ------------------\n");
    Infloat(a, n);
    
    printf("Gia tri trong x -> y la %.f\n", TimGiatriXDautien(a, n, x, y));
   
    
    return 0;
}
