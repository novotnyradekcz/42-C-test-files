# 42 C Piscine Test Files
Testing files for functions created during C Piscine at [42 Prague](https://www.42prague.com/) in October 2022

## Instructions for use

There is one file for each project which test all the functions at once. If you place it in the main directory of your project (e. g. `../C_00/main.c`), all the individual files are included from folder `ex00`, `ex01` etc. Since the files are all included, simply compile the testing file alone and execute the output:
```
cc -Wall -Wextra -Werror main.c
./a.out
```

This could cause problems if you are reusing the same function in more than one task (e. g. your `ex01` and `ex04` both use `ft_strlen()`). In that case you will need to test the exercises that use the same function seperately by commenting out the corresponding `#include` line at the beginning of the main file. For example if `ft_function1.c` and `ft_function2.c` both use the same `ft_help_fun()`:
```
#include ex00/ft_function1.c
// #include ex01/ft_function2.c
#include ex02/ft_function3.c
```
Then compile and run the `main.c` to test `ex00` and `ex02` and then uncomment the second line and comment the first line to test `ex01`.

In `C_08`, there are seperate testing files for different exercises, so you will need to compile and run them one by one but the principle is the same, for example:
```
cc -Wall -Wextra -Werror main01.c
./a.out
```

The tests are in no way exhaustive and I encourage you to compile and run each file multiple times, changing the testing input in the `main.c` file inbetween.

I am sure there are many errors; if you find any, let me know :)
