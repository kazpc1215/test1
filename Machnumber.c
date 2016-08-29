#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
  int i;
  double dr=0.0001;
  double r;
  double Cs=3*10^7;
  int N=1000;
  double M[N+1];
  double L2[N+1];
  double dL2=1.0;
  double L2Max;
  double k;
  double F;
  double GM=6.7*10^(-8) * 10^5;
  

  L2[1] = 0;
  L2Max = GM^2 / (4*3*Cs^2);
  k = L2Max / dL2;
  for(i=1,i<k;i++){
    L2[i+1] = L2[i] + dL2;
  }
  
  F = 3 / r;
  M[1]=0.0;
  for(i=1,i<=N,i++){
    M[i+1] = M[i] + M/(M^2 - 1) * (F + 1/Cs^2 *(-GM/r^2 + L2[0]/r^3) * dr;
  }
      printf("%f %f %f\n",r,M,L2);
} 
