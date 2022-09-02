#include<stdio.h>
void main(){
  int n,totwt,tot;
  scanf("enter number of jobs %d",&n);
  int j[n],et[n],wt[n],tat[n];
  printf("enter the expected times for jobs");
  for(int i=0;i<n;i++){
    scanf("%d",&et[i]);
  }
  wt[0]=0;
  for(int i=0;i<n;){
    tat[i]=et[i]+wt[i];
    i++;
    wt[i]=tat[i-1];
  }
  totwt=0;
  for(int i=0;i<n;i++){
    totwt+=wt[i]l;
    tot+=tat[i];
  }
  print("Total waiting time: %d",totwt);
  print("Total turn around time: %d",tot);
  print("average waiting time: %d",totwt/n);
  print("average turn around time: %d",tot/n);
}
  
  
