# C++
C++ 通常用于编写设备驱动程序和其他要求实时性的直接操作硬件的软件。
苹果电脑和Windows PC机的系统的主要用户接口是使用C++编写的。

## C++ 编译器
1、GNU的gcc、g++编译器是最常用的免费的编译器。  
使用gcc编译链接C++程序要指定对应库的名字。
gcc helloworld.cpp -lstdc++ -o main
生成一个main可执行文件，再运行程序。
./main.out
g++将gcc的默认语言设为C++，链接时它自动使用C++标准库而不用C标准库。
g++ helloworld.cpp
./a.out（若命令行中未指定可执行程序的文件名，编译器采用默认的 a.out）
针对多个C++代码文件，如demo1.cpp、demo2.cpp，编译命令如下：
g++ demo1.cpp demo2.cpp -o demo
./demo.out
g++常用命令选项：https://www.runoob.com/cplusplus/cpp-environment-setup.html

2、Visual Studio（Graphical Interface）

3、另外还有makefile

## C++基本语法
C++程序可以定义为对象的集合，这些对象通过调用彼此的方法进行交互。现在让我们简要地看一下什么是类、对象、方法、即时变量。
**类**是描述对象行为/状态的模板/蓝图。
**对象**是类的实例，具有状态和行为。
**方法**是一种行为，一个类可以包含多个方法，可以在方法中写入逻辑、操作数据以及执行所有的动作。
**即时变量**：每个对象都有其独特的即时变量。对象的状态是由这些即时变量的值创建的。

写一个Hello World程序。
‘’‘
#include <iostream>	//包含头文件<iostream>
using namespace std;	//告诉编译器使用std命名空间

int main(){
	cout << "Hello World" << endl;
	return 0;
}
’‘’

## C++ 标准库（important）
标准的 C++ 由三个重要组成部分组成：
1、核心语法，提供了所有构件块，包括变量、数据类型和常量等。  
2、标准库，提供了大量的函数，用于操作文件、字符串等。  
3、标准模板库（STL），提供了大量的方法，用于操作数据结构等。（important）

## C++ 学习方法（important）
学习C++，关键是要理解概念（important），而不应过于深究语言的技术细节。

年龄考证稀缺，自学能力
名校高薪专业（1计算机2软件3土建）最有前途的方向名师博士，双赢，尊重
（坑爹专业：体育、心理学）
名企高薪工作

	
## C++数据类型
### 七种基本的内置类型
其中 wchar_t 的由来： 
typedef short int wchar_t;
所以 wchar_t 实际上的空间是和 short int 一样。
一些基本类型可以使用一个或多个类型修饰符进行修饰：
signed、unsigned、short、long
下表显示了各种变量类型在内存中存储值时需要占用的内存，以及该类型的变量所能存储的最大值和最小值。

	
### typedef
### 
	
	
	
	
	

## 面向对象程序设计
C++ 完全支持面向对象的程序设计，包括面向对象开发的四大特性：
1、封装；2、抽象；3、继承；4、多态
  

  
 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
# Reference:  
https://www.runoob.com/cplusplus/cpp-tutorial.html



