/* This is compiler design homework. */

/* To code,
   or not to code. */

// function declaration
int sub(int x, int y);

int main(){

  // variables
  int a,i;
  int b=1;
  double c=0;
  char d='x';
  int *ptr;
  int ar[111];
  // statements
  a = 10/2;
  c = (b+3)*4-5;
  b = sub(10,8);
  for(i=0; i<10; i++)
    a=a+i;
  return a;

}

// function
int sub(int x, int y){
  return x-y;
}
