# C-Primer-Plus-Reading-Notes
This is my reading notes of the book named "C Primer Plus".

[//]: # "Image References"
[image1]: ../../images/CPrimerPlus.jpg "Cover"


![alt text][image1]



## Preface 前言

C语言标准：非正式的K&R标准，发展到1990 ISO/ANSI标准，进而发展到2011 ISO/IEC标准。

### Approach and Goals 方法和目标

C Primer Plus employs the following strategies:

* Programming concepts are explained
* Examples illustrate just one or two concepts at a time, because learning by doing is one of the most effective ways to master new information.
通过示例演示一两个概念，在介绍C语言细节的同时，讲解编程概念。
* Figures and illustrations clarify concepts that are difficult to grasp in words alone.
以图表演示帮助读者理解。
* Highlight boxes summarize the main features of C for easy reference and review.
* Review questions and programming exercise at the end of each chapter allow you to test and improve your understanding of C.

To gain the greatest benefit, you should take as active a role as possible in studying the topics in this book. 
Don't just read the examples, enter them into your system, and try them. 
不仅要仔细阅读程序示例，还要亲自动手录入程序并运行。
Experiment-change part of a program to see what the effect is.
Modify a program to do something slightly different. Ignore the occasional warnings and see what happens when you do the wrong thing. 
经常改动程序的某些部分，运行后看看有什么效果。
Try the questions and exercises. The more you do yourself, the more you will learn and remember.
多问多做。



## Chapter 1. Getting Ready

### 第1章 初识C语言

#### 1.1 Whence C? C语言的起源

#### 1.2 Why C? 选择C语言的理由

#### 1.2.1 设计特性

自顶向下的规划、结构化编程和模块化设计

#### 1.2.2 优点：控制能力、高效性、代码紧凑、可移植性

具有通常是汇编语言才具有的微调控制能力（汇编语言是为特殊的中央处理单元设计的一系列内部指令，使用助记符来表示；不同的CPU系列使用不同的汇编语言），可以根据具体情况微调程序以获得最大运行速度或最有效地使用内存。



#### 1.2.3 可移植性

#### 1.2.4 强大而灵活

#### 1.2.5 面向程序员

库函数

#### 1.2.6 缺点

### 1.3 Whither C? C语言的应用范围

### 1.4 What Computers Do? 计算机能做什么

### 1.5 High-level Computer Languages and Compilers 高级计算机语言和编译器

高级计算机编程语言（如，C）相对机器语言简化了编程工作，并且具有更好的可读性。

编译器程序将计算机无法理解的高级语言翻译成计算机能理解的机器语言指令集。

程序员进行高级思维活动，而编译器则负责处理冗长乏味的细节工作。

编译器的优势：不同CPU制造商使用不同的指令系统和编码格式，如用Intel Core i7 CPU编写的机器语言程序对于ARM Cortex-A57 CPU而言什么都不是。使用与特定类型CPU匹配的编译器或编译器集，可以把一种高级语言程序转换成供各种不同类型CPU使用的机器语言程序，让编译器集翻译成不同CPU使用的机器语言。因此，高级语言（如C、Java、Pascal）以更抽象的方式描述行为，不受限于特定CPU或指令集。

C是结构化编程语言，Java是面向对象编程语言。

### 1.6 语言标准

《The C Programming Language》第1版是公认的C语言标准，通常称之为K&R C或经典C。该书附录中的“C语言参考手册”已成为实现C的指导标准，编译器都声称提供完整的K&R实现。

C语言比其他语言更依赖库，UNIX实现提供的库已成为了C标准库。

#### 1.6.1 第1个ANSI/ISO C标准

ANSI/美国国家标准协会与1989年开发了ANSI C标准，定义了C语言和C标准库，也叫做C89。

ISO/国际标准化组织与1990年采用了ANSI C标准，并称为ISO C标准，也叫做C90。

两个标准是一样的。

#### 1.6.2 C99标准

ANSI/ISO联合委员会加入新特性，修订并发布了C99标准。

#### 1.6.3 C11标准

2011年，ANSI/ISO联合委员会加入新特性，修订并发布了C11标准。

### 1.7 使用C语言的7个步骤

#### 1.7.1 第1步：定义程序的目标

#### 1.7.2 第2步：设计程序

#### 1.7.3 Step3/第3步：Write the code/编写代码

Listing 1.1 

#### 1.7.4 第4步：编译

编译器是把源代码转换成可执行代码的程序。

#### 1.7.5 第5步：运行程序

#### 1.7.6 第6步：测试和调试程序

#### 1.7.7 第7步：维护和修改代码

#### 1.7.8 说明

### 1.8 编程机制

源代码文件：.c

最简单的程序：

Listing 程序清单 2.1 first.c程序

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int num = 1;   /* 定义一个名为num的变量，*/
    
    printf("Hello, World!\n");
    
    printf("Hello, World! My favorite number is %d. \n", num);
    
    return 0;

}

