#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void flop(listint_t *node1, listint_t *node2, listint_t **list);
size_t find_smallest(int *array, size_t index, size_t size);
int lomuto(int *array, int low, int high, size_t size);
void flip(int *array, int a, int b, size_t size);
void quick_sort_rec(int *array, int low, int high, size_t size);
void counting_sort(int *array, size_t size);
#endif
