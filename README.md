VHere's an improved README file with dedicated screenshot sections after each program's documentation:

```markdown
# README for String Length Calculator and Matrix Cubes Generator

## Overview

This repository contains two C programs for different computational tasks:

1. **String Length Calculator**: Calculates the length of an input string
2. **Matrix Cubes Generator**: Computes the cube of each element in a square matrix

---

## String Length Calculator

### Description

A C program that implements a custom string length function (`own_strlen`) that counts characters until the null terminator (`\0`) is encountered.

### Features
- Custom implementation of string length calculation
- Uses `fgets()` for safe string input
- Handles strings up to 99 characters

### Code
```c
#include <stdio.h>

void own_strlen(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("The length of the string is: %d\n", count);
}

int main()
{
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    own_strlen(str);

    return 0;
}
```

### Screenshots
<div style="display: flex; justify-content: center; margin: 20px 0">
  <img src="https://placehold.co/600x400" alt="Terminal showing String Length Calculator in action with example input 'Hello World' and output showing length 11" />
</div>

### How to Run
1. Compile: `gcc strlen.c -o strlen`
2. Execute: `./strlen`
3. Enter input string when prompted

---

## Matrix Cubes Generator

### Description

A C program that takes a square matrix as input and returns a new matrix where each element is the cube of the original value.

### Features
- Dynamic matrix size input
- In-place matrix modification
- Clear formatted output

### Code
```c
#include <stdio.h>

void cubes(int rows, int cols, int a[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            a[i][j] = a[i][j] * a[i][j] * a[i][j];
        }
    }
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    cubes(size, size, arr);

    printf("\nMatrix after cubing each element:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

### Screenshots
<div style="display: flex; justify-content: center; margin: 20px 0">

 <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/5cea4f81-ec7d-4fda-91c8-f4bf75f81a84" />

 <img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/a9d3f1fc-f349-4072-91d9-dde6716b59b5" />
</div>

### How to Run
1. Compile: `gcc cubes.c -o cubes`
2. Execute: `./cubes`
3. Enter matrix size and elements when prompted

---

## License
This project is licensed under the MIT License.
```
