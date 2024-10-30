#include <stdio.h>
#include <conio.h>
int average (int *s[100][100],int n,int m);
int Highest(int *k[100][100],int n,int m);
int Lowest(int *k[100][100],int n,int m);
int main ()
{
int a[100][100],i,j,r[100],n,m;
char name[100][30],sn[100][30];
int av,h,l;
printf("Enter the number of Subjects:");
scanf("%d",&m);
printf("Enter the name of Subjects:");
for(j=0;j<m;j++) {="" scanf("%s",sn[j]);="" }="" printf("enter="" the="" students="" in="" a="" class:");="" scanf("%d",&n);="" for(i="0;i&lt;n;i++)" {="" printf("student="" name:");="" scanf("%s",name[i]);="" printf("roll="" no:="" ");="" scanf("%d",&r[i]);="" for(j="0;j&lt;m;j++)" {="" printf("%s="" :",sn[j]);="" scanf("%d",&a[i][j]);="" }="" return="" 0;="" }="" av="average(a,n,m);" h="Highest(a,n,m);" l="Lowest(a,n,m);" printf("average="" marks="" of="" class="" for="" a="" subject="" of="" %s="%d",sn[j],av);" printf("%s="" :%d="" :",name[h],r[h]);="" printf("highest="" mark="" in="" %s="%d\n",sn[j],a[h]);" printf("%s="" :%d="" :",name[l],r[l]);="" printf("lowest="" mark="" in="" %s="%d\n",sn[j],a[l]);" return="" 0;="" }="" int="" average="" (int="" *s[100][100],="" int="" n,int="" m)="" {="" int="" i,p="0,j;" int="" av;="" for(j="0;j&lt;m;j++)" {="" for(i="0;i&lt;n;i++)" {="" p="p+s[i][j];" }="" av="p/n;" }="" return="" av;="" }="" int="" highest(int="" *k[100][100],int="" n,int="" m)="" {="" int="" i,j,h="0;" for(j="0;j&lt;m;j++)" {="" for(i="0;i&lt;n;i++)" {="" if(h<k[i][j])="" {="" m="i;" h="k[i][j];" }="" }="" }="" return="" m;="" }="" int="" lowest(int="" *k[100][100],int="" n,int="" m)="" {="" int="" i,l="100,j;" for(j="0;j&lt;m;j++)" {="" for(i="0;i&lt;n;i++)" {="" if(l="">k[i][j])
{
m=i;
l=k[i][j];
}
}
}
return m;
}
