# Artificial-Intelligence-Guide
This is an Artificial Intelligence learning and Interview guide. 
I help this guide can help you to be a Machine Engineer in Tencent. 

## 1. Program Language(important) 
### 1.1 C/C++ or Java
1. [C Language](docs/Languages/CLanguage.md)
2. [C++ Language](docs/Languages/C++Language.md)
STL(The Standard Template Library, 标准模板库) is a set of C++ template classes(模板类) to provide common programming data structures, algorithm and functions such as vector, list链表, queue队列 and stack栈. 

C++ STL的三个核心组件都带有丰富的预定义函数，帮助我们通过简单的方式处理复杂的任务：

| 组件                |                                       描述                                            |
| ------------------ | ------------------------------------------------------------------------------------- |
| 容器(Containers)    | 容器是用来管理某一类对象的集合。C++ 提供了各种不同类型的容器，比如 deque、list、vector、没安排等。 |
| 算法(Algorithm)     | 算法作用于容器。它们提供了各种不同类型的容器，比如 deque、list、vector、map等。                 |
| 迭代器(iterators)   | 迭代器用于遍历对象集合的元素。这些集合可能是容器，也可能是容器的子集。                            |

下面的程序演示了vector容器（一个C++标准的模板），它与数组十分相似，唯一不同的是，向量在需要拓展大小的时候，会自动处理它自己的存储需求：
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 创建一个向量存储 int
    vector<int> vec;
    int i;
    
    // 显示 vec 的原始大小
    cout << "vector size = " << vec.size() << endl;
    
    // 推入 5 个值到向量中
    for(i = 0; i < 5; i++){
        vec.push_back(i);
    }
                     
    // 显示 vec 拓展后的大小
    cout << "extended vector size = " << vec.size() << endl;
                                                           
    // 访问向量中的 5 个值
    for(i = 0; i < 5; i++){
        cout << "value of vec [" << i << vec[i] << endl;
    }
    
    // 使用迭代器 iterator 访问值
    vector<int>::iterator v = vec.begin();
    while( v != vec.end()){
        cout << "value of v = " << *v << endl;
        v++;
    }
    
    return 0;
}

#### object-oriented program
SOLID is a mnemonic acronym for 5 design principles of object-oriented programming intended to make software designs more understandable, flexible and maintainable. These principles were first introduced in Robert C.Martin's 2000 paper Design Principles and Design Patterns.
1. The Single-responsibility principle: "There should never be more than one reason for a class to change." In other words, every class should have only one responsibility.
2. The Open-closed principle: "Software entities ... should be open for extension, but closed for modification"
3. The Liskov substitution principle: "Functions that use pointers or references to base classes"
4. 
5. 

### 1.2 Python 

### Others:
### 1.3 SQL
#### 关联规则：
假设I={I1, I2, ..., Im}是项的集合。给定一个交易数据库D，其中每个事务(Transaction)t是I的非空子集，即每一个交易都与一个唯一的标识符TID(Transaction ID)对应。
关联规则在D中的支持度(support)是D中事务同时包含X、Y的百分比，即概率；置信度(confidence)是D中事务已经包含X的情况下，包含Y的百分比，即条件概率。如果满足
最小支持度阈值和最小置信度阈值，则认为关联规则是有趣的。这些阈值是根据挖掘需要人为设定。

​		基本概念表1：关联规则的简单例子

例子

| TID  | 网球拍 | 网球 | 运动鞋 | 羽毛球 |
| ---- | ------ | ---- | ------ | ------ |
| 1    | 1      | 1    | 1      | 0      |
| 2    | 1      | 1    | 0      | 0      |
| 3    | 1      | 0    | 0      | 0      |
| 4    | 1      | 0    | 1      | 0      |
| 5    | 0      | 1    | 1      | 1      |
| 6    | 1      | 1    | 0      | 0      |

​		用一个简单的例子说明。表1是顾客购买记录的数据库D，包含6个事务。项集I={网球拍，网球，运动鞋，羽毛球}

