# C Practice

A collection of C programming practice programs, experiments, and solutions tracked as I keep learning the language.

<p>
  <a href="https://www.gnu.org/software/gcc/">
    <img src="https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="Language: C" />
  </a>
  <a href="https://gcc.gnu.org/">
    <img src="https://img.shields.io/badge/Compiler-GCC-F34B7D?style=for-the-badge&logo=gnu&logoColor=white" alt="Compiler: GCC" />
  </a>
  <a href="https://code.visualstudio.com/">
    <img src="https://img.shields.io/badge/Editor-VS_Code-007ACC?style=for-the-badge&logo=visualstudiocode&logoColor=white" alt="Editor: VS Code" />
  </a>
  <a href="LICENSE">
    <img src="https://img.shields.io/badge/License-MIT-green?style=for-the-badge" alt="License: MIT" />
  </a>
</p>

## Why

Practice work for a BCA C programming course, kept as a running record of learning the language one program at a time.

## When

Started in September 2026.

## Tech Stack

- **Language:** C
- **Compiler:** GCC
- **Editor:** Visual Studio Code

## Why This Stack

- **C:** the language being learned in the course, so every program is practice in it.
- **GCC:** the standard free C compiler, available everywhere and the natural way to build plain C programs.
- **VS Code:** a lightweight editor with good C support for writing and running small programs.

## Practice Topics

All programs currently live in the `Basics` folder and cover:

- **Input and output:** `hello.c`, `printst.c`, `question.c` (printf and scanf)
- **Arithmetic programs:** `avg.c` (average), `si.c` (simple interest), `ctof.c` (Celsius to Fahrenheit), `sqrt.c` (square root)
- **Conditional logic:** `evenodd.c`, `posneg.c`, `largest.c`, `largest3num.c`, `largestoftwonumber.c`, `leapyearcheck.c`, `grades.c`, `weekdays.c` (if/else and switch)
- **Character checks:** `vorc.c` (vowel or consonant)
- **Loops:** `loop.c`, `fibbonaci.c` (Fibonacci series)
- **Swapping values:** `swap.c`, `swap2nums.c` (temp variable and arithmetic swap)

New programs and topics are added as learning continues.

## Getting Started

Clone the repository:

```bash
git clone https://github.com/p3xz/c-practice.git
```

Compile any program with GCC:

```bash
gcc filename.c -o program
```

Run it:

On Windows:

```bash
program.exe
```

On Linux or macOS:

```bash
./program
```

Example:

```bash
gcc Basics/hello.c -o hello && ./hello
```

## License

MIT. See [LICENSE](LICENSE) for details.

## Credits

Built and maintained by [p3xz](https://github.com/p3xz) as a personal record of C programming practice.
