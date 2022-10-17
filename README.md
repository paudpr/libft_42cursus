# libft

42 Cursus - libft: this project is about coding a C library. It contains a lot of general purpose functions future programs will rely on. 

## Table of contents 📑
- [Status](#status)
- [About the project](#about-the-project)
    * [Project boundaries](#project-boundaries)
- [How to use](#how-to-use)

## Status ✔️
- Status: finished
- Score: 100%
- Observations: efective way to understand the inner working of this standard functions.

## About the project 👩‍💻
##### Part 1. 
You must redo a set of functions from the `libc`. They must comply with the way they are defined in their `man`.

##### Part 2.
You must develop a set of functions that are either not in the `libc`, or that are part of it but in a different form.

##### Bonus part.
In your `Makefile`, add a `make bonus`rule to add the bonus functions to your `libft.a`. Implement functions in order to easily use your lists.

### Project boundaries 🔧

Declaring global variables is forbidden.
If you need helper fucntions to split a more complex function, define them as static functions.
Place all your files at the root of your repository.
Turning in unused files is forbidden. 
Every .c files must compile with the flags `-Wall -Werror -Wextra`.
You must use the command `ar` to create your library. Using the `libtool`command is forbidden.
Your `libft.a` has to be created at the root of your reository.


## How to use

Run `make`
Add `libft.a` when you compile `.c`files or link it to future projects specifying `libft.a` path and the  `-L`flag. 


##