#### 1.8.1 源代码、目标代码文件、可执行文件和库

#### 1.8.2 UNIX系统

#### 1.8.3 GNU编译器集合和LLVM项目

#### 1.8.4 Linux系统

#### 1.8.5 PC的命令行编译器

#### 1.8.6 集成开发环境（Windows）

#### 1.8.7 Windows/Linux

#### 1.8.8 Macintosh中的C——Xcode

### 1.9 本书的组织结构

螺旋式方法：先在前几个章节中简单介绍一些主题，在后面章节再详细谈论相关内容。

如：对学习C语言而言，理解函数至关重要。因此，我们在前几个章节中安排一些与函数相关的内容，让读者能今早在自己的程序中使用这些有用的工具，等第9章再详细学习使用函数。

### 1.10 本书的约定

#### 1.10.1 字体

#### 1.10.2 程序输出

#### 1.10.3 特殊元素

### 1.11 本章小结

   C语言提供了大量的实用编程工具，能很好地控制硬件。相比其他程序，C程序更容易在系统间移植。C是编译型语言，C编译器和链接器是把C语言源代码转换成可执行代码的程序。

### 1.12 Review Questions 复习题

1. 对编程而言，可移植性意味着什么？

A perfectly portable program is one whose source code can, without modification, be compiled to a successful program on a variety of different computer systems.

源代码无需修改就能在不同计算机系统中成功编译。

2. 解释source code file(源代码文件)、object code file(目标代码文件)和executable file(可执行文件)有什么区别？

A source code file contains code as written in whatever language the programmer is using. An object code file contains machine language code; it need not be the code for a complete program. An executable file contains the complete code, in machine language, constituting an executable program.

源代码文件包含程序员使用的任何编程语言编写的代码。目标代码文件包含机器语言代码，不必是完整的程序代码。可执行文件包含组成可执行程序的完整机器语言代码。

3. 编程的7个主要步骤是什么？

1）Defining program objectives 定义程序目标；

2）Designing the program 设计程序；

3）Coding the program 编写程序；

4）Compiling the program 编译程序；

5）Running the program 运行程序；

6）Testing and debugging the program 测试和调试程序；

7）Maintaining and modifying the program 维护和修改程序。

4. 编译器的任务是什么？

A compiler translates source code (for example, code written in C) to the equivalent machine language code, also termed *object* code.

把源代码（如，用C语言编写的代码）翻译成等价的机器语言代码（也称作目标代码）。

5. 链接器的任务是什么？

The linker combines translated source code with library code and start-up code to produce an executable program.

把编译器翻译好的源代码以及库代码和启动代码组合起来，生成一个可执行程序。

### 1.13 编程练习

1. 你刚被MacroMuscle有限公司聘用。该公司准备进入欧洲市场，需要一个把英寸单位转换成厘米单位（1英寸=2.54厘米）的程序。该程序要提示用户输入英寸值。你的任务是定义程序目标和设计程序（编译过程的第1步和第2步）。



## 第2章 Introducing C / C语言概述

本章内容如下：

运算符：=

函数：main() 、printf()

编写一个简单的C程序

创建整型变量，为其赋值并在屏幕上显示其值

换行字符

如何在程序中写注释，创建包含多个函数的程序，发现程序的错误

关键字

C程序中有许多{cp->tort和*ptr++}这样古怪的符号。

### 2.1 简单的C程序示例

\n：回车换行。将光标从当前位置移到下一行的开头。

%d：将输出的数据转换为指定的格式输出。格式说明总是由“％”字符开始的，由“%”和格式字符组成，格式字符有d,o,x,u,c,s,f,e,g等。

如：

％d整型输出，％ld长整型输出，

％o以八进制数形式输出整数，

％x以十六进制数形式输出整数，或输出字符串的地址。

％u以十进制数输出unsigned型数据(无符号数)。注意：%d与%u有无符号的数值范围，也就是极限的值，不然数值打印出来会有误。

％c用来输出一个字符，

％s用来输出一个字符串，

％f用来输出实数，以小数形式输出，默认情况下保留小数点6位。

%.100f用来输出实数，保留小数点100位。

％e以指数形式输出实数，

％g根据大小自动选f格式或e格式，且不输出无意义的零。

程序的输出在屏幕上一闪而过：在程序中添加额外的代码（在程序的return语句前添加一行代码getchar()），让窗口等待用户按下一个键后才关闭。

### 2.2 The Example Explained 示例解释

组成C程序的几个部分：



#### 2.2.1 第1遍：快速概要：概述程序中每行代码的作用，帮助读者初步了解程序。

#include<stdio.h>  告诉C编译器把stdio.h（软件包的标准部分，提供键盘输入和屏幕输出的支持）中的内容包含在当前程序中。

int main(void)   标准ANSI C定义的main()函数。返回int整数，函数名（void表明不带任何参数）。如果使用ANSI C之前的编译器，请忽略void

