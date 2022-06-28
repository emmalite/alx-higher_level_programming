#ifndef "LISTS_H"
#define "LISTS_H"

#include <stdio.h>
#include <stddef.h>

size_t print_listint(const listint_t *h);

listint_t *insert_node(listint_t **head, int number);
void free_listint(listint_t *head);

listint_t *new;

	listint_t *h;

	listint_t *h_prev;
new = malloc(sizeof(listint_t));

#endif /* LISTS_H */
