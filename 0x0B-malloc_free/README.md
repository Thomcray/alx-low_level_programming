## Task 0x0B.C - malloc, free
  0. write a function that creates an array of chars, and initializes it with a specific char.
   * returns NULL if size = 0
   * returns a pointer to the array, or NULL if it fails
  1. write a program that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a
     parameter
   * the _strdup() function returns a pointer to a new string which is a duplicate of thestring str. Memory of the new string is
     obtained with malloc, and can be freed with free
   * returns NULL if str = NULL
   * on success, the _strdup function returns a pointer to the duplicated string. it returns NULL if insufficient memory is 
     available
  2. write a function that concatenates two strings
   * the return pointer should point to a newly allocated spac in memory which contains the contents of s1, followed by the
     contents of s2, and null terminated.
   * if NULL is passed, treat it as an empty string
   * the function should return NULL on failure.
  3. write a function that returns a pointer to a 2 dimensional array of integers
   * each element of the grid should be initialized to 0
   * the function should return NULL on failure
   * if the width or height is 0 or negative, return NULL
  4. write a program that frees a 2 dimensional grid previously created by alloc_grid function
  5. write a program that concatenates all the arguments of your programs
   * returns NULL if ac == 0 or av == NULL
   * returns a pointer to a new string or NULL if it fails
   * each arguments should be followed by a \n in the new string
