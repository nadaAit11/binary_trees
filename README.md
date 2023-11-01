# Binary Trees 🌲

## Table of Contents 📋
- [Description](#description)
- [Requirements](#requirements)
- [Files](#files)
- [Tasks](#tasks)
  - [Task 0: New node](#task-0-new-node)
  - [Task 1: Insert left](#task-1-insert-left)
  - [Task 2: Insert right](#task-2-insert-right)
  - [Task 3: Delete](#task-3-delete)
  - [Task 4: Is leaf](#task-4-is-leaf)
  - [Task 5: Is root](#task-5-is-root)
  - [Task 6: Pre-order traversal](#task-6-pre-order-traversal)
  - [Task 7: In-order traversal](#task-7-in-order-traversal)
  - [Task 8: Post-order traversal](#task-8-post-order-traversal)
  - [Task 9: Height](#task-9-height)
  - [Task 10: Depth](#task-10-depth)
  - [Task 11: Size](#task-11-size)
  - [Task 12: Leaves](#task-12-leaves)
  - [Task 13: Nodes](#task-13-nodes)
  - [Task 13: Nodes](#task-13-nodes)
  - [Task 14: Balance factor](#task-14-balance-factor)
  - [Task 15: Is full](#task-15-is-full)
  - [Task 16: Is perfect](#task-16-is-perfect)
  - [Task 17: Sibling](#task-17-sibling)
  - [Task 18: Uncle](#task-18-uncle)
  - [Task 19: Lowest Common Ancestor](#task-19-lowest-common-ancestor)
  - [Task 20: Level-Order Traversal](#task-20-level-order-traversal)
  - [Task 21: Is Complete](#task-21-is-complete)
  - [Task 22: Rotate Left](#task-22-rotate-left)
  - [Task 23: Rotate Right](#task-23-rotate-right)
  - [Task 24: Is BST](#task-24-is-bst)
  - [Task 25: BST - Insert](#task-25-bst-insert)
  - [Task 26: BST - Array to BST](#task-26-bst-array-to-bst)
  - [Task 27: BST - Search](#task-27-bst-search)
  - [Task 28: BST - Remove](#task-28-bst-remove)
  - [Task 29: Big O #BST](#task-29-big-o-bst)
  - [Task 30: Is AVL](#task-30-is-avl)
  - [Task 31: AVL - Insert (Advanced)](#task-31-avl-insert-advanced)
  - [Task 32: AVL - Array to AVL (Advanced)](#task-32-avl-array-to-avl-advanced)
  - [Task 33: AVL - Remove (Advanced)](#task-33-avl-remove-advanced)
  - [Task 34: AVL - From sorted array (Advanced)](#task-34-avl-from-sorted-array-advanced)
  - [Task 35: Big O AVL Tree](#task-35-big-o-avl-tree)
  - [Task 36: Is Binary heap](#task-36-is-binary-heap)
  - [Task 37: Heap - Insert](#task-37-heap-insert)
  - [Task 38: Heap - Array to Binary Heap](#task-38-heap-array-to-binary-heap)
  - [Task 39: Heap - Extract](#task-39-heap-extract)
  - [Task 40: Heap - Sort](#task-40-heap-sort)
  - [Task 41: Big O Binary Heap](#task-41-big-o-binary-heap)
- [Compilation](#compilation)
- [Usage](#usage)
- [Author](#author)

## Description 📝
This repository contains C programs that implement various binary tree operations.

## Requirements 📦
* Allowed editors: vi, vim, emacs
* All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
* All source files should end with a new line.
* A `README.md` file, at the root of the project folder, is mandatory.
* The code should follow the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`.
* Global variables are not allowed.
* No more than 5 functions per file.
* The standard C library is allowed.
* The prototypes of all functions should be included in a header file named `binary_trees.h`.
* Don't forget to push your header file.
* All header files should have include guards.
* There should be one project repository per group. Cloning, forking, or using a repository with the same name before the second deadline may result in a 0% score.

## Tasks 📋
### Task 0: New node
**Description:** Create a function that creates a binary tree node.

**Prototype:** `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`

### Task 1: Insert left
**Description:** Create a function that inserts a node as the left-child of another node.

**Prototype:** `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`

### Task 2: Insert right
**Description:** Create a function that inserts a node as the right-child of another node.

**Prototype:** `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`

### Task 3: Delete
**Description:** Create a function that deletes an entire binary tree.

**Prototype:** `void binary_tree_delete(binary_tree_t *tree);`

### Task 4: Is leaf
**Description:** Create a function that checks if a node is a leaf.

**Prototype:** `int binary_tree_is_leaf(const binary_tree_t *node);`

### Task 5: Is root
**Description:** Create a function that checks if a given node is a root.

**Prototype:** `int binary_tree_is_root(const binary_tree_t *node);`

### Task 6: Pre-order traversal
**Description:** Create a function that goes through a binary tree using pre-order traversal.

**Prototype:** `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`

### Task 7: In-order traversal
**Description:** Create a function that goes through a binary tree using in-order traversal.

**Prototype:** `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`

### Task 8: Post-order traversal
**Description:** Create a function that goes through a binary tree using post-order traversal.

**Prototype:** `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`

### Task 9: Height
**Description:** Create a function that measures the height of a binary tree.

**Prototype:** `size_t binary_tree_height(const binary_tree_t *tree);`

### Task 10: Depth
**Description:** Create a function that measures the depth of a node in a binary tree.

**Prototype:** `size_t binary_tree_depth(const binary_tree_t *tree);`

### Task 11: Size
**Description:** Create a function that measures the size of a binary tree.

**Prototype:** `size_t binary_tree_size(const binary_tree_t *tree);`

### Task 12: Leaves
**Description:** Create a function that counts the leaves in a binary tree.

**Prototype:** `size_t binary_tree_leaves(const binary_tree_t *tree);`

### Task 13: Nodes
**Description:** Create a function that counts the nodes with at least 1 child in a binary tree.

**Prototype:** `size_t binary_tree_nodes(const binary_tree_t *tree);`

### Task 14: Balance factor
**Description:** Write a function that measures the balance factor of a binary tree.

**Prototype:** `int binary_tree_balance(const binary_tree_t *tree);`

### Task 15: Is full
**Description:** Write a function that checks if a binary tree is full.

**Prototype:** `int binary_tree_is_full(const binary_tree_t *tree);`

### Task 16: Is perfect
**Description:** Write a function that checks if a binary tree is perfect.

**Prototype:** `int binary_tree_is_perfect(const binary_tree_t *tree);`

### Task 17: Sibling
**Description:** Write a function that finds the sibling of a node.

**Prototype:** `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`

### Task 18: Uncle
**Description:** Write a function that finds the uncle of a node.

**Prototype:** `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`

### Task 19: Lowest Common Ancestor
**Description:** Create a function that finds the lowest common ancestor of two nodes in a binary tree.

**Prototype:** `binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);`

### Task 20: Level-Order Traversal
**Description:** Create a function that goes through a binary tree using level-order traversal.

**Prototype:** `void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));`

### Task 21: Is Complete
**Description:** Write a function that checks if a binary tree is complete.

**Prototype:** `int binary_tree_is_complete(const binary_tree_t *tree);`

### Task 22: Rotate Left
**Description:** Create a function that rotates a binary tree to the left.

**Prototype:** `binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);`

### Task 23: Rotate Right
**Description:** Create a function that rotates a binary tree to the right.

**Prototype:** `binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);`

### Task 24: Is BST
**Description:** Write a function that checks if a binary tree is a Binary Search Tree (BST).

**Prototype:** `int binary_tree_is_bst(const binary_tree_t *tree);`

### Task 25: BST - Insert
**Description:** Create a function to insert a value into a Binary Search Tree (BST).

**Prototype:** `binary_tree_t *bst_insert(binary_tree_t **tree, int value);`

### Task 26: BST - Array to BST
**Prototype:** `bst_t *array_to_bst(int *array, size_t size);`

### Task 27: BST - Search
**Prototype:** `bst_t *bst_search(const bst_t *tree, int value);`

### Task 28: BST - Remove
**Prototype:** `bst_t *bst_remove(bst_t *root, int value);`

### Task 29: Big O #BST

### Task 30: Is AVL
**Prototype:** `int binary_tree_is_avl(const binary_tree_t *tree);`

### Task 31: AVL - Insert (Advanced)
**Description:** Write a function that inserts a value in an AVL Tree.

**Prototype:** `avl_t *avl_insert(avl_t **tree, int value);`

### Task 32: AVL - Array to AVL (Advanced)
**Description:** Write a function that builds an AVL tree from an array.

**Prototype:** `avl_t *array_to_avl(int *array, size_t size);`

### Task 33: AVL - Remove (Advanced)
**Description:** Write a function that removes a node from an AVL tree.

**Prototype:** `avl_t *avl_remove(avl_t *root, int value);`

### Task 34: AVL - From sorted array (Advanced)
**Description:** Write a function that builds an AVL tree from a sorted array.

**Prototype:** `avl_t *sorted_array_to_avl(int *array, size_t size);`

### Task 35: Big O AVL Tree
**Theme:** Average time complexities of operations on an AVL Tree (one answer per line):
- Inserting the value n
- Removing the node with the value n
- Searching for a node in an AVL tree of size n

### Task 36: Is Binary heap
**Theme:** Check if a binary tree is a valid Max Binary Heap.

### Task 37: Heap - Insert
**Theme:** Insert a value in Max Binary Heap.

### Task 38: Heap - Array to Binary Heap
**Theme:** Build a Max Binary Heap tree from an array.

### Task 39: Heap - Extract
**Theme:** Extract the root node of a Max Binary Heap.

### Task 40: Heap - Sort
**Theme:** Convert a Binary Max Heap to a sorted array of integers.

### Task 41: Big O Binary Heap
**Theme:** Average time complexities of operations on a Binary Heap (one answer per line):
- Inserting the value n
- Extracting the root node
- Searching for a node in a binary heap of size n

## Files 📂
The project contains the following files:

1. `0-binary_tree_node.c`: Creates a binary tree node.
2. `1-binary_tree_insert_left.c`: Inserts a node as the left-child of another node.
3. `2-binary_tree_insert_right.c`: Inserts a node as the right-child of another node.
4. `3-binary_tree_delete.c`: Deletes an entire binary tree.
5. `4-binary_tree_is_leaf.c`: Checks if a node is a leaf.
6. `5-binary_tree_is_root.c`: Checks if a node is a root.
7. `6-binary_tree_preorder.c`: Pre-order traversal of a binary tree.
8. `7-binary_tree_inorder.c`: In-order traversal of a binary tree.
9. `8-binary_tree_postorder.c`: Post-order traversal of a binary tree.
10. `9-binary_tree_height.c`: Measures the height of a binary tree.
11. `10-binary_tree_depth.c`: Measures the depth of a node in a binary tree.
12. `11-binary_tree_size.c`: Measures the size of a binary tree.
13. `12-binary_tree_leaves.c`: Counts the leaves in a binary tree.
14. `13-binary_tree_nodes.c`: Counts the nodes with at least 1 child in a binary tree.
15. `14-binary_tree_balance.c`: Measures the balance factor of a binary tree.
16. `15-binary_tree_is_full.c`: Checks if a binary tree is full.
17. `16-binary_tree_is_perfect.c`: Checks if a binary tree is perfect.
18. `17-binary_tree_sibling.c`: Finds the sibling of a node.
19. `18-binary_tree_uncle.c`: Finds the uncle of a node.
20. `19-binary_trees_ancestor.c`: Finds the lowest common ancestor of two nodes in a binary tree.
21. `20-binary_tree_levelorder.c`: Level-order traversal of a binary tree.
22. `21-binary_tree_is_complete.c`: Checks if a binary tree is complete.
23. `22-binary_tree_rotate_left.c`: Rotates a binary tree to the left.
24. `23-binary_tree_rotate_right.c`: Rotates a binary tree to the right.
25. `24-binary_tree_is_bst.c`: Checks if a binary tree is a Binary Search Tree (BST).
26. `25-bst_insert.c`: Inserts a value into a Binary Search Tree (BST).
27. `26-array_to_bst.c`: Builds a Binary Search Tree from an array.
28. `27-bst_search.c`: Searches for a value in a Binary Search Tree.
29. `28-bst_remove.c`: Removes a node from a Binary Search Tree.
30. `29-O`: Average time complexities of operations on a Binary Search Tree.
31. `30-binary_tree_is_avl.c`: Checks if a binary tree is a valid AVL Tree.
32. `31-avl_insert.c`: Inserts a value in an AVL Tree.
33. `32-array_to_avl.c`: Builds an AVL tree from an array.
34. `33-avl_remove.c`: Removes a node from an AVL tree.
35. `34-sorted_array_to_avl.c`: Builds an AVL tree from a sorted array.
36. `35-O`: Average time complexities of operations on an AVL Tree.
37. **Big O #AVL Tree**
38. **Is Binary Heap**
39. **Heap - Insert**
40. **Heap - Array to Binary Heap**
41. **Heap - Extract**

## Compilation :hammer_and_wrench:
To compile the program, you can use the following commands:

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 4-main.c 4-binary_tree_is_leaf.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-main.c 5-binary_tree_is_root.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 9-main.c 9-binary_tree_height.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-height
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 10-main.c 10-binary_tree_depth.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 11-main.c 11-binary_tree_size.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 12-main.c 12-binary_tree_leaves.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 12-leaves
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 13-main.c 13-binary_tree_nodes.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-nodes
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 14-main.c 14-binary_tree_balance.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 14-balance
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 15-main.c 15-binary_tree_is_full.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 15-full
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 16-main.c 16-binary_tree_is_perfect.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 16-perfect
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 19-main.c 19-binary_trees_ancestor.c -o 19-ancestor
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 20-main.c 20-binary_tree_levelorder.c -o 20-levelorder
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 21-main.c 21-binary_tree_is_complete.c -o 21-complete
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 22-main.c 22-binary_tree_rotate_left.c -o 22-rotate-left
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 23-main.c 23-binary_tree_rotate_right.c -o 23-rotate-right
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 24-main.c 24-binary_tree_is_bst.c -o 24-is-bst
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 25-main.c 25-bst_insert.c -o 25-bst-insert
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 112-array_to_bst.c 112-main.c 111-bst_insert.c 0-binary_tree_node.c -o 112-bst_array
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 113-bst_search.c 113-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c -o 113-bst_search
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 114-bst_remove.c 114-main.c 112-array_to_bst.c 111-bst_insert.c 0-binary_tree_node.c 3-binary_tree_delete.c -o 114-bst_rm
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 120-main.c 120-binary_tree_is_avl.c 0-binary_tree_node.c -o 120-is_avl
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 121-avl_insert.c 121-main.c 14-binary_tree_balance.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c 0-binary_tree_node.c -o 121-avl_insert
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 122-array_to_avl.c 122-main.c 121-avl_insert.c 0-binary_tree_node.c 14-binary_tree_balance.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c -o 122-avl_array
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 123-avl_remove.c 123-main.c 103-binary_tree_rotate_left.c 104-binary_tree_rotate_right.c 122-array_to_avl.c 121-avl_insert.c 14-binary_tree_balance.c 3-binary_tree_delete.c 0-binary_tree_node.c -o 123-avl_rm
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 124-main.c 124-sorted_array_to_avl.c 0-binary_tree_node.c -o 124-avl_sorted
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 130-main.c 130-binary_tree_is_heap.c 0-binary_tree_node.c -o 130-is_heap
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 131-main.c 131-heap_insert.c 0-binary_tree_node.c -o 131-heap_insert
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 132-main.c 132-array_to_heap.c 131-heap_insert.c 0-binary_tree_node.c -o 132-heap_array
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 133-main.c 133-heap_extract.c 132-array_to_heap.c 131-heap_insert.c 3-binary_tree_delete.c -o 133-heap_extract
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 134-main.c 134-heap_to_sorted_array.c 133-heap_extract.c 132-array_to_heap.c 131-heap_insert.c -o 134-heap_sort

```

## Usage :computer:
ou can run the compiled programs as follows:
```bash
./0-node
./1-left
./2-right
./3-del
./4-leaf
./5-root
./9-height
./10-depth
./11-size
./12-leaves
./13-nodes
./14-balance
./15-full
./16-perfect
./17-sibling
./18-uncle
./100-ancestor
./101-lvl
./102-complete
./103-rotl
./104-rotr
./110-is_bst
./111-bst_insert
./112-bst_array
./113-bst_search 
./114-bst_rm
./29-big-o-bst
./120-is_avl
./121-avl_insert
./122-avl_array
./123-avl_rm
./124-avl_sorted
./130-is_heap
./131-heap_insert
./132-heap_array
./134-heap_sort
./134-heap_sort
./41-Heap - Extract
```

## AUTHOR 👤
- [NEAZYIT](https://github.com/NEAZYIT)
- [diri smitl](dir link dyal github dyalk)