{

  int num;   声明一个int类型的变量num

  num = 1;   赋值表达式语句，将值1赋给名为num的变量

  printf("My favorite number is %d because it is first.\n", num);    调用printf()函数（标准的C库函数，在屏幕上输出，光标停在同一行）

  return 0;   return语句，结束main函数

}

#### 2.2.2 第2遍：程序细节：详细分析代码的具体含义，帮助读者深入了解程序。

1. ##### #include指令和头文件

程序第一行#include<stdio.h>是一条C预处理指令（preprocessor directive），作用相当于把stdio.h文件中的所有内容都输入该行所在的位置。实际上是一种“拷贝-粘贴”的操作。

include文件提供了一种方便的途径共享许多程序共有的信息。

#include这行代码是一条C预处理器指令（preprocessor directive）。C编译器在编译前会对源代码做一些准备工作，即预处理（preprocessing）。

所有的C编译器软件包都提供stdio.h文件。该文件中包含了供编译器使用的输入和输出函数（如printf()）信息。该文件名的含义是标准输入/输出头文件。通常，在C程序顶部的信息集合被称为头文件（header）。

头文件包含了编译器创建最终可执行程序要用到的信息。例如，头文件中可以定义一些常量，或者指明函数名以及如何使用它们。但是，函数的实际代码在一个预编译代码的库文件中。头文件帮助编译器把你的程序正确地组合在一起。

ANSI/ISO C规定了C编译器必须提供哪些头文件。有些程序要包含stdio.h，而有些不用。特定C实现的文档中应该包含对C库函数的说明。这些说明确定了使用哪些函数需要包含哪些头文件。例如，要使用print ln()函数，必须包含stdio.h头文件。省略必要的头文件可能不会影响某一特定程序，但是最好不要这样做。本书每次用到库函数，都会用#include指令包含ANSI/ISO标准指定的头文件。

注意：为何不把输入和输出这些基本功能内置在语言中？因为并非所有的程序都会用到I/O（输入/输出）包。轻装上阵表现了C语言的哲学。正是这种经济使用资源的原则，使得C语言成为流行的嵌入式编程语言（例如，编写控制汽车自动燃油系统或蓝光播放机芯片的代码）。#include中的#符号表明。C预处理器在编译器接手之前处理这条指令。

2. ##### The main() Function 函数

int main(void);

程序清单2.1中表明该函数名为main。C程序要从main()函数开始执行，整数int是main()函数的返回类型（返回给操作系统）。

3. ##### Comments 注释

  Valid comment forms:
  /* This is a C comment. */
  Invalid comment forms:
  /* But this is invalid because there is no end marker.

C99 added a second style of comments, one popularized by C++ and Java.
// Here is a comment confined to one line.

4. ##### Braces, Bodies, and Blocks / 花括号、函数体和块

  {
  ...
  }
  Braces delimited the main() function. All C functions use braces to 
  mark the beginning as well as the end of the body of a function.
  Braces can also be used to gather statements within a function into a unit or block.
  If you are familiar with Pascal, ADA, Modula-2, or Algol, you will recognize the braces
  as being similar to begin and end in those languages.

5. ##### Declarations 声明

Data Types 数据类型
integers, characters, floating point

Name Choice 命名

Four Good Reasons to Declare Variables 声明变量的4个理由

6. ##### Assignment 赋值

7. ##### The printf() Function 函数

8. ##### Return Statement 语句

### 2.3 The Structure of a Simple Program 简单程序的结构

General rules about C programs. 
A simple standard C program should use the following format:
#include <stdio.h>      Function:
int main(void)          Header: Function name with arguments
{                       Body: 
    int q;              Declaration statement      
    q = 1;              Assignment statement
    printf("%d is neat. \n", q);   Function statement
    return 0;       
}

### 2.4 Tips on Making Your Programs Readable 提高程序可读性的技巧

Let the program logic much clearer and readable by following the conventions used in this chapter's example
int main(void)  /* converts 2 fathoms音寻（测水深的单位） to feet英寸 */——写注释
{
int feet, fathoms;  ——————pick meaningful names 使用有意义的变量名
            ——————————————use space 使用空行
fathoms=2;  
feet=6*fathoms; ——————————one statement per line 每行一条语句
printf("There are %d feet in %d fathoms!\n", feet, fathoms);
return 0;
}

### 2.5 Taking Another Step in Using C 进一步使用C

The first sample program was pretty easy, and the next example, shown in Listing 2.2, isn't much harder.

#### 2.5.1 Documentation 程序说明

#### 2.5.2 Multiple Declarations 多条声明

#### 2.5.3 Multiplication 乘法

#### 2.5.4 Printing Multiple Values 打印多个值

### 2.6 Multiple Function 多个函数: function prototyping(函数原型), 

function call(函数调用), function definition(函数定义)