### 1.4 Swift, OC, MacOS and iOS
https://www.jianshu.com/p/5765e9dba738
https://pymlovelyq.github.io/posts/66dfe877/
https://segmentfault.com/q/1010000000600234
https://zhuanlan.zhihu.com/p/31438009
https://zhuanlan.zhihu.com/p/53217607




Math, Physical in AI

Data Structure & Basic Algorithm

Data Analysis

## 2. Machine Learning Algorithm(important)

## 机器学习算法（重要）

10 common machine learning algorithm: 

1. 
2. 


### 2.1 Supervised Learning 有监督学习
监督学习提供对错指示、告知最终答案。要实现的目标是"对于输入数据X能预测变量Y"，适用于知道输入数据结果的情况。
Supervised learning generally includes two types: classification and regression. 监督学习解决的是两类问题：“分类”和“回归”问题。
The target variable of the classification problem is only valued in a limited target set(nominal type). For example, the simplest handwritten digit recognition problem, the target result is in the set{0,1,2,3,4,5,6,7,8,9}. The target variable of the regression problem is numerical, that is, you can take a value from an infinite set of values, such as predicting the price of a Lego toy set, it may be any number you image.

Supervised learning is to have an input variable (independent variable) and an output variable (dependent variable), and use a certain algorithm to learn the mapping function from input to output. The goal is to get a sufficiently good approximate mapping function that can be used to predict the output variable when a new variable is input. Because the learning process of the algorithm from the data set can be seen as a teacher supervising learning, it is called supervised learning. Supervised learning can be further divided into classification (output category labels) and regression (output continuous values) problems. 监督式学习是拥有一个输入变量（自变量）和一个输出变量（因变量），使用某种算法去学习从输入到输出之间的映射函数。目标是得到足够好的近似映射函数，当输入新的变量时可以以此预测输出变量。因为算法从数据集学习的过程可以被看作一名教师在监督学习，所以被称为监督式学习。监督式学习可以进一步分为分类（输出类别标签）和回归（输出连续值）问题。

#### Several commonly used algorithms in supervised learning:  

1. K-nearest neighbor algorithm
2. Decision tree algorithm
3. Naive Bayes algorithm

### 2.2 Unsupervised Learning 无监督学习
输入数据无标签则为无监督学习。

The process of self-learning by students without a teacher. There is no data annotation, only the data itself. The question to be answered is "what can be found from the data X", and the main problem to be solved is "clustering". 在没有老师的情况下，学生自学的过程。没有任何的数据标注，只有数据本身。要回答的问题是"从数据X中能发现什么"，解决的主要是“聚类（Clustering）”问题。

Unsupervised learning refers to only input variables and no related output variables. The goal is to model the underlying structure and distribution in the data in order to learn more about the data. Compared with supervised learning, unsupervised learning has no exact answers and the learning process is not supervised. The algorithm runs independently to discover and express the structure in the data. Unsupervised learning can be further divided into clustering problems (discovering internal groupings in the data) and association problems (the association and rules between the various parts of the data). 非监督式学习指的是只有输入变量，没有相关的输出变量。目标是对数据中潜在的结构和分布建模，以便对数据做进一步的学习。相比于监督式学习，非监督式没有确切的答案和学习过程也没有监督，算法独自运行发现和表达数据中的结构。非监督式学习进一步可以分为聚类问题（在数据中发现内在的分组）和关联问题（数据的各部分之间的关联和规则）。
无监督学习是指只有输入变量而没有输出变量。

#### Several commonly used algorithms in unsupervised learning:

1. K-means clustering algorithm
2. Spectral clustering algorithm
3. Principal component analysis(PCA)

#### Example: Facebook TransCoder

