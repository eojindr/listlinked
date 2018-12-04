#include <stdio.h>
#include <stdlib.h>

struct Node {
	int value;
	struct Node *next;
}typedef node;

void print_node (node *head) {
	node *p;
	p = head;
	int count = 0, num = 0, num2 = 0;;
	while (p->next!= NULL) {
		printf("%3d", p->value);
		p = p->next;
		count++;
	}
	printf("\n%3d", count);
	p = head;
	while (num<(count/2)) {
		p = p->next;
		num++;
	}
	printf("\n%3d\n", p->value);
	for (num2 = count-1; num2 >=0; num2--) {
		num = num2;
		p = head;
		while (num > 0) {
			p = p->next;
			num--;
		}
		printf("%3d", p->value);
	}		
	puts("");
	p = head;
	p = p->next;
	while (p->next != NULL||p->next->next!=NULL) {
		printf("%3d", p->value);
		p->next = p->next->next;
	}
}

int main() {
	node *first = NULL;
	node *head = NULL;
	node *temp = NULL;
	node *p = NULL;
	int i = 0;

	first = (node*)malloc(sizeof(node));
	p = first;
	head = first;
  printf("숫자를 입력해주세요 아니면 ctrl+z를 눌러주세요");
	while (scanf("%d", &i) != EOF) {
		p->value = i;
		temp = (node*)malloc(sizeof(node));
		temp->next = NULL;
		p->next = temp;
		p = temp;
	}

	print_node(head);

	system("pause");
	return 0;
}
