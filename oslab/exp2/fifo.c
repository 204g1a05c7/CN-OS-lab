void main(){
int tape[]=[1,2,5,4,8,1,7,5,1,7,1,5];
int queue[]=[-1,-1,-1,1,2,5,4,8,1,7,5,1,7,1,5];
int index,f=3;
int frame=[-1,-1,-1];
int check(int a)
{
for(int i=0;i<f;i++)
{
if(a=frame[i])
{
return 0;
}
}
return 1;
}
int indexof(int b)
{
for(int m=0;m<f;m++)
{
if(frame[m]==b)
{
return m;
}
}
}
for(int i=0;i<12;i++)
{
if (check(tape[i]))
{
index=indexof(queue[top]);
frame[index]=tape[i];
top++;
}
}