A transcompiler反编译器, also known as source-to-source translator, is a system that converts source code from a high-level programming language (such as C++ or Python) to another. Transcompilers are primarily used for interoperability, and to port codebases written in an obsolete or deprecated language (e.g. COBOL, Python 2) to a modern one. They typically rely on handcrafted rewrite rules, applied to the source code abstract syntax tree. Unfortunately, the resulting translations often lack readability, fail to respect the target language conventions, and require manual modifications in order to work properly. The overall translation process is timeconsuming and requires expertise in both the source and target languages, making code-translation projects expensive. Although neural models significantly outperform their rule-based counterparts in the context of natural language translation, their applications to transcompilation have been limited due to the scarcity of parallel data in this domain. In this paper, we propose to leverage recent approaches in unsupervised machine translation to train a fully unsupervised neural transcompiler. We train our model on source code from open source GitHub projects, and show that it can translate functions between C++, Java, and Python with high accuracy. Our method relies exclusively on monolingual source code, requires no expertise in the source or target languages, and can easily be generalized to other programming languages. We also build and release a test set composed of 852 parallel functions, along with unit tests to check the correctness of translations. We show that our model outperforms rule-based commercial baselines by a significant margin.



#### Spark
#### XGboost



### 2.3 Semi-Supervised Learning 半监督学习 

Semi-supervised learning(SSL) is a key issue in the field of pattern recognition and machine learning. It is a learning method that combines supervised learning and unsupervised learning. Semi-supervised learning uses a large amount of unlabeled data and simultaneously uses labeled data for pattern recognition. 半监督学习是模式识别和机器学习领域研究的重点问题，是监督学习与无监督学习相结合的一种学习方法。 半监督学习使用大量的未标记数据，以及同时使用标记数据，来进行模式识别工作。

Semi-supervised learning is a learning method that combines supervised and unsupervised learning. Have most of the input data (independent variables) and a small part of labeled data (dependent variables). You can use unsupervised learning to discover and learn the structure of input variables; use supervised learning technology to make label predictions on unlabeled data, and pass these data to the supervised learning algorithm as training data, and then use this model to make predictions on the new data. 半监督式学习是一种监督式学习与非监督式学习相结合的一种学习方法。拥有大部分的输入数据（自变量）和少部分的有标签数据（因变量）。可以使用非监督式学习发现和学习输入变量的结构；使用监督式学习技术对无标签的数据进行标签的预测，并将这些数据传递给监督式学习算法作为训练数据，然后使用这个模型在新的数据上进行预测。



### 2.4 Deep Learning 深度学习
#### Activation Function 激活函数

在人工神经网络的神经元上运行的函数，负责将神经元的输入映射到输出端。

| Sigmoid函数 | Tanh函数 | ReLu函数 | Leaky Re Lu函数 |      |
| ----------- | -------- | -------- | --------------- | ---- |
|             |          |          |                 |      |

#### Tensorflow
    
#### Caffe
    
#### Torch & Lua Program
    

### 2.5 Reinforcement Learning 强化学习

Reinforcement learning can train the program to make a certain decision. The program tries all possible actions in a given situation, records the results of different actions and tries to find the best attempt to make a decision. It is a product of the intersection of multiple disciplines and multiple fields. Its essence is to solve the decision making problem, that is, automatic decision making and continuous decision making. It mainly contains four elements, agent, environment state, action, and reward. The goal of reinforcement learning is to get the most accumulated reward. 强化学习可以训练程序作出某一决定。程序在某一情况下尝试所有可能的行动，记录不同行动的结果并试着找出最好的一次尝试来做决定。是多学科多领域交叉的一个产物，它的本质是解决 decision making 问题，即自动进行决策，并且可以做连续决策。它主要包含四个元素，agent，环境状态，行动，奖励, 强化学习的目标就是获得最多的累计奖励。


### 2.6 Data Mining 数据挖掘