Listing 程序清单 2.3     The two_func.c Program
//* two_func.c -- a program using two functions in one file */
#include <stdio.h>
void butler(void);  /* ANSI/ISO C function prototyping 函数原型 */
int main(void)  /* ANSI/ISO C function call 函数调用 */
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    
    return 0;
}
void butler(void)   /* ANSI/ISO C function definition 函数定义 */
{
    printf("You rang, sir?\n");
}

The butler() function appears three times in this program. 
The first appearances is in the prototype(函数原型), which informs the compiler about the functions to be used.
The second appearance is in main() in the form of a function call(函数调用).
Finally, the program presents the function definition(函数定义), which is the source code for the function itself.
Let's look at each of these three appearances in turn.
The C90 standard added prototypes(函数原型), and older compilers might not recognize them.(We'll tell you what to do 
when using such compilers in a moment.) A prototype declares to the compiler that you are using a particular function.
so it's called a function declaration. It also specifies properties of the function. For example, the first void in 
the prototype for the butler() function indicates that butler() does not have a return value.(In general, a function 
can return a value to the calling function for its use, but butler() doesn't.) The second void——the one in butler() 
is used correctly. Note that void is used to mean "empty," not "invalid".
Older C supported a more limited form of function declaration(函数声明) in which you just specified the return type 
but omitted describing the arguments:
void butler();
Older C code uses function declarations like the preceding one instead of function prototypes. 
Next, you invoke(调用) butler() in main() simply by giving its name, including parentheses(圆括号). 
Finally, the function butler() is defined in the same manner as main(), with a function header and the body enclosed in braces.
One point to note is that it is the location of the butler() call in main()——not the location of the butler() definition in the 
file——that determines when the butler() function is executed. 
The C standard recommends that you provide function prototypes(函数原型) for all functions you use.

### 2.7 Introducing Debugging 调试程序

Now that you can write a simple C program, you are in a position to make simple errors. Program errors often are called bugs, and 
finding and fixing the errors is called debugging. Listing 2.4 presents a program with some bugs. See how many you can spot.

Listing 程序清单 2.4 The nogood.c Program
/* nogood.c -- a program with errors */
#include <stdio.h>
int main(void)
(
    int n, int n2, int n3;
    
    /* this program has several errors
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)
    
    return 0;
)

#### 2.7.1 Syntax Errors 语法错误

Listing 2.4 contains several syntax errors. 
First, it uses parentheses圆括号() instead of braces大括弧{} to mark the body of the function
——it uses a valid C symbol in the wrong place.
Second, the declaration should have been 
int n, n2, n3;
or perhaps
int n;  
int n2;
int n3;
Third, the example omits the */ symbol pair necessary to complete a comment. 
Forth, it omits the mandatory法定的 semicolon分号; that should terminate终止 the printf() statement.



#### 2.7.2 Semantic Errors 语义错误

In C, you commit a semantic error when you follow the rules of C correctly but to an incorrect end.
The example has one such error:
// Listing 2.5 The stillbad.c Program
/* stillbad.c -- a program with its syntax errors fixed */
#include <stdio.h>
int main(void)
{
    int n, n2, n3;
    
/* this program has a semantic error */
    n = 5;
    n2 = n * n;
    // There is a semantic error: 
    // n3 is supposed认为 to represent the cube of n, but the code sets it up to be the fourth power of n.
    // The compiler does not detect semantic errors.
    // You can find these kinds of errors by comparing what a program does to what you expected it to do.
    n3 = n2 * n2;   
    printf("n = %d, n squared = %d, n cuded = %d\n", n, n2, n3);
    

​	return 0;

}

![Tracing a Program](/Users/swdiag/CLionProjects/Artificial-Intelligence-Guide/docs/images/CLanguage/Tracing a Program.png)

Figure 2.6 Tracing a program


#### 2.7.3 Program State 程序状态

The program state is simply the set of values of all the variables at a given point in program execution. It's a snapshot of the current state of computation. It can be monitoring by tracing the program step-by-step manually, keeping track of each variable.

Another approach to locating semantic problems is to sprinkle extra printf() statements throughout to monitor the values of selected variables at key points in the program.

A third method for examine the program states is to use a debugger.



### 2.8 Keywords and Reserved Identifiers 关键字和保留标识符

Keywords are the vocabulary of C. Because they are special to C, you can't use them as identifiers, for example, or as variable names. In the following list of C keywords, boldface粗体 indicates keywords added by the C90 standard, italics斜体 indicates new keywords added by the C99 standard, and boldface italics indicates keywords added by the C11 standard.

| **ISO C Keywords** |          |              |                    |
| ------------------ | -------- | ------------ | ------------------ |
| auto               | extern   | short        | while              |
| break              | float    | **signed**   | **_Alignas**       |
| char               | for      | sizeof       | **_Alignof**       |
| **const**          | if       | struct       | **_Complex**       |
| continue           | *inline* | switch       | **_Generic**       |
| default            | int      | typedef      | **_Imaginary**     |
| do                 | long     | union        | **_Noreturn**      |
| double             | register | unsigned     | **_Static_assert** |
| else               | restrict | void         | **#_Thread_local** |
| **enum**           | return   | **volatile** |                    |



### 2.9 Key Concepts 关键概念

Computer programming demands abstract, conceptual thinking combined with careful attention to detail. Compilers enforce the attention to detail.



### 2.10 本章小结 Summary

A C program consists of one or more C functions. Every C program must contain a function called *main()* because it is t he function called when the program starts up. 

The *printf()* function can be used to print phrases and the values of variables. 

The *syntax* of a language is the set of rules that governs the way in which valid statements in that languages are put together. 

Finally, *keywords* are the vocabulary of the C language. 



### 2.11 复习题 Review Questions

You'll find answers to the review questions in Appendix A, "Answers to the Review Questions."

1. What are the basic modules of a C program called?

   The basic modules of a C program are called functions(函数).

2. What is a syntax error? Give an example of one in English and one in C.

   A syntax error is a violation违反 of the rules governing治理 how sentences or programs are put together. Here's an example in English: "Me speak English good." Here's an example in C: 

   printf"Where are the parentheses?";.

3. What is a semantic error? Give an example of one in English and one in C.

   A semantic语义 error is one of meaning. Here's an example in English: "This sentence is excellent Czech." Here's a C example: 

   thrice_n = 3 + n;

4. Indiana Sloth has prepared the following program and brought it to you for approval. Please help him out.

   include studio.h

   int main{void}	/* this prints the number of weeks in a year/*

   (

   int s

   

   s := 56;

   print(There are s weeks in a year.);

   return 0;

   

   Line 1: Begin the line with a #; spell the file stdio.h; place the filename within angle brackets尖括号.

   Line 2: Use(), not{}; end the comment with */, not /*.

   

5. Assuming that each of the following examples is part of a complete program, what will ease one print?

   a. printf("Baa Baa Black Sheep.");

   ​	printf("Have you any wool?\n");

   b. printf("Begone!\n0 creature of lard!\n");

   c. printf("What?\nNo/nfish?\n");

   d. int num;

   ​	num = 2;

   ​	printf("%d + %d = %d", num, num, num + num);

   

6. Which of the following are C keywords? main. int, function, char, = 



7. How would you print the values of the variables words and lines so they appear in the following form:

   There were 3020 words and 350 lines.

   Here, 3020 and 350 represent the values of the two variables.

   

8. Consider the following program:

   #include <stdio.h>

   int main(void)

   {

   ​	int a, b;

   

   ​		a = 5;

   ​		b = 2;	/* line 7 */

   ​		b = a;	/* line 8 */

   ​		a = b;	/* line 9 */

   ​		printf("%d %d\n", b, a);

   ​		return 0;

   }

   What is the program state after line 7? Line 8? Line 9?

   

9. Consider the following program:

   #include <stdio.h>

   int main(void)

   {

   ​	int x, y;

   ​	

   ​	x = 10;

   ​	y = 5;	/* line 7 */

   ​	y = x + y;	/* line 8 */

   ​	x = x*y;	/* line 9 */

   ​	printf("%d %d\n", x, y);

   ​	return 0;

   }

   What is the program state after line 7? Line 8? Line 9?



### 2.12 Programming Exercises 编程练习

**Reading** about C isn't enough. You should try writing one or two simple **programs** to see whether writing a program goes as smoothly as it looks in this chapter. A few suggestions follow, but you should also try to think up some problems yourself. You'll find **answers** to selected programming exercises on the publisher's website.

1. Write a program that uses one printf() call to print your first name and last name on one line, uses a second printf() call to print your first and last names on two separate lines, and uses a pair of printf() calls to print your first and last names on one line. The output should look like this (but using your name):

   Gustav Mahlor	<- First print statement

   Gustav				  <- Second print statement

   Mahler				  <- Still the second print statement

   Gustav Mahler	 <- Third and fourth print statements

2. Write a program to print your name and address.

3. Write a program that converts your age in years to days and displays both values. At this point, don't worry about fractional years and leap years.

4. Write a program that produces the following output:

   For he's a jolly good fellow!

   For he's a jolly good fellow!

   For he's a jolly good fellow!

   Which nobody can deny!

   Have the program use two user-defined functions in addition to main(): one named jolly() that prints the “jolly good” message once, and one named deny() that prints the final line once.

5. Write a program that produces the following output:

   Brazil, Russia, 

   India, China India, China,

   Brazil, Russia

   Have the program use two user-defined functions in addition to main(): one named br() that prints “Brazil, Russia” once, and one named ic() that prints “India, China” once. Let main() take care of any additional printing tasks.

6. Write a program that creates an integer variable called toes. Have the program set toes to 10. Also have the program calculate what twice toes is and what toes squared is. The program should print all three values, identifying them.

7. Many studies suggest that smiling has benefits. Write a program that produces the following output:

   Smile!Smile!Smile! 

   Smile!Smile! 

   Smile!

   Have the program define a function that displays the string Smile! once, and have the program use the function as often as needed.

8. In C, one function can call another. Write a program that calls a function named one_ three(). This function should display the word one on one line, call a second function named two(), and then display the word three on one line. The function two() should display the word two on one line. The main() function should display the phrase starting now: before calling one_three() and display done! after calling it. Thus, the output should look like the following:

   starting now: 

   one

   two

   three

   done!



## 第3章 Data and C 数据和C

### 3.1 A Sample Program 示例程序

Listing 3.1	The platinum.c Program

/* platinum.c	-- your weight in platinum */

#include <stdio.h>

int main(void)

{

​	float weight;	/* user weight	*/

​	float value;		/* platinum equivalent	*/

​	

​	printf("Are you worth your weight in platinum?\n");



​	scanf("", &weig);

}

### 	What's New in This Program?

​	

### 3.2 Data Variables and Constants 变量与常量数据

### 3.3 Data: Data-Type Keywords 数据：数据类型关键字

#### 3.3.1 Integer Versus Floating-Point Types 整数和浮点数

#### 3.3.2 The Integer 整数

#### 3.3.3 The Float-Point Number 浮点数

### 3.4 Basic C Data Types C语言基本数据类型

#### 3.4.1 The int Type INT类型

##### Declaring an int Variable

##### Initializing a Variable

##### Type int Constants

##### Printing int Values

##### Octal and Hexadecimal 八进制和十六进制

##### Displaying Octal and Hexadecimal

#### 3.4.2 Other Integer Types 其他整数类型

##### long Constants and long long Constants

##### Printing short, long, long long, and unsigned Types

#### 3.4.3 Using Characters: Type char 使用字符：char类型

##### Declaring Type char Variables

##### Character Constants and Initialization

##### Nonprinting Characters

##### Printing Characters

#### 3.4.4 _Bool类型

#### 3.4.5 可移植类型：std int.h和int types.h

#### 3.4.6 float、double和long double

#### 3.4.7 复数和虚数类型

#### 3.4.8 其他类型

#### 3.4.9 类型大小

### 3.5 使用数据类型

### 3.6 参数和陷阱

### 3.7 转义序列示例

#### 3.7.1 程序运行情况

#### 3.7.2 刷新输出

### 3.8 关键概念

### 3.9 本章小结

### 3.10 复习题

### 3.11 编程练习



## 第4章 字符串和格式化输入/输出

4.1 前导程序

4.2 字符串简介

4.2.1 char类型数组和null字符

4.2.2 使用字符串

4.2.3 strlen()函数

4.3 常量和C预处理器

4.3.1 const限定符

4.3.2 明示常量

4.4 printf()和scanf()

4.4.1 print()函数

4.4.2 使用printf()

4.4.3 printf()的转换说明修饰符

4.4.4 转换说明的意义

4.4.5 使用scanf()

4.4.6 printf()和scanf()的*修饰符

4.4.7 printf()的用法提示

4.5 关键概念

4.6 本章小结

4.7 复习题

4.8 编程练习



第5章 运算符、表达式和语句

5.1 循环简介

5.2 基本运算符

5.2.1 赋值运算符：=

5.2.2 加法运算符：+

5.2.3 减法运算符：-

5.2.4 符号运算符：-和+

5.2.5 乘法运算符：*

5.2.6 除法运算符：/

5.2.7 运算符优先级

5.2.8 优先级和求值顺序

5.3 其他运算符

5.3.1 sizeof运算符和size_t类型

5.3.2 求模运算符：%

5.3.3 递增运算符：++

5.3.4 递减运算符：--

5.3.5 优先级

5.3.6 不要自作聪明

5.4 表达式和语句

5.4.1 表达式

5.4.2 语句

5.4.3 复合语句（块）

5.5 类型转换

5.6 带参数的函数

5.7 示例程序

5.8 关键概念

5.9 本章小结

5.10 复习题

5.11 编程练习



第6章 C控制语句：循环

6.1 再探while循环

6.1.1 程序注释

6.1.2 C风格读取循环

6.2 while语句

6.2.1 终止while循环

6.2.2 何时终止循环

6.2.3 while：入口条件循环

6.2.4 语法要点

6.3 用关系运算符和表达式比较大小

6.3.1 什么是真

6.3.2 其他真值

6.3.3 真值的问题

6.3.4 新的_Bool类型

6.3.5 优先级和关系运算符

6.4 不确定循环和计数循环

6.5 for循环

6.6 其他赋值运算符：+=、-=、*=、/=、%=

6.7 逗号运算符

6.8 出口条件循环：do while

6.9 如何选择循环

6.10 嵌套循环

6.10.1 程序分析

6.10.2 嵌套变式

6.11 数组简介

6.12 使用函数返回值的循环示例

6.12.1 程序分析

6.12.2 使用带返回值的函数

6.13 关键概念

6.14 本章小结

6.15 复习题

6.16 编程练习



第7章 C控制语句：分支和跳转

7.1 if语句

7.2 if else语句

7.2.1 另一个示例：介绍getchar()和putchar()

7.2.2 c type.h系列的字符函数

7.2.3 多重选择else if



7.2.4 else与if配对

7.2.5 多层嵌套的if语句

7.3 逻辑运算符

7.3.1 备选拼写：iso646.h头文件

7.3.2 优先级

7.3.3 求职顺序

7.3.4 范围

7.4 一个统计单词的程序

7.5 条件运算符：?:

7.6 循环辅助：continue和break

7.6.1 nmncontinue语句

7.6.2 break语句

7.7 多重选择：switch和break

7.7.1 switch语句

7.7.2 只读每行的首字符

7.7.3 多重标签

7.7.4 switch和if else

7.8 goto语句

7.9 关键概念

7.10 本章小结

7.11 复习题

7.12 编程练习



第8章 字符输入/输出和输入验证

8.1 单字符I/O：getchar()和putchar()

8.2 缓冲区

8.3 结束键盘输入

8.3.1 文件、流和键盘输入

8.3.2 文件结尾

8.4 重定向和文件

8.5 创建更友好的用户界面

8.5.1 使用缓冲出入

8.5.2 混合数值和字符输入

8.6 输入验证

8.6.1 分析程序

8.6.2 输入流和数字

8.7 菜单浏览

8.7.1 任务

8.7.2 使执行更顺利

8.7.3 混合字符和数值输入

8.8 关键概念

8.9 本章小结

8.10 复习题

8.11 编程练习



第9章 函数

9.1 复习函数

9.1.1 创建并使用简单函数

9.1.2 分析程序

9.1.3 函数参数

9.1.4 定义带形式参数的函数

9.1.5 声明带形式参数函数的原型

9.1.6 调用带实际参数的函数

9.1.7 黑盒视角

9.1.8 使用return从函数中返回值

9.1.9 函数类型

9.2 ANSI C函数原型

9.2.1 问题所在

9.2.2 ANSI的解决方案

9.2.3 无参数和未指定参数

9.2.4 函数原型的优点

9.3 递归

9.3.1 演示递归

9.3.2 递归的基本原理

9.3.3 尾递归

9.3.4 递归和倒序计算

9.3.5 递归的优缺点

9.4 编译多源代码文件的程序

9.4.1 UNIX

9.4.2 Linux

9.4.3 DOS命令行编译器

9.4.4 Windows和苹果的IDE编译器

9.4.5 使用头文件

9.5 查找地址：&运算符

9.6 更改主调函数中的变量

9.7 指针简介

9.7.1 间接运算符：*

9.7.2 声明指针

9.7.3 使用指针在函数见通信

9.8 关键概念

9.9 本章小结

9.10 复习题

9.11 编程练习



第10章 数组和指针

10.1 数组

10.1.1 初始化数组

10.1.2 指定初始化器（C99）

10.1.3 给数组元素赋值

10.2 多维数组

10.2.1 初始化二维数组

10.2.2 其他多维数组

10.3 指针和数组

10.4 函数、数组和指针

10.4.1 使用指针形参

10.4.2 指针表示法和数组表示法

10.5 指针操作

10.6 保护数组中的数据

10.6.1 对形式参数使用const

10.6.2 const的其他内容

10.7 指针和多维数组

10.7.1 指向多维数组的指针

10.7.2 指针的兼容性

10.7.3 函数和多维数组

10.8 变长数组（VLA）

10.9 复合字面量

10.10 关键概念

10.11 本章小结

10.12 复习题

10.13 编程练习



第11章 字符串和字符串函数

11.1 表示字符串和字符串I/O

11.1.1 在程序中定义字符串

11.1.2 指针和字符串

11.2 字符串输入

11.2.1 分配空间

11.2.2 不幸的gets()函数

11.2.3 gets()的替代品

11.2.4 scanf()函数

11.3 字符串输出

11.3.1 puts()函数

11.3.2 fputs()函数

11.3.3 printf()函数

11.4 自定义输入/输出函数

11.5 字符串函数

11.5.1 strlen()函数

11.5.2 strcat()函数

11.5.3 strncat()函数

11.5.4 strcmp()函数

11.5.5 strcpy()和strncpy()函数

11.5.6 sprintf()函数

11.5.7 其他字符串函数

11.6 字符串示例：字符串排序

11.6.1 排序指针而非字符串

11.6.2 选择排序算法

11.7 ctype.h字符函数和字符串

11.8 命令行参数

11.8.1 集成环境中的命令行参数

11.8.2 Macintosh中的命令行参数

11.9 把字符串转换为数字

11.10 关键概念

11.11 本章小结

11.12 复习题

11.13 编程练习



第12章 存储类别、链接和内存管理

12.1 存储类别

12.1.1 作用域

12.1.2 链接

12.1.3 存储期

12.1.4 自动变量

12.1.5 寄存器变量

12.1.6 块作用域的静态变量

12.1.7 外部链接的静态变量

12.1.8 内部链接的静态变量

12.1.9 多文件

12.1.10 存储类别说明符

12.1.11 存储类别和函数

12.1.12 存储类别的选择

12.2 随机数函数和静态变量

12.3 掷骰子

12.4 分配内存：malloc()和free()

12.4.1 free()的重要性

12.4.2 calloc()函数

12.4.3 动态内存分配和变长数组

12.4.4 存储类别和动态内存分配

12.5 ANSI C类型限定符

12.5.1 const类型限定符

12.5.2 volatile类型限定符

12.5.3 restrict类型限定符

12.5.4 _Atomic类型限定符（C11）

12.5.5 旧关键字的新位置

12.6 关键概念

12.7 本章小结

12.8 复习题

12.9 编程练习



第13章 文件输入/输出

13.1 与文件进行通信

13.1.1 文件是什么

13.1.2 文本模式和二进制模式

13.1.3 I/O的级别

13.1.4 标准文件

13.2 标准I/O

13.2.1 检查命令行参数

13.2.2 fopen()函数

13.2.3 getc()和putc()函数

13.2.4 文件结尾

13.2.5 fclose()函数

13.2.6 指向标准文件的指针

13.3 一个简单的文件压缩程序

13.4 文件I/O：fprintf()、fscanf()、fgets()和fputs()

13.4.1 fprintf()和fscanf()函数

13.4.2 fgets()和fputs()函数

13.5 随机访问：fseek()和ftell()

13.5.1 fseek()和ftell()的工作原理

13.5.2 二进制模式和文本模式

13.5.3 可移植性

13.5.4 fgetpos()和fsetpos()函数

13.6 标准I/O的机理

13.7 其他标准I/O函数

13.7.1 int ungetc(int c, FILE *fp)函数

13.7.2 int fflush()函数

13.7.3 int setybuf()函数

13.7.4 二进制I/O：fread()和fwrite()

13.7.5 size_t_fwrite()函数

13.7.6 size_t_fread()函数

13.7.7 int feof(FILE *fp)和int ferror(FILE *fp)函数

13.7.8 一个程序示例

13.7.9 用二进制I/O进行随机访问

13.8 关键概念

13.9 本章小结

13.10 复习题

13.11 编程练习



第14章 结构和其他数据形式

14.1 示例问题：创建图书目录

14.2 建立结构声明

14.3 定义结构变量

14.3.1 初始化结构

14.3.2 访问结构成员

14.3.3 结构的初始化器

14.4 结构数组

14.4.1 声明结构数组

14.4.2 标识结构数组的成员

14.4.3 程序讨论

14.5 嵌套结构

14.6 指向结构的指针

14.6.1 声明和初始化结构指针

14.6.2 用指针访问成员

14.7 向函数传递结构的信息

14.7.1 传递结构成员

14.7.2 传递结构的地址

14.7.3 传递结构

14.7.4 其他结构特性

14.7.5 结构和结构指针的选择

14.7.6 结构中的字符数组和字符指针

14.7.7 结构、指针和malloc()

14.7.8 复合字面量和结构（C99）

14.7.9 伸缩型数组成员（C99）

14.7.10 匿名结构（C11）

14.7.11 使用结构数组的函数

14.8 把结构内容保存到文件中

14.8.1 保存结构的程序示例

14.8.2 程序要点

14.9 链式结构

14.10 联合简介

14.10.1 使用联合

14.10.2 匿名联合（C11）

14.11 枚举类型

14.11.1 enum常量

14.11.2 默认值

14.11.3 赋值

14.11.4 enum的用法

14.11.5 共享名称空间

14.12 typedef简介

14.13 其他复杂的声明

14.14 函数和指针

14.15 关键概念

14.16 本章小结

14.17 复习题

14.18 编程练习



第15章 位操作

15.1 二进制数、位和字节

15.1.1 二进制整数

15.1.2 有符号整数

15.1.3 二进制浮点数

15.2 其他进制数

15.2.1 八进制

15.2.2 十六进制

15.3 C按位运算符

15.3.1 按位逻辑运算符

15.3.2 用法：掩码

15.3.3 用法：打开位（设置位）

15.3.4 用法：关闭位（清空位）

15.3.5 用法：切换位

15.3.6 用法：检查位的值

15.3.7 移位运算符

15.3.8 编程示例

15.3.9 另一个例子

15.4 位字段

15.4.1 位字段示例

15.4.2 位字段和按位运算符

15.5 对齐特性（C11）

15.6 关键概念

15.7 本章小结

15.8 复习题

15.9 编程练习



第16章 C预处理器和C库



