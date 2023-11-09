```markdown
# Doubly Linked List Functions

This repository contains C functions for working with a doubly linked list (`dlistint_t`). Each function is documented and accompanied by example usage.

## Table of Contents

- [dlistint_len](#dlistint_len)
- [print_dlistint](#print_dlistint)
- [add_dnodeint](#add_dnodeint)
- [add_dnodeint_end](#add_dnodeint_end)
- [free_dlistint](#free_dlistint)
- [get_dnodeint_at_index](#get_dnodeint_at_index)
- [sum_dlistint](#sum_dlistint)
- [insert_dnodeint_at_index](#insert_dnodeint_at_index)
- [delete_dnodeint_at_index](#delete_dnodeint_at_index)

## dlistint_len

### Description

Returns the number of elements in a linked `dlistint_t` list.

### Example

```c
size_t numElements = dlistint_len(head);
```

## print_dlistint

### Description

Prints all the elements of a `dlistint_t` list.

### Example

```c
print_dlistint(head);
```

## add_dnodeint

### Description

Adds a new node at the beginning of a `dlistint_t` list.

### Example

```c
head = add_dnodeint(&head, 42);
```

## add_dnodeint_end

### Description

Adds a new node at the end of a `dlistint_t` list.

### Example

```c
head = add_dnodeint_end(&head, 84);
```

## free_dlistint

### Description

Frees a `dlistint_t` list.

### Example

```c
free_dlistint(head);
```

## get_dnodeint_at_index

### Description

Gets a node at a specific index in a `dlistint_t` list.

### Example

```c
dlistint_t *node = get_dnodeint_at_index(head, 2);
```

## sum_dlistint

### Description

Calculates the sum of all the elements in a `dlistint_t` list.

### Example

```c
int sum = sum_dlistint(head);
```

## insert_dnodeint_at_index

### Description

Inserts a new node at a specific index in a `dlistint_t` list.

### Example

```c
head = insert_dnodeint_at_index(&head, 2, 99);
```

## delete_dnodeint_at_index

### Description

Deletes a node at a specific index in a `dlistint_t` list.

### Example

```c
int success = delete_dnodeint_at_index(&head, 3);
```


