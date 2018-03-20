#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);

int main(int argc, char * argv[])
{
  int ch, poppedch; // ch is the stdin and poppedch is the c
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
    if(ch=='<'){
        ch = getchar();
        if(isalpha(ch)){
            push(ch);
        }
        else if(ch=='/'){
            ch = getchar();
            poppedch = pop();
            //Let's check if the stack is empty.
            if(isEmpty() == 1)
               exit;
            elseif(poppedch != ch ){
                printf("Invalid!\n");
                exit;
            }
        }
    }

  }
  if(isEmpty()== 0){
    fprintf(stderr,"Invalid!\n");
    exit(1);}
  else{
    fprintf(stderr,"Valid!\n");
    exit(0);}
}
