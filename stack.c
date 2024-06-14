#include <stdio.h>
#include <stdlib.h>
 
struct stack
 {
    int size;
    int top;
    int* arr;
 }typedef stack;
 

//to check that stack is empty
int isEmpty(struct stack *ptr)
 {
    if (ptr->top == -1 && ptr !=NULL)
    {
        
        return 1;
    }
    else
    {
     
     return 0;

    }
}
 


//to check that stack has space



int isFull(struct stack *ptr)
 {
 // size-1 due to zero indexing in arrays
 if (ptr->top == ((ptr->size)-1)  && ptr !=NULL)
    {
        
        return 1;
    }
    else
    {
     
     return 0;

    }
}




//to push (add) a element at stack

void push(stack* stack_input,int element){

    if(isFull(stack_input)==0){
    stack_input->top++;
    stack_input->arr[stack_input->top]=element;
    }
}

//to pop (extract) a element at stack

int pop(stack* stack_input){
    int value;
    if(isEmpty(stack_input)==0){
    value = stack_input->arr[stack_input->top];
     stack_input->arr[stack_input->top]=0;
        stack_input->top--;
    return  value;

    }
}


void  stack_traversal(stack *s){
    for(int i=0;s->arr[i] != s->arr[s->size];i++) {
      printf("%d\n",s->arr[i]) ; 
    
    }
}

void main()
 {
    
 
     stack *s=( stack *) malloc(sizeof(stack));
    s->size = 9;
    s->top = -1;
    int s_size=s->size;
   s->arr=(int*) malloc(s_size*sizeof(int));
    


    //manually pushing data in stacks 
    s->arr[0]=55;
    s->top++;
     
     //isEmpty(s);
     //isFull(s);

    push(s,8);
    push(s,18);
    push(s,9);
    push(s,7);
    push(s,74);
    push(s,70);
    push(s,78);
    push(s,77);
    pop(s);
    push(s,7);



    // printf("%d\n",s->arr[s->top]);
     //int value= pop(s);
     //printf("%d\n",value);

    stack_traversal(s);

    
}
