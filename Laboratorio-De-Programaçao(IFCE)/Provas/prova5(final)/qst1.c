#include <stdio.h>
struct node{
  int x;
  int y;
};

void soma(struct node *p, int *b);

int main(void) {
  struct node fp;
  int b;
  fp.x = 10;
  fp.y = 20;
	
	void(*a)(struct node *, int *);

	a = soma;
  a(&fp, &b);
	printf("%d ", b);

  return 0;
}

void soma(struct node *p, int *b){
 *b = p->x + p->y;
}