### 2.7 Big Data 大数据
#### 1 Java基础语法
##### 1-1 环境搭建+入门
##### 1-2 数据类型及转换
##### 1-3 运算符
##### 1-4 条件控制语句
##### 1-5 循环
##### 1-6 随机数+开发工具
##### 1-7 数组
##### 1-8 方法与debug
##### 1-9 进制
##### 1-10 二维数组
#### 2 Java面向对象基础
#### 3 Java API
##### 3-1 String类
##### 3-2 StringBuilder
#### 4 Java集合基础
##### 4-1 集合-ArrayList
##### 4-2 学生管理系统
#### 5 Java面向对象进阶
#### 6 Java常用API&异常
#### 7 Java集合
#### 8 Java IO流
#### 9 Java多线程
#### 10 Java网络编程
#### 11 Java基础加强
#### 12 Linux
#### 13 MySQL
#### 14 JDBC
#### 15 Maven基础
#### Linux 开发环境
#### Linux 集群环境
#### Hadoop(important)
    
#### ZooKeeper

### 2.8 Pattern Recognition 模式识别

### 2.9 Algorithm Optimization 算法优化



## Self-driving——The biggest application scenario of artificial intelligence
This is my study notes of Self-Driving Car Engineer Nanodegree Program on Udacity.
### 1. Computer Vision

#### Project: Find Lane Lines

Identify lane lines on the road, first in an image, and later in a video stream.

#### steps to find lane lines

Useful features for identifying lane lines: color, shape,  orientation, position. 

对识别车道线有用的特征：颜色、形状、方向、位置。

We'll start with color detection, then region masking, then finding edges, and finally using a Hough Transform to identify line segments.

我们将从颜色检测（color detection）开始，然后是区域掩膜（masking）和边缘检测（finding edges），最后使用霍夫变换（Hough Transform）来识别线段。

#### Color Selection

![color selection](/Users/swdiag/CLionProjects/images/README/color selection.png)

Values from 0 (dark) to 255 (bright) in Red, Green, and Blue color channels.

#### Region Masking 区域掩膜

Add criteria标准 in code to **only focus on a specific region of an image**, since lane lines will always appear in the same general part of the image.

#### Canny Edge Detection

Find edges by looking for strong gradient, i.e. very different values between adjacent adjacements pixels.

Edge = cv2.Cammy(gray, low_threhold), high_threshold)

### 2. Deep Learning 

### 3. Sensor Fusion

### 4. Localization

### 5. Path Planning

### 6. Control 

### 7. System Integration



## Artificial Intelligence Theory's new directions
1. 神经拓扑结构
2. AI+MPC（多方计算）的隐私保护学习
3. 可控的SuperAI

### 


## Computer Vision
<https://github.com/OctopusNO1/Computer-Vision-Guide>



## NLP
## 语音识别



## Computer Graphics 图形学

### Reading notes of *Unity Shader 入门精要*

#### Chapter Four

##### 4.1 Background: Farm Game

##### 4.2 Cartesian Coordinate System

##### 4.3 Point and Vector

##### 4.4 Matrix

##### 4.5 Matrix's Geometric Meaning: Transform

##### 4.6 Coordinate space

###### 4.6.4 Model Space

###### 4.6.5 World Space

###### 4.6.6 View Space

##### 4.7 Normal Vector



### Reading notes of *Learn OpenGL - Graphics Programming*

《学习OpenGL - 图形编程》读书笔记

Learn modern OpenGL graphics programming in a step-by-step fashion.

#### Contents	目录

######  1. Introduction	介绍

**1.1 Prerequisites 先修**



##### 	Part I	Getting started	开始

2. ###### OpenGL

3. ###### Creating a window

4. ###### Hello Window

5. ###### Hello Triangle 三角形

6. ###### Shaders 着色器

7. ###### Textures 纹理

8. ###### Transformations 转变

9. ###### Coordinate Systems 坐标系统

10. ###### Camera 摄影机

11. ###### Review 回顾

    ##### Part II	Lighting	照明设备

12. ###### Colors

13. ###### Basic Lighting 基础光照

14. ###### Materials 材料

15. ###### Lighting Maps 光线地图

16. ###### Light Casters 光线小脚轮

17. ###### Multiple Lights 

18. ###### Review 检查

    ##### Part III	Model Loading	模型载入

