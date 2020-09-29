//
//  main.c
//  Bai168
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

int KiemTraDang5K(int n)
{
    if (n <= 1)
      return 1;
    while(n > 1)  // vòng lặp kết thúc khi n == 5
    {
        if(n % 5 != 0)  // Có thể viết n % 5
            return 0;
        n /= 5;
    }
    return 1;
}

int TimGiaTri5kLonNhat(int a[], int n)
{
    int max;
    int dem = 0;
    for(int i = 0; i < n; i++)
   {
       if (KiemTraDang5K(a[i]) == 1)
       {
           max = a[i];
           dem ++;
           break;
       }
   }
   if (dem == 0)
       return 0;
   for(int i = 0; i < n; i++)
       if (KiemTraDang5K(a[i]) == 1)
          max = (max > a[i]) ? max : a[i] ;
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
    printf("\n Gia tri lon nhat dang 5^K la: %d",TimGiaTri5kLonNhat(a, n));
    return 0;
}
