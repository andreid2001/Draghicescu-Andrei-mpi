#include <stdio.h>
#include<stdlib.h>
int main()
{
   int  n, i, aux, sortat;
n=1000; //n=lungimea lui v
int v[n]; for (i=0;i<n;i++) v[i]=rand();
do{
sortat = 1;
for (i=0; i<n-1;i++){
if (v[i] > v[i+1]){ long int aux = v[i];
                   v[i] = v[i+1];
                   v[i+1] = aux;
                   sortat = 0;}
}
}while(sortat==0);
for (i=0;i<n;i++) printf("%d ",v[i]);

return 0;
}
