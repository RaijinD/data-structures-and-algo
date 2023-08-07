#define SIZE 10

typedef struct stack_t {
  int items[SIZE];
  int top; // Count
} Stack;

void push(Stack *stack, int item);
int pop(Stack *stack);
bool is_empty(Stack *stack);
bool is_full(Stack *stack);
int peek(Stack *stack);

void print_stack(Stack *stack);
