#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

#define INFINITI 9999999

void Floyd_Warshall(int mat [10][10])
{
  int shortestpath [10][10];

  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++)
      shortestpath[i][j] = mat[i][j];

    
  for (int k = 0; k < 10; k++) 
  {
    for (int i = 0; i < 10; i++) 
    {
      for (int j = 0; j < 10; j++) 
      {
        if (shortestpath[i][k] + shortestpath[k][j] < shortestpath[i][j])
        {
            shortestpath[i][j] = shortestpath[i][k] + shortestpath[k][j];
        }
      }
    }
  }
    for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                mat[i][j] = shortestpath[i][j];
            }
        }
}
    


int func_A(int original_mat[10][10])
{
    int num;
   // printf("enter numbers");
    for (int i = 0; i<10; i++)
        for (int j = 0; j < 10; j++)
        {
            scanf("%d",&num);
            if(i==j)
            {
                original_mat[i][j] = 0;
                continue;
            }
           
           else if(num == 0)
           {
                original_mat[i][j] = INFINITI;
                continue;
           }
           else 
           {
                original_mat[i][j] = num;
                continue;
           }
            
        } 
        
    Floyd_Warshall(original_mat);
    return 1;
}

int func_B(int original_mat[10][10],int a,int b)
{
    if((original_mat[a][b]!=0 && original_mat[a][b] != INFINITI) && (a != b))
    {
        printf("true\n");
        
    }
    else
    {
        printf("false\n");
    }
            return 1 ;

    
}

int func_C(int original_mat[10][10],int a ,int b)
{
    if(original_mat[a][b]==0 || original_mat[a][b] == INFINITI)
    return -1;
    else if(a==b)
    {
        return -1;

    }

    return original_mat[a][b];
}

void func_D()
{
    exit(0);
}