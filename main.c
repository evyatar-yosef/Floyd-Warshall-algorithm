#include<stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int main()
{
//printf("evytr");
int mat [10][10] ;
char input ;
int a,b;

while(1)
{
scanf("%c", &input);

if(input == 65)
{
    func_A( mat);
}
else if(input == 66)
{
    scanf("%d", &a);
    scanf("%d", &b);
    func_B( mat,a,b);   
}
else if(input == 67)
{
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", func_C(mat, a, b));
}
else if(input == 68)
{
    func_D();
}

}
    return 0;

}