19. ###### Assimp 假定

20. ###### Mesh 网

21. ###### Model 

    ##### Part IV	Advanced OpenGL

22. ###### Depth Testing 深度测试

23. ###### Stencil Testing 模板测试

24. ###### Blending 混合

25. ###### Face culling 面部剔除

26. ###### Framebuffers 帧缓冲区

27. ###### Cubemaps 立方体贴图

28. ###### Advanced Data 

29. ###### Advanced GLSL

30. ###### Geometry Shaders 几何着色器

31. ###### Instancing 例子

32. ###### Anti Aliasing 反化名

    ##### Part V Advanced Lighting 

33. ###### Advanced Lighting

34. ###### Gamma Correction 矫正

35. ###### Shadow Mapping 阴影映射

36. ###### Point Shadows 点映射

37. ###### Normal Mapping 

38. ###### Parallax Mapping 视差映射

39. ###### HDR

40. ###### Bloom

41. ###### Deferred Shading

42. ###### SSAO

    ##### Part VI	PBR

43. ###### Theory

44. ###### Lighting

45. ###### Diffuse irradiance 漫射辐照度

46. ###### Specular iBL 镜面反射

    ##### Part VII	In Practice 实践

47. ###### Debugging 调试

48. ###### Text Rendering 文字渲染

    ##### Part VIII	2D Game

49. ###### Breakout 爆发

50. ###### Setting up 配置

51. ###### Rendering Sprites 渲染精灵

52. ###### Levels

53. ###### Ball 

54. ###### Collision detection 碰撞检测

55. ###### Collision resolution 碰撞解析

56. ###### Particles 粒子

57. ###### Postprocessing 后期处理

58. ###### Powerups 通电

59. ###### Audio 声音

60. ###### Render text 渲染文本

61. ###### Final thoughts 最后的想法

    ##### Index



### Reading notes of *Learn OpenGL - Graphics Programming*



### Valuable problems in computer graphics and game industry





SLAM：
Planning：
Control：


Others：
Quantum Computing+ML
#### 
ML DL-CV-Computer Graphics
Smart Transportation and Self-Driving Car
AI Robot
Intelligent Manufacturing
Data Science
Other Algorithms in AI
AI and Cyber Security
AI and Game
Non-technical
AI and Product

AI and 建筑学建筑设计，BIM，CIM智慧城市（城市操作系统、城市管理系统平台）交通，城市空间信息工程

AI and 土木工程
结构动力学
用神经网络做
模态分析，频域分解法（FDD, Frequency Domain Decomposition）
https://www.zhihu.com/question/27691300

AI石油能源
AI生物科学
AI破案
金融
管理
AI伦理
AI政策
AI Company
Kubeflow连接机器学习和云计算
机器学习中的并行计算
建筑学与软件设计模式



## efficient look for a job 找工作

### Dream business
Baidu Alibaba Tencent Jingdong Apple Huawei Xiaomi 计算机AI
CSCEC CCCCL THUPDi AI城市

### career planning 职业规划:

Career: Machine Learning Algorithm Engineer( Programming Language: C/C++, Java, Python, etc )



### improve competitiveness 提高竞争力

Good job/specialization 拿手活/专精一样: Machine Learning Algorithm, etc



### Resume 简历
#### 顶会：NIPS
#### 比赛：
#### Internet Famous Enterprises 互联网名企: Such as BATencent, Apple, etc
#### 

### Effective Introduction 有效内推 > 
### Offline job fair 线下招聘会 > 
### Recruitment website 招聘网站 
#### 智联招聘
#### 

### Interview 面试

### Interview questions/面试题
Especially the wrong questions, be sure to clarify the wrong questions and write them down!
尤其是错题，一定要将错题弄清楚记下来！

### Interview experience/面试经验



#### Algorithm 算法

#### System Design Interview 系统设计面试

#### back-end development
##### June 22's Tencent interview
###### 1. data structure and algorithm
sorting algorithm
time complexity   
###### 2. operating system
multi-process and multi-thread

