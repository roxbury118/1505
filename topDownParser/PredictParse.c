/*
E --> TE'
E' --> +TE' | ε                
T --> FT'
T' --> *FT' | ε
F --> id | (E)
*/

#include<stdio.h>
#include<string.h>
char input[100];
int i=0;
E();
void main(){
  if(E()){              
  if(input[i]=='\0'){             
    printf("string is accpected \n");
  }                  
  else{
    printf("string id rejected\n");
  }
    }
}

int E(){
if(input[i]=='')
}
