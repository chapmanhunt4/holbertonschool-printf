
![PrintF](https://github.com/chapmanhunt4/holbertonschool-printf/assets/143765559/2ad1ca6d-3f10-432a-9c51-4cfb1dbf080e)

<h2 align="center">Indroduction</h2>
<p align="center">A custom implementation of our own printf function</p>

<details><summary>Table of Contents</summary>
  
- `Introduction`: <i>An introduction to our custom printf function</i>
- `Format Specifiers`: <i>The format specifiers that are used in our code</i>
- `Headers`: <i>The Headers we implemented</i>
- `FlowChart`: <i>A flow chart explaining the execution process of our function</i>
- `Clone REPO`: <i>link to clone this repo</i></details>


<h3 align="left">List of Format Specifiers</h3>

| Format Specifiers | |
| ------------- | ------------- |                
| %s  | Format / Print Strings  |                 
| %c  | Format / Print Characters  |
| %i  | Format / Print Integers  |
| %d  | Format / Print Decimal Numbers |

<h3>List of headers</h3>

| Headers | |
| ------------- | ------------- |
| #include  |  "main.h"  |
| #include  |  <stdio.h> |
| #include  | <stdlib.h> |
| #include  | <string.h> |
| #include  | <stdarg.h> |
| #include  | <unistd.h> |
| #include  | <limits.h> |
| #include  | <stddef.h> |

<h3 align="left">Prototype's</h2>

- `get_spec_func`: <i>int get_spec_func(char *str, va_list args, int i)</i>
- `print_char`: <i>int print_char(va_list args)</i>
- `print_string`: <i>int print_string(va_list args)</i>
- `print_number`: <i>int print_digit(va_list args)</i>
- `_putchar`: <i>int _putchar(char c)</i></details>
- `_strlen`: <i>int _strlen(const char *str)</i></details>
- `_printf`: <i>int _printf(char *format, ...)</i></details>









<h3 align="center">FlowChart</h3>
<p align="center">This flowchart is the process we went through while creating the printf function. This is also how the code is executed</p>

![Flowcharts](https://github.com/chapmanhunt4/holbertonschool-printf/assets/143765559/2b4c7e3f-1786-4fa2-95dd-66bc66415a4a)

<h2 align="center">Clone Link</h2>

```bash
git clone https://github.com/chapmanhunt4/holbertonschool-printf.git
```
