#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 700

double ijk(int n,int arrayA[700][700],int arrayB[700][700],int arrayC[700][700])
{
clock_t start_t,end_t;
double total_t,sum;
start_t=clock();
int i,j,k;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
     sum=0;
     for(k=0;k<n;k++)
     {
         sum+= arrayA[i][k]*arrayB[k][j];
         arrayC[i][j]= sum;
     }
    }
}
end_t=clock();
total_t=(double)(end_t-start_t);
return(total_t);
}

double jik(int n,int arrayA[700][700],int arrayB[700][700],int arrayC[700][700])
{
clock_t start_t,end_t;
double total_t,sum;
start_t=clock();
int i,j,k;
for(j=0;j<n;j++)
{
    for(i=0;i<n;i++)
    {
     sum=0;
     for(k=0;k<n;k++)
     {
         sum+= arrayA[i][k]*arrayB[k][j];
         arrayC[i][j]= sum;
     }
    }
}
end_t=clock();
total_t=(double)(end_t-start_t);
return(total_t);
}

double kij(int n,int arrayA[700][700],int arrayB[700][700],int arrayC[700][700])
{
clock_t start_t,end_t;
double total_t,sum;
start_t=clock();
int i,j,k,r;
for(k=0;k<n;k++)
{
    for(i=0;i<n;i++)
    {
     r=arrayA[i][k];
     for(j=0;j<n;j++)
     {
         arrayC[i][j]+= r*arrayB[k][j];
     }
    }
}
end_t=clock();
total_t=(double)(end_t-start_t);
return(total_t);
}

double ikj(int n,int arrayA[700][700],int arrayB[700][700],int arrayC[700][700])
{
clock_t start_t,end_t;
double total_t,sum;
start_t=clock();
int i,j,k,r;
for(i=0;i<n;i++)
{
    for(k=0;k<n;k++)
    {
     r=arrayA[i][k];
     for(j=0;j<n;j++)
     {
         arrayC[i][j]+= r*arrayB[k][j];
     }
    }
}
end_t=clock();
total_t=(double)(end_t-start_t);
return(total_t);
}

double jki(int n,int arrayA[700][700],int arrayB[700][700],int arrayC[700][700])
{
clock_t start_t,end_t;
double total_t,sum;
start_t=clock();
int i,j,k,r;
for(j=0;j<n;j++)
{
    for(k=0;k<n;k++)
    {
     r=arrayB[k][j];
     for(i=0;i<n;i++)
     {
         arrayC[i][j]+= r*arrayA[i][k];
     }
    }
}
end_t=clock();
total_t=(double)(end_t-start_t);
return(total_t);
}

double kji(int n,int arrayA[700][700],int arrayB[700][700],int arrayC[700][700])
{
clock_t start_t,end_t;
double total_t,sum;
start_t=clock();
int i,j,k,r;
for(k=0;k<n;k++)
{
    for(j=0;j<n;j++)
    {
     r=arrayB[k][j];
     for(i=0;i<n;i++)
     {
         arrayC[i][j]+= r*arrayA[i][k];
     }
    }
}
end_t=clock();
total_t=(double)(end_t-start_t);
return(total_t);
}
void main()
{
FILE *f1,*f2,*f3,*f4,*f5,*f6;
f1=fopen("ijkdata.csv","w");
f2=fopen("jikdata.csv","w");
f3=fopen("kijdata.csv","w");
f4=fopen("ikjdata.csv","w");
f5=fopen("jkidata.csv","w");
f6=fopen("kjidata.csv","w");
int dim;
int i,j,k,count=0;
static int A[M][M];
static int B[M][M];
static int C[M][M];
for(i=0;i<M;i++)
{
    for(j=0;j<M;j++){
    A[i][j]=count;
    B[i][j]=count;
    C[i][j]=0;
    count++;
}
}
for(dim=50;dim<=700;dim+=25)
{
fprintf(f1,"%d,%lf\n",dim,ijk(dim,A,B,C));
fprintf(f2,"%d,%lf\n",dim,jik(dim,A,B,C));
fprintf(f3,"%d,%lf\n",dim,kij(dim,A,B,C));
fprintf(f4,"%d,%lf\n",dim,ikj(dim,A,B,C));
fprintf(f5,"%d,%lf\n",dim,jki(dim,A,B,C));
fprintf(f6,"%d,%lf\n",dim,kji(dim,A,B,C));
}

fclose(f1);
fclose(f2);
fclose(f3);
fclose(f4);
fclose(f5);
fclose(f6);
}
