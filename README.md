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

## Format Specifiers

| Specifier | Description  | 
| --- |:---:| 
|  %c | single character | 
| %s  | string  |  
|  %f | float  |  


### Example format test

Printing the string "Hello":

    _printf ("Print the string %d")

Output

    Output: Print the string Hello


## Functions

- **000_printf.c**
> Gives the appropiate print functions if passed a valid specifier
- **000selector.c**
> A group of functiond that take care of the specifier conversion.

### Flowcharts


### Compilation



    $ gcc -Wall -Werror -Wextra -pedantic *.c

### Example test



    int main(void)
    {
      char c = 'H'
      
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
