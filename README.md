# README

## Length Finder

This program defines a function `own_strlen` that calculates the length of a given string without using the standard library function `strlen`. It prompts the user to enter a string and then displays the length of that string.

### Code Explanation

1. **Function `own_strlen`**:
   - Takes a character pointer `str` as input.
   - Iterates through the string until it encounters the null terminator (`'\0'`).
   - Counts the number of characters and prints the length.

2. **Main Function**:
   - Declares a character array `str` to hold the input string.
   - Uses `fgets` to read the string from standard input.
   - Calls `own_strlen` to calculate and display the length of the string.

### How to Run

1. Compile the code using a C compiler (e.g., `gcc`).
2. Run the executable.
3. Enter a string when prompted.

### Example Output

```
Enter string: Hello, World!
The length of a string is: 13
```

<img width="1920" height="1080" alt="Screenshot (489)" src="https://github.com/user-attachments/assets/f59a7a2c-2ddf-42d7-83e6-32909930d5cc" />


---

## Cubes Generator

This program generates a matrix of cubes based on user input. It prompts the user to enter the size of the matrix and the elements of the matrix, then computes the cube of each element.

### Code Explanation

1. **Function `cubes`**:
   - Takes the number of rows and columns along with a 2D array `a`.
   - Iterates through each element of the array and replaces it with its cube.

2. **Main Function**:
   - Prompts the user to enter the size of the matrix.
   - Initializes a 2D array `arr` of the specified size.
   - Collects user input for each element of the matrix.
   - Calls `cubes` to compute the cubes of the elements.
   - Displays the modified matrix.

### How to Run

1. Compile the code using a C compiler (e.g., `gcc`).
2. Run the executable.
3. Enter the size of the matrix and the elements when prompted.

### Example Output

```
Enter size: 2
a[0][0] = 1
a[0][1] = 2
a[1][0] = 3
a[1][1] = 4

Matrix after cubing each element:
1	8	
27	64	
```

<img width="1920" height="1080" alt="Screenshot (490)" src="https://github.com/user-attachments/assets/1caf86e9-c23a-4913-9925-d13a3a5d12ad" />


---

### Notes

- Ensure that you have a C compiler installed to run the programs.
