#include <stdio.h>
#include <math.h>
int main ()
{
    float x,y,z;
    printf(" Imame sistem od 3 ravenki ti vnesi 3 broevi koi ke se reshenie \n");
    printf(" x+3y+z=25 \n 3x-y-2z=5 \n -x+y+3z=62 \n");
    scanf("%f %f %f",&x,&y,&z);
    if(x+3*y+z==25 && 3*x-y-2*z==5 && -x+y+3*z==62 )
    {
        printf(" Broevite %f %f %f se reshenie na sistemot ravenki",x,y,z);
    }
    else {
        printf(" Broevite  %f %f %f  ne se reshenie na sistemot ravenki",x,y,z);
    }
    return 0;
}