#### front-end development
#### Baidu interview
##### 1. layout



## Study Method & Reading Skill:

1、聚合同一主题的各种书和博客，循序渐进，对比着看。

2、先看序言需要掌握的前置背景知识。

3、看目录大致了解一下内容，建立知识体系和框架。

4、不要一头扎进零碎知识中，边角知识可以用到再去查。

5、写读书笔记在GitHub上，但是记笔记时不要把书中的原话誊抄一遍，要理解后再写一些提纲挈领的总结。

6、按章节画思维导图。

7、尝试先看点简单有趣的彩图书，如《图解TCP/IP》、《图解HTTP》等。



## Reference List:
### Article:
1. https://www.simplilearn.com/tutorials/artificial-intelligence-tutorial/how-to-become-an-ai-engineer
2. https://github.com/ZuzooVn/machine-learning-for-software-engineers
3. https://www.codementor.io/@zuzoovn/how-i-plan-to-become-a-machine-learning-engineer-a4metbcuk
4. https://datasciencedojo.com/
5. https://www.datacamp.com/
6. https://www.simplilearn.com/
7. https://www.coursera.org/specializations/jhu-data-science
8. https://www.coursera.org/professional-certificates/ibm-data-science?utm_source=gg&utm_medium=sem&campaignid=2087860785&utm_campaign=10-IBM-Data-Science-ROW&utm_content=10-IBM-Data-Science-ROW&adgroupid=116274867101&device=c&keyword=&matchtype=b&network=g&devicemodel=&adpostion=&creativeid=506892807488&hide_mobile_promo&gclid=EAIaIQobChMI662A9YbS8AIVjx0rCh3IvAWcEAAYAiAAEgJlCPD_BwE
9. https://en.wikipedia.org/wiki/SOLID
10. https://www.zhihu.com/question/309551737/answer/950028900
11. TransCoder: 
    1. http://www.techweb.com.cn/cloud/2020-06-10/2793397.shtml
    2. https://blog.csdn.net/triplemeng/article/details/106849239
    3. Facebook NIPS Paper "Unsupervised Translation of Programming Languages" 
       https://arxiv.org/pdf/2006.03511.pdf
    4. 
12. C/C++ convert to Python: 
    1. Swig: 
    2. ctypes: https://zhuanlan.zhihu.com/p/20152309
13. 

#### Computer Graphic
1. https://zhuanlan.zhihu.com/p/386510829
2. https://zhuanlan.zhihu.com/p/357265599
3. https://www.zhihu.com/column/c_1354832966116417536
4. 

#### Architecture, BIM
1. https://www.planacademy.com/best-bim-books-to-own/
2. 

#### International Classic Books:
1. "C Primer Plus"
2. "C++ Primer"
3. "The C++ Programming Language"
4. "Python"
5. "Machine Learning"
6. "Deep Learning"
7. "数字图像处理(Digital Image Processing) (Rafael C.Gonzalez)"
8. Code Complete (Developer Best Practices)
9. "Unity Shader入门精要"
10. "Learn OpenGL - Graphics Programming" https://learnopengl.com/book/book_pdf.pdf   
11. 黑皮书系列
12. 
13. 


Papers: 

Project: 


Github:
1. https://github.com/ZuzooVn/machine-learning-for-software-engineers

Mooc:
1. Coursera
2. Edx
3. Udacity
4. Udemy
5. 
kaikeba

Jobs Description:
1. Apple Machine Learning Engineer-Applied ML Jobs
https://jobs.apple.com/en-us/details/200166605/machine-learning-engineer-applied-ml
https://jobs.apple.com/en-us/search?team=machine-learning-and-ai-SFTWR-MCHLN
https://www.apple.com/careers/us/machine-learning-and-ai.html
Tencent:

Baidu:
https://baijiahao.baidu.com/s?id=1671805560612599328&wfr=spider&for=pc



###### Tried to add some video

