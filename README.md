 # _printf
> Write your own `printf` function

![printf_image](https://user-images.githubusercontent.com/105127608/177921385-7e43a821-f0fb-4594-a9f5-b2eb9a207441.jpg)

## Description

This team project is part of the first trimester curriculum of Holberton School. `_printf` replicates the C standard library `printf()` function.

What you should learn from this project:

- How to use git in a contributor setting
- Applying variadic functions to a extense project
- The complexity of printf
- Managing a lot of files and finding a good workflow
- Creating good flowchart with practice 

## Synopsis
_printf.c:`int _printf(const char *format, ...);`

## Usage 
- Our project required a function capable of printing with the `%d`, `%c`, `%s`, and `%%` specifiers to standard output. 
- `printf` returns the number of characters printed (excluding the null byte at the end of strings). 

##Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md' file, at the root of the folder of the project is mandatory
- Your code should use the `Betty style`. It will be checked using 'betty-style.pl' and 'betty-doc.pl'
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project



## Format Specifiers

| Specifier | Description  | 
| --- |:---:| 
|  %c | single character | 
| %s  | string  |  
|  %d, %i | integer  |  


### Example format test

Printing the string "Hello":

    _printf ("Print the string %d")

Output

    Output: Print the string Hello


## Functions

- **000-_Printf.c**
> Gives the appropiate print functions if passed a valid specifier
- **000-print_functions.c**
> A group of functions that take care of the specifier conversion.
- **main.h**
> The header file were the libraries and prototypes are located.



### Compilation



    $ gcc -Wall -Werror -Wextra -pedantic *.c

### Example test



    int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
    
       
		      
    


## Built With

  - [Ubuntu](https://ubuntu.com/) 
  - [GitHub](https://github.com/)
  - [PurpleBooth](https://github.com/PurpleBooth)

## Authors

  - **Victor** - [*@VCruz910*](https://github.com/VCruz910)
  - **Angeira** -[*@AngeiraT*](https://github.com/AngeiraT)

## License

This project is licensed under the Holberton School Software Engineering Program.

## Acknowledgments

  - Approaching a Project
  - Group Projects
  - Cohort 18
  - Flowcharts
  - Pair Programming -How to

## References
  - [Manual page 3 for printf](https://man7.org/linux/man-pages/man3/printf.3.html)
  - [Secrets of "printf"](https://www.cypress.com/file/54761/download)
