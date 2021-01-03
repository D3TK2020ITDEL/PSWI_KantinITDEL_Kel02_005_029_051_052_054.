/*
    Nama    = Boby Aritonang
    NIM     = 13320005
    Prodi   = D3 TK   
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265
int main(){
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k,z,m,x,val,ret;    
system("cls");  
printf("masukkan baris=");    
scanf("%d",&r);    
printf("masukkan kolom=");    
scanf("%d",&c);    
printf("masukkan matriks=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("masukkan matriks=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
    
printf("matriks=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
} 

z=(i*j)+(i*j);
printf("nila dot product = %d\n",z);

m= z ;
printf("magnitut %d\n",m);


  x = m;
   val = PI / 180.0;
   ret = cos( x*val );
   printf("The cosine of %lf is %lf degrees\n", x, ret);
return 0; 
}