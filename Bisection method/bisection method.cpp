#include<stdio.h>
#include<conio.h>
int a0,a1,a2,a3,i=1;

inline float bisectionFunction(float x)
{
       return( a2*x*x + a1*x + a0);
       
}
int main(void)
{
    float xl,xu,xm,e,fxl,fxu,fxm;
    printf("Enter the value of cofficient a2 ,a1 ,a0:\n");
    scanf(" %d %d %d",&a2,&a1,&a0);
    printf("\nEnter the value of xl,xu and E:\n");
    scanf("%f%f%f",&xl,&xu,&e);
    fxl=bisectionFunction(xl);
    fxu=bisectionFunction(xu);    
    while(1)
    {
            
            printf("\n\n Iteration %d\n",i++);
            printf("***********\n\n");    
            xm=(xu+xl)/2;
            if((xu-xl)/xu<e)
            {
                  printf("\nThe root is %f",xm);
                  break;
                  
            }
            else
            {          
                fxm=bisectionFunction(xm);
                if((fxl * fxm)<0)
                {
                        xu=xm;
                }
                if((fxm*fxu)<0)
                {
                      xl=xm;   
                }
                printf("fxm=%.4f,fxl=%.4f,xm=%.4f,xu=%.4f,xl=%.4f",fxm,fxl,xm,xu,xl);
                
                
            }
    }
    
    getch();
    return 0;   
}

