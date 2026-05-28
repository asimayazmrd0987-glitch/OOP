# OPPS in C++ — Object-Oriented Programming

&gt; **Note:** The repo name says "OPPS" because I was in a hurry when I created it. We're keeping it — mistakes that ship are features.

A structured collection of **OOP concepts** implemented in **C++**, built during my 2nd semester at **UET Mardan**. Every folder contains programs I wrote, debugged, and refactored to actually understand how OOP works under the hood. Not copy-pasted from tutorials.

---

## 📁 What's Inside

| Folder | What It Covers |
|--------|--------------|
| [Abstraction](./Abstraction) | Interfaces, pure virtual functions, hiding implementation |
| [Error Handling](./Error%20Handling) | `try-catch`, `throw`, custom exception classes |
| [File Handling](./File%20Handling) | `fstream`, binary/text I/O, serialization |
| [Inheritance](./Inheritance) | Single, multilevel, multiple, hierarchical, hybrid |
| [Lab Code](./Lab%20Code) | Weekly UET submissions — constructors, destructors, basic classes |
| [Math in cpp](./Math%20in%20cpp) | Operator overloading for complex numbers, matrix operations |
| [Mingled](./Mingled) | Programs mixing multiple OOP concepts together |
| [OOP Assignments of my University](./OOP%20Assignments%20of%20my%20University) | Complete semester assignment solutions |
| [Operator Overloading](./Operator%20Overloading) | `+`, `-`, `&lt;&lt;`, `&gt;&gt;`, `[]`, `()` for custom types |
| [PRACTICE](./PRACTICE) | Repeated drills — the boring stuff that makes you fast |
| [Polymorphism](./Polymorphism) | Function overloading, virtual functions, vtables, RTTI |
| [Streams](./Streams) | `iostream` internals, stream manipulators, buffer handling |
| [Templates](./Templates) | Function templates, class templates, generic containers |
| [headerfiles](./headerfiles) | `.h`/`.hpp` separation, include guards, forward declarations |

---

## 🛠️ Build & Run

Most programs are single-file or small multi-file projects.

```bash
# Single file
g++ -std=c++17 -o output filename.cpp
./output

# Multi-file (with headers)
g++ -std=c++17 main.cpp class.cpp -o output
./output
