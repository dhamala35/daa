#include<stdio.h>
void BFS(int[20][20],int,int[20],int);

void main()
{
int n,a[20][20],i,j,visited[20],source;
clrscr();
printf("enter number of vertices:");
scanf("%d",&n);
printf("\nenter adjacency matrix\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
for(i=1;i<=n;i++)
visited[i]=0;
printf("\nEnter the source node:");
scanf("%d",&source);
visited[source]=1;
BFS(a,source,visited,n);
for(i=1;i<=n;i++)
{
if(visited[i]!=0)
printf("\nnode %d is reachable",i);
else
printf("\nnode %d is not reachable",i);
}
getch();
}
void BFS(int a[20][20], int source, int visited[20], int n)
{
int queue[20],f,r,u,v;
f=0;r=-1;
queue[++r]=source;
while(f<=r)
{
u=queue[f++];
for(v=1;v<=n;v++)
{
if(a[u][v]==1&&visited[v]==0)
{
queue[++r]=v;
visited[v]=1;
 }
}
}
}
Output:
Enter no. of vertices; 4
Enter adjacency matrix
0 1 1 1
0 0 0 0
0 0 0 1
0 0 0 0
Enter the source node: 3
Node 1 not reachable
Node 2 not reachable
Node 3 reachable
Node 4 reachable
