#include<conio.h>
#include<stdio.h> 
#include<unistd.h>
/************************************************************************************ ************************************************************************************* **************** 
                     Nandlal Das                        
************************************************************************************* ************************************************************************************* ***************/   
int main()
{
printf("\n\t\t\t\t");
printf("*******************Operating System Project*************************");
printf("\n\t\t\t\t"); 
sleep(3);
int n;  
//no. of process 
int r;  
//no. of resources
 int i,j,k,cnt,cntt; 
 int avail[10],p[10]; 
 int need[10][10],alloc[10][10],max[10][10]; 
 printf("\n Enter no. of process :"); 
 scanf("%d",&n); 
 printf("\n Enter no. of resources :"); 
 scanf("%d",&r); 
 printf("\n Enter instances for resources :\n"); 
 for(i=0; i<r; i++) 
 { 
 printf("R%d",i+1); 
 scanf("%d",&avail[i]); 
 } 
 printf("\n Enter allocation matrix \n "); 
 for(i=0; i<n; i++) 
 { 
 p[i]=0; 
 printf("p%d", i+1); 
 for(j=0; j<r; j++) 
 { 
 scanf("%d",&alloc[i][j]); 
 }
  
} 
printf("\n Enter MAX matrix \n"); 
for(i=0; i<n; i++) 
{ 
printf("p%d", i+1); 
for(j=0; j<r; j++) 
{ 
scanf("%d",&max[i][j]); 
} 
} 
for(i=0; i<n; i++) 
{ 
printf("\n p%d\t", i+1); 
for(j=0; j<r; j++) 
{ 
need[i][j]=max[i][j]-alloc[i][j]; 
printf("\t%d", need[i][j]); 
} 
} 
k=0; 
cntt=0; 
printf("\n\n"); 
while(k<15) 
{ 
for(i=0; i<n; i++) 
{ 
cnt=0; 
for(j=0; j<r; j++) 
{ 
if(p[i]==1) 
break; 
if(need[i][j]<=avail[j]) 
{ 
cnt++; 
} 
if(cnt==r) 
{ 
for(j=0; j<r; j++) 
{ 
avail[j]+=alloc[i][j]; 
} 
printf("p%d\t",i+1); p[i]=1; cntt++; 
} 
} 
} 
k++; 
} 
if(cnt<n-1) 
{ 
printf("\n System is in safe state"); 
} 
getch(); 
}
