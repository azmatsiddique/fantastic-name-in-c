//azmatsididuqe
#include<stdio.h>
void name(void);
int main()
{
name();
}
void name(void)
{
    int arr[5][5][5]=
    {
        {
            {1,1,1,1,1},
            {1,0,0,0,1},
            {1,1,1,1,1},
            {1,0,0,0,1},
            {1,0,0,0,1}
        },
        {
            {1,1,1,1,1},
            {0,0,0,1,0},
            {0,0,1,0,0},
            {0,1,0,0,0},
            {1,1,1,1,1}
        },
        {
            {1,0,0,0,1},
            {1,1,0,1,1},
            {1,0,1,0,1},
            {1,0,0,0,1},
            {1,0,0,0,1}
        },
        {
            {1,1,1,1,1},
            {1,0,0,0,1},
            {1,1,1,1,1},
            {1,0,0,0,1},
            {1,0,0,0,1}
        },
        {
            {1,1,1,1,1},
            {0,0,1,0,0},
            {0,0,1,0,0},
            {0,0,1,0,0},
            {0,0,1,0,0}
        }
    };
    int x,y,z;
    for(x=0;x<5;x++)
    {
        for(z=0;z<5;z++)
        {
            for(y=0;y<5;y++)
                if(arr[z][x][y]==1)
                    printf("$");
                else
                    printf(" ");
            printf("  ");
        }
        printf("\n");
    }
}
