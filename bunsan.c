#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main(void){
  int i,j,S;
  double aveS,ave2S;
  int N=10000;
  int M=10000;
  double ave[M+1],ave2[M+1];
  double V;
  
  srand((unsigned int)time(NULL));//乱数の種
  
  for(j=1;j<=M;j++){
    ave[j]=0;
    S=0;
    for(i=1;i<=N;i++){
      S += rand()%6 + 1;  
    }
    ave[j] = S / (double)N;
    ave2[j] += ave[j] * ave[j];
  }
  aveS=0;
  for(j=1;j<=M;j++){
    aveS += ave[j];
    ave2S += ave2[j];
  }

  V = ave2S / (double)M - (aveS / (double)M) * (aveS / (double)M);
  
  printf("分散=%f, 標準偏差=%f, 1/√N=%f\n",V,sqrt(V),1/(double)sqrt(N));
} 


