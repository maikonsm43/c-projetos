
// Matriz identidade e triangular

#include<stdio.h>
#include<stdlib.h>
main()
{
      int m1[3][3], m2[3][3];
      int a, b; //-> contadores!!
      printf("\n  ..Matriz indentidade 3x3..\n\n");
      for(a=0; a<3; a++){
      for(b=0; b<3; b++){
      if(a==b){
      m1[a][b]=1;
      printf("  %1d",m1[a][b]);}
      if(a!=b){
      m1[a][b]=0;
      printf("  %1d",m1[a][b]);}}
      printf("\n");}
      printf("\n  ..Matriz Triangular 3x3..\n\n");
      for(a=0; a<3; a++){
      for(b=0; b<3; b++){
      if(b>a){
      m2[a][b]=0;
      printf("  %1d",m2[a][b]);}
      else{
      m2[a][b]=1;
      printf("  %1d",m2[a][b]);}}
      printf("\n");}
      printf("\n\n");
      system("PAUSE");}
