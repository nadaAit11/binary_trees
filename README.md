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

## Compilation :hammer_and_wrench:
To compile the program, you can use the following commands:

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 4-main.c 4-binary_tree_is_leaf.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-main.c 5-binary_tree_is_root.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root
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
```

## AUTHOR 👤
- [NEAZYIT](https://github.com/NEAZYIT)
- [Nada ait Kidar](https://github.com/nadaAit11)
