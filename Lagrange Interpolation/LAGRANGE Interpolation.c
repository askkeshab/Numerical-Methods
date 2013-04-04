#include<stdio.h>
#include<conio.h>

float x[5]={1,2,3,4,5};
float fx[5]={1,1.4141,1.7321,2,2.2361};
int n=5;


 double lagrange(int i,double point_x)
 {
      float value=1;
      int j;
     
      for( j=0;j<n;j++)
      {
          if(i!=j)
          {
            value *= (point_x-x[j])/(x[i]-x[j]);
          }
      }
      return value;
          
 }

int main(void)
{
  
   int i;
   
   float point_x=2.5;
   float value_fx = 0.0;
   for( i=0;i<n;i++)
   {
          value_fx += fx[i]*lagrange(i,point_x);
           
   }
   printf("The value of Point_x : %f",value_fx);
   getch();
   return 0;
}
   
  
                 
     
