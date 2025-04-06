#include <stdio.h>
#include <stdlib.h>

struct node;
void print_list(node *list);

#define list_decl(type) \
struct node \
{\
	type data; \
	node* next = NULL; \
};\
void add_element(node *list, type data); \
void print_object(type* data); \

#define list_def(type) \
void print_list(node *list) \
{ \
	node* tmp = list; \
	while (tmp != NULL) { \
		print_object(&tmp->data); \
		tmp = tmp->next; \
	} \
} \
\
node* create_node(type data) \
{ \
	node* tmp = (node*) calloc(1, sizeof(node)); \
	tmp->data = data; \
	return tmp; \
} \
\
node* add_element(node *list, type data) \
{ \
	node* head = list; \
	if (head == NULL) { \
		head = create_node(data); \
		return head; \
	} \
	while (head->next != NULL) { \
		head = head->next; \
	} \
} \

list_decl(int);
list_def(int);

int main(void)
{
	return 0;
}