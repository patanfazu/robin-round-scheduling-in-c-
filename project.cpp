#include<iostream>
#include<stdlib.h>
#include <ctime>
using namespace std;
int main()
{
int at[100],brust[100],arrival[100],k[100];
int at1[100];;
int i,j=0,k1=0,n2,temp,n1,n;
int tq1=8,tq2=16;
int pty[100];
int rem[100],rem1[100],waiting[100];
int wait[100],wait1[100];
srand (time(0) );

cout<<"Process ID:\t Arrival Time:\t Burst Time:"<<endl;
for(i=0;i<100;i++)
{
n=rand()%100;
if(n>60)
{
at[j]=i;
brust[j]=rand()%15+12;
j=j+1;
}
}
n1=j;


//cout<<at[i];
for(i=0;i<n1;i++)
{
cout<<i<<"\t \t "<<at[i]<<"\t \t "<<brust[i]<<endl;
}

/*i=0;
while(i<=n-1)
{
int small=i;
while(small<=n-1)
{
if(at[small]<at[i])
{
at[i],at[small]=at[small],at[i];
}
small=small+1;
}
i=i+1;
}
for(i=0;i<n;i++)
{
cout<<"Sorted"<<at[i]<<endl;
}*/
//cout<<"Sorting processess based on arrival time"<<endl;
/*for(i=0;i<n1;i++)
{
for(j=i+1;j<n1;j++)
{
if(at[i]>at[j])
{
temp=at[i];
at[i]=at[j];
at[j]=temp;

}

}
}
for(i=0;i<n1;i++)
{
cout<<"Order is"<<at[i]<<endl;

}
//int tq[10];

for(i=0;i<n1;i++)
{
for(j=0;j<n;j++)
{
if(at[i]==arrival[j])
{
i=j;
}
}
cout<<i<<endl;
}

for(j=0;j<n1;j++)
{

brust[j]=brust[j];
//pty[i]=1;
}
*/

//cout<<"After Sorting THe Order is"<<endl;
//cout<<"Process ID:\t Arrival Time:\t Burst Time:"<<endl;
cout<<"Entering into Queue1"<<endl;
int tq[100];
for(i=0;i<n1;i++)
{
//cout<<"I is"<<i<<endl;
tq[0]=at[0];
//if(pty[i]==1)
//{

if(brust[i]<=8)
{
//cout<<"Hii";
cout<<"Process  "<<i<<" Executed from "<<tq[i]<<" to "<<tq[i]+brust[i]<<endl;
tq[i+1]=tq[i]+brust[i];
///pty[i]=2;
}
else
{

cout<<"Process "<<i<<" Exercuted from "<<tq[i]<<" to "<<tq[i]+tq1<<endl;
tq[i+1]=tq[i]+tq1;
brust[i]=brust[i]-tq1;
wait[i]=brust[i];
cout<<"Remaining burst time: "<<wait[i]<<endl;
pty[i]=2;

//}

}
//i=i+1;
}
//cout<<"Helooooooo"<<i;
//cout<<tq[4];
tq[0]=tq[i];
//cout<<"tq[0]=="<<tq[0];
cout<<"Entering into Queue 2 "<<endl;
for(i=0;i<n1;i++)
{
if(pty[i]==2)
{
///cout<<i;
//if(i>0)
//{
//tq[i]=tq[0];

if(brust[i]<=16)
{
///cout<<"tq"<<tq[0]<<"i is"<<i;
cout<<"Process "<<i<<" Executed from "<<tq[i]<<" to "<<tq[i]+brust[i]<<endl;
tq[i+1]=tq[i]+brust[i];
brust[i]=0;
}

else if(brust[i]>16)
{
cout<<"Process "<<i<<" Exercuted from "<<tq[i]<<" to "<<tq[i]+tq2<<endl;
tq[i+1]=tq[i]+tq2;
brust[i]=brust[i]-tq2;
wait1[i]=wait[i]+brust[i];
rem[i]=brust[i];
if(brust[i]>0)
{
rem1[k1]=brust[i];
k1=k1+1;
}


cout<<"Remaining burst time "<<rem[i]<<endl;
pty[i]=3;

}

//}
}

}
n2=k1;
cout<<"N is :"<<n2;

tq[0]=tq[i];
cout<<"Entering into Queue 3"<<endl;
for(i=0;i<n1;i++)
{
if(pty[i]==3)
{

//if(i>0)
//{

if(brust[i]>0)
{
cout<<"Process "<<i<<" executed from "<<tq[i]<<" to "<<tq[i]+brust[i]<<endl;
tq[i+1]=tq[i]+brust[i];
}

///
}
else
{
//cout<<"Hii";
tq[i+1]=tq[i];
//cout<<tq[i];
}
}
for(i=0;i<n2;i++)
{
cout<<rem1[i]<<endl;
}



}

