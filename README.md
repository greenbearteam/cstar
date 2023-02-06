<a href="https://cstar.greenbear.ml"><img src="img/cstar.png" alt="C*"></a>

[cstar](https://github.com/greenbearteam/cstar) | [docs](https://docs.greenbear.ml/cstar) | [examples](https://github.com/greenbearteam/cstar-examples)

![cstarver](https://img.shields.io/github/v/release/greenbearteam/cstar)
![](https://img.shields.io/github/forks/greenbearteam/cstar)
![](https://img.shields.io/github/stars/greenbearteam/cstar)


## C*

C* (c-star) is a C-based language, based on Objective-C and C++. Has it own compiler, is dynamic and lightweight.

## cxc

cxc is the C* compiler. It is made on LLVM IR and is fast than other C compilers.

Compiler|Speed
---|---
Clang|1m
GCC|30s
cxc|5s

## Compatibility

C* can use the native header files (.h,.hpp) and the source file (.cx). .e.g:
```c
#include "MyHeader.h"
#include "MyHeader2.cx"

Int main() {
  my_header_function();
  my_header_function_2();
}
```
