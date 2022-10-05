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
