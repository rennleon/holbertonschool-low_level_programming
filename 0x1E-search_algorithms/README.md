# 0x1E. C - Search Algorithms

**Usefull links**
- [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
- [Space complexity](https://www.geeksforgeeks.org/g-fact-86/)

## Tasks
## 0. Linear search
Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)

```shell
$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear.c -o 0-linear
```

`File:` [0-linear.c](0-linear.c), [0-main](./mains/0-main.c)


## 1. Binary search
Write a function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)

```shell
$ gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-binary.c -o 1-binary
```

`File:` [1-binary.c](1-binary.c), [1-main.c](./mains/1-main.c)


## 2. Big O #0
What is the time complexity `(worst case)` of a linear search in an array of size n?

`File:` [2-O](2-O)


## 3. Big O #1
What is the space complexity `(worst case)` of an iterative linear search algorithm in an array of size n?

`File:` [3-O](3-O)


## 4. Big O #2
What is the time complexity `(worst case)` of a binary search in an array of size n?

`File:` [4-O](4-O)


## 5. Big O #3
What is the space complexity `(worst case)` of a binary search in an array of size n?

`File:` [5-O](5-O)


## 6. Big O #4
What is the space complexity of this function algorithm?

```c
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

`File:` [6-O](6-O)


## 7. Jump search
Write a function that searches for a value in a sorted array of integers using the [Jump search algorithm](https://en.wikipedia.org/wiki/Jump_search)

- Use the `sqrt()` function included in `<math.h>` (**remember to compile with** `-lm`)

```shell
$ gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -lm -o 100-jump
```

`File:` [100-jump.c](100-jump.c), [100-main.c](./mains/100-main.c)


## 8. Big O #5
What is the time complexity `(average case)` of a jump search in an array of size `n`, using `step = sqrt(n)`?

`File:` [101-O](101-O)


## 9. Interpolation search
Write a function that searches for a value in a sorted array of integers using the [Interpolation search algorithm](https://en.wikipedia.org/wiki/Interpolation_search)

```shell
$ gcc -Wall -Wextra -Werror -pedantic 102-main.c 102-interpolation.c -o 102-interpolation
```

`File:` [102-interpolation.c](102-interpolation.c), [102-main.c](./mains/102-main.c)


## 10. Exponential search
Write a function that searches for a value in a sorted array of integers using the [Exponential search algorithm](https://en.wikipedia.org/wiki/Exponential_search)

```shell
$ gcc -Wall -Wextra -Werror -pedantic 103-main.c 103-exponential.c -o 103-exponential
```

`File:` [103-exponential.c](103-exponential.c), [103-maia.c](./mains/103-main.c)


## 11. Advanced binary search
Write a function that searches for a value at the lowest index in a sorted array of integers using `binary search`.

```shell
$ gcc -Wall -Wextra -Werror -pedantic 104-main.c 104-advanced_binary.c -o 104-advanced_binary
```

`File:` [104-advanced_binary.c](104-advanced_binary.c), [104-main.c](./mains/104-main.c)


## 12. Jump search in a singly linked list
Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.
Define the following data structure in your `search_algos.h` header file:

```c
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;
```

```shell
$ gcc -Wall -Wextra -Werror -pedantic 105-main.c 105-jump_list.c listint/*.c -lm -o 105-jump
```

`File:` [105-jump_list.c](105-jump_list.c), [105-main.c](./mains/105-main.c)


## 13. Linear search in a skip list
Write a function that searches for a value in a sorted skip list of integers.
Define the following data structure in your `search_algos.h` header file:

```c
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
```

```shell
$ gcc -Wall -Wextra -Werror -pedantic 106-main.c 106-linear_skip.c skiplist/*.c -lm -o 106-linear
```

`File:` [106-linear_skip.c](106-linear_skip.c), [106-main.c](./mains/106-main.c)


## 14. Big O #6
What is the time complexity `(average case)` of a jump search in a singly linked list of size n, using `step = sqrt(n)`?

`File:` [107-O](107-O)

## 15. Big O #7
What is the time complexity `(average case)` of a jump search in a skip list of size n, with an express lane using `step = sqrt(n)`?

`File:` [108-O](108-O)
