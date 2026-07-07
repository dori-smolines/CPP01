*This project has been created as part of the 42 curriculum by smolines.*

# CPP Module 01

## Description

This repository contains the exercises of **Module 01** of the C++ curriculum at 42, following on from Module 00's introduction to Object-Oriented Programming. Still complying with the C++98 standard, this module covers **memory allocation** (stack vs. heap), **pointers to members**, **references**, and **switch statements**.

### Exercise 00 — BraiiiiiiinnnzzzZ

A `Zombie` class with a private `name` attribute and an `announce()` member function that prints `<name>: BraiiiiiiinnnzzzZ...`. Two helper functions illustrate the difference between heap and stack allocation:
- `newZombie(name)` — allocates a zombie on the heap and returns a pointer to it, so it can be used outside the function's scope.
- `randomChump(name)` — allocates a zombie on the stack, makes it announce itself, and lets it be destroyed automatically at the end of the function.

The destructor prints a message with the zombie's name for debugging purposes.

### Exercise 01 — Moar brainz!

Extends Exercise 00 with a `zombieHorde(N, name)` function that allocates `N` `Zombie` objects in a **single allocation** on the heap, initializes them all with the same name, and returns a pointer to the first one. All zombies are properly `delete`d afterward to avoid memory leaks.

### Exercise 02 — HI THIS IS BRAIN

A short program that declares a string, a pointer to that string, and a reference to that string, then prints the memory address and the value held by each of the three — a hands-on demonstration that a reference is simply another syntax for address manipulation.

### Exercise 03 — Unnecessary violence

Introduces a `Weapon` class (with a `type` attribute, a `getType()` returning a constant reference, and a `setType()`), and two classes representing fighters:
- **`HumanA`** — always takes its `Weapon` in the constructor and is therefore always armed.
- **`HumanB`** — does not take a `Weapon` in its constructor and may or may not be armed; a weapon can be assigned later via `setWeapon()`.

Both expose an `attack()` member function printing `<name> attacks with their <weapon type>`. This exercise illustrates when to use a reference vs. a pointer to a member object.

### Exercise 04 — Sed is for losers

A program taking a filename and two strings `s1`/`s2` as arguments, opening `<filename>`, and writing its content into a new file `<filename>.replace` with every occurrence of `s1` replaced by `s2` — implemented entirely with C++ file streams (`std::ifstream`/`std::ofstream`) and `std::string`, without using `std::string::replace` or any C file-manipulation function.

### Exercise 05 — Harl 2.0

A `Harl` class simulating a chronic complainer with four private member functions (`debug()`, `info()`, `warning()`, `error()`) and a public `complain(level)` function that dispatches to the right one — using **pointers to member functions** instead of a chain of `if`/`else if`.

### Exercise 06 — Harl filter

Builds on Exercise 05 with a `harlFilter` executable that takes a log level as its argument and displays every message from that level and above (using a `switch` statement), so lower-priority complaints can be filtered out.

## Instructions

### Compilation

```bash
make
```

Run inside each exercise's directory (`ex00/` through `ex06/`). Each Makefile compiles the corresponding source files with `c++ -Wall -Wextra -Werror` (compatible with `-std=c++98`), and includes the required `$(NAME)`, `all`, `clean`, `fclean`, and `re` rules.

### Running

**Exercise 00 / 01:**

```bash
./zombie
```

Prints zombie announcements for both heap- and stack-allocated zombies (ex00), or for a full horde allocated in one go (ex01).

**Exercise 02:**

```bash
./brain
```

Prints the addresses and values of the string, the pointer, and the reference.

**Exercise 03:**

```bash
./violence
```

Demonstrates `HumanA` and `HumanB` attacking with a shared `Weapon`, and how changing the weapon's type affects both.

**Exercise 04:**

```bash
./replace <filename> <s1> <s2>
```

Example:

```bash
./replace cochon "cochon" "chat"
```

Creates `cochon.replace` with every occurrence of `"cochon"` replaced by `"chat"`.

**Exercise 05:**

```bash
./harl
```

Runs a self-contained test showing Harl complaining across all four levels.

**Exercise 06:**

```bash
./harlFilter "WARNING"
```

Displays only `WARNING` and `ERROR` level messages. Any input that doesn't match a known level triggers a default fallback message.

## Resources

- [cplusplus.com — `std::string` reference](http://www.cplusplus.com/reference/string/string/)
- [cplusplus.com — `<fstream>` reference](http://www.cplusplus.com/reference/fstream/)
- General documentation on stack vs. heap memory allocation, references vs. pointers, and pointers to member functions in C++98

**AI usage:** AI assistance was used to help draft and structure this README file (organizing sections, describing each exercise's behavior and usage) based on the actual project source code and the official subject requirements. No AI-generated code was used in the implementation of the exercises themselves; all class design and logic were written and understood by the author.

