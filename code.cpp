#include<stdio.h> 
#include<conio.h> 
void box(); 
void name(); 
void main() 
{ 
    clrscr(); 
    name(); 
    box(); 
    getch(); 
} 
void box() 
{ 
    int x,y; 
    for(x=1;x<25;x++) 
    { 
        gotoxy(1,x); 
        printf("%c",186); 
        gotoxy(79,x); 
        printf("%c",186); 
    } 
    for(y=1;y<80;y++) 
    { 
        gotoxy(y,1); 
        printf("%c",205); 
        gotoxy(y,24); 
        printf("%c",205); 
    } 
    gotoxy(79,1); 
    printf("%c",187); 
    gotoxy(79,24); 
    printf("%c",188); 
    gotoxy(1,24); 
    printf("%c",200); 
    gotoxy(1,1); 
    printf("%c",201); 
} 
void name() 
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
        gotoxy(23,10+x); 
        for(z=0;z<5;z++) 
        { 
            for(y=0;y<5;y++) 
                    printf("%c",arr[z][x][y]); 
            printf("  "); 
        } 
    } 
}