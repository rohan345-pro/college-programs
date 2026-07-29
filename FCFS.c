#include<stdio.h>
int main()
{
int n,i,bt[10],wt[10],tat[10];
float awt=0,atat=0;
printf("enter number of process:");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("BT of p%d",i+1);
scanf("%d",&bt[i]);
}
wt[0]=0;
for(i=1;i<n;i++);
wt[i]=wt[i-1]+bt[i-1];
printf("\nP\tBT\twt\tTAT\n");
    for(i=0;i<n;i++)
    {
    tat[i]=wt[i]+bt[i];
    printf("P%d\t%d\t%d\t%d\n",i+1,bt[i],wt[i],tat[i]);
    
awt+=wt[i];
atat+=tat[i];
}
printf("average WT=%.2f",awt/n);
printf("/n average TAT=%.2f",atat/n);
return 0;
}
