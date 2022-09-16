/* name:p gana sree akshaya
roll no: 204g1a05c7
name of exp: fcfs algorithm
*/
#include<stdio.h>
#include<conio.h>
main(){
  int bt[20],wt[20],tat[20],i,n;
  float wtavg,tatavg;
  clrscr();
  printf("\nEnter the number of processes--");
  scanf("%d",&n);
  for(i-0;i<i++){
    printf("\nEnter burst time for process%d--",i);
    scanf("%d",&bt[i])
    }
  wt[0]=wtavg=0;
  tat[0]=tatavg=bt[0];
  for(i=1;i<n;i++){
    wt[i]=wt[i-1]+bt[i-1];
    
  
