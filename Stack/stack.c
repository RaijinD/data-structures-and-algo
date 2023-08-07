#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

Stack *create_stack() { return (Stack *)malloc(sizeof(Stack)); }

bool is_full(Stack *stack) {
  if (stack->top == SIZE - 1) {
    return true;
  }
  return false;
}

bool is_empty(Stack *stack) {
  if (stack->top == 0) {
    return true;
  }
  return false;
}

void push(Stack *stack, int item) {
  if (!is_full(stack)) {
    stack->top++;
    stack->items[stack->top] = item;
    return;
  };
  printf("Stack is Full!!\n");
}

int pop(Stack *stack) {
  if(!is_empty(stack)){
    stack->top--;
    return stack->items[stack->top + 1];
  }
  printf("Stack is Empty!!\n");
  return 0;
}

int peek(Stack *stack){
  if(!is_empty(stack)){
    return stack->items[stack->top];
  }
  return 0;
}

void print_stack(Stack *stack){
  printf("-----------------------\n");
  printf("Printing the Stack: \n");
  for(int i = 0 ; i <= stack->top; i++){
    printf("Stack %i: %i \n",i,stack->items[i]);
  }
  printf("-----------------------\n");
}

int main() { 
  Stack *s = create_stack();
  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);
  push(s, 4);
  push(s, 3);
  push(s, 4);
  push(s, 7);
  push(s, 9);
  push(s, 1);

  print_stack(s);

  pop(s);

  printf("\nFinished\n");
  print_stack(s);
}
