*This activity has been created as part of the 42 curriculum by sjaradat*

# 🎨✨ ft_printf — Custom printf() in C ✨🎨

---

## 📌 Description

🧠 **ft_printf** is a custom reimplementation of the standard C `printf` function.

This project focuses on mastering **variadic functions**, **format parsing**, **low-level output**, and **memory-safe number/string handling**.

All logic is written from scratch, respecting the behavior of the original `printf` while keeping the implementation simple and efficient.

---

## ⚙️🛠 Compilation

▶️ Build the library: `make` → generates **libftprintf.a**

🧹 Clean object files: `make clean`

🔥 Remove object files and the library: `make fclean`

♻️ Rebuild everything: `make re`

---

## 💻🚀 Usage

📎 Include the header:

```c
#include "ft_printf.h"
```

🧪 Compile your program:

```bash
cc main.c libftprintf.a -o main
```

📢 Example call:

```c
ft_printf("Hello %s | %d | %x\n", "42", 42, 42);
```

---

## 🧰🎯 Supported Conversions

✅ `%c` → print a single character

✅ `%s` → print a string

✅ `%p` → print a pointer address in hexadecimal

✅ `%d` / `%i` → print signed integers

✅ `%u` → print unsigned integers

✅ `%x` → print hexadecimal (lowercase)

✅ `%X` → print hexadecimal (uppercase)

✅ `%%` → print a percent sign

🔢 The function returns the **total number of characters printed**, just like the original `printf`.

🛡 Handles edge cases such as NULL strings, zero values, negative numbers, and large integers.

---

## 🔧🧩 Internal Logic

🧠 Uses `stdarg.h` to manage variadic arguments.

🔁 Implements recursive and iterative number printing.

🧾 Converts integers to decimal and hexadecimal manually.

📍 Formats pointers using the `0x` prefix.

✍️ Uses `write()` for output instead of `printf()`.

---

## 📚📖 Resources

📘 42 subject PDF and official documentation.

📙 Linux manual pages: `man 3 printf`

🌐 [C reference — fprintf](https://en.cppreference.com/w/c/io/fprintf)

---

## 🤖📝 AI Usage

🤝 AI tools were used **only** to help structure and improve the README documentation.

🚫 AI was **NOT** used to generate the project source code.

✅ All logic was implemented, tested, and validated manually by the student.
