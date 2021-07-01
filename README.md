# Artificial-Intelligence-Guide
This is an Artificial Intelligence learning and Interview guide. 
I help this guide can help you to be a Machine Engineer in Tencent. 

## 1. Program Language(important) 
### 1.1 C/C++ or Java
1. [C Language](docs/Languages/CLanguage.md)
2. [C++ Language](docs/Languages/C++Language.md)

#### object-oriented program
SOLID is a mnemonic acronym for 5 design principles of object-oriented programming intended to make software designs more understandable, flexible and maintainable. These principles were first introduced in Robert C.Martin's 2000 paper Design Principles and Design Patterns.
1. The Single-responsibility principle: "There should never be more than one reason for a class to change." In other words, every class should have only one responsibility.
2. The Open-closed principle: "Software entities ... should be open for extension, but closed for modification"
3. The Liskov substitution principle: "Functions that use pointers or references to base classes"
4. 
5. 

### 1.2 Python 

Others: SQL, Swift

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

Several commonly used algorithms in supervised learning:  

1. K-nearest neighbor algorithm
2. Decision tree algorithm
3. Naive Bayes algorithm

### 2.2 Unsupervised Learning 无监督学习
The process of self-learning by students without a teacher. There is no data annotation, only the data itself. The question to be answered is "what can be found from the data X", and the main problem to be solved is "clustering". 在没有老师的情况下，学生自学的过程。没有任何的数据标注，只有数据本身。要回答的问题是"从数据X中能发现什么"，解决的主要是“聚类（Clustering）”问题。

Unsupervised learning refers to only input variables and no related output variables. The goal is to model the underlying structure and distribution in the data in order to learn more about the data. Compared with supervised learning, unsupervised learning has no exact answers and the learning process is not supervised. The algorithm runs independently to discover and express the structure in the data. Unsupervised learning can be further divided into clustering problems (discovering internal groupings in the data) and association problems (the association and rules between the various parts of the data). 非监督式学习指的是只有输入变量，没有相关的输出变量。目标是对数据中潜在的结构和分布建模，以便对数据做进一步的学习。相比于监督式学习，非监督式没有确切的答案和学习过程也没有监督，算法独自运行发现和表达数据中的结构。非监督式学习进一步可以分为聚类问题（在数据中发现内在的分组）和关联问题（数据的各部分之间的关联和规则）。

Several commonly used algorithms in unsupervised learning:

1. K-means clustering algorithm
2. Spectral clustering algorithm
3. Principal component analysis(PCA)

Example: transcoder



#### Spark
#### XGboost

### 2.3 Semi-Supervised Learning 半监督学习 

Semi-supervised learning(SSL) is a key issue in the field of pattern recognition and machine learning. It is a learning method that combines supervised learning and unsupervised learning. Semi-supervised learning uses a large amount of unlabeled data and simultaneously uses labeled data for pattern recognition. 半监督学习是模式识别和机器学习领域研究的重点问题，是监督学习与无监督学习相结合的一种学习方法。 半监督学习使用大量的未标记数据，以及同时使用标记数据，来进行模式识别工作。

Semi-supervised learning is a learning method that combines supervised and unsupervised learning. Have most of the input data (independent variables) and a small part of labeled data (dependent variables). You can use unsupervised learning to discover and learn the structure of input variables; use supervised learning technology to make label predictions on unlabeled data, and pass these data to the supervised learning algorithm as training data, and then use this model to make predictions on the new data. 半监督式学习是一种监督式学习与非监督式学习相结合的一种学习方法。拥有大部分的输入数据（自变量）和少部分的有标签数据（因变量）。可以使用非监督式学习发现和学习输入变量的结构；使用监督式学习技术对无标签的数据进行标签的预测，并将这些数据传递给监督式学习算法作为训练数据，然后使用这个模型在新的数据上进行预测。



### 2.4 Deep Learning
#### Tensorflow
#### Caffe
#### Torch & Lua Program

### 2.5 Reinforcement Learning 强化学习

Reinforcement learning can train the program to make a certain decision. The program tries all possible actions in a given situation, records the results of different actions and tries to find the best attempt to make a decision. It is a product of the intersection of multiple disciplines and multiple fields. Its essence is to solve the decision making problem, that is, automatic decision making and continuous decision making. It mainly contains four elements, agent, environment state, action, and reward. The goal of reinforcement learning is to get the most accumulated reward. 强化学习可以训练程序作出某一决定。程序在某一情况下尝试所有可能的行动，记录不同行动的结果并试着找出最好的一次尝试来做决定。是多学科多领域交叉的一个产物，它的本质是解决 decision making 问题，即自动进行决策，并且可以做连续决策。它主要包含四个元素，agent，环境状态，行动，奖励, 强化学习的目标就是获得最多的累计奖励。


### 2.6 Data Mining 数据挖掘

### 2.7 Big Data

### 2.8 Pattern Recognition 模式识别





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


Computer Vision
NLP
语音识别



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



### Valuable problems in computer graphics and game industry





SLAM
Planning
Control
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
AI and 建筑设计，城市（城市操作系统、城市管理系统平台）交通
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


## interview experience/面试经验
Baidu front-end development
1. layout

June 22's Tencent back-end development interview
1. data structure and algorithm
sorting algorithm
time complexity   
2. operating system
multi-process and multi-thread



## Study Method & Reading Skill:

1、聚合同一主题的各种书和博客，循序渐进，对比着看。

2、先看序言需要掌握的前置背景知识。

3、看目录大致了解一下内容，建立知识体系和框架。

4、不要一头扎进零碎知识中，边角知识可以用到再去查。

5、写读书笔记在GitHub上，但是记笔记时不要把书中的原话誊抄一遍，要理解后再写一些提纲挈领的总结。

6、按章节画思维导图。

7、尝试先看点简单有趣的彩图书，如《图解TCP/IP》、《图解HTTP》等。



## Reference List:
Article:
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
12. C/C++ convert to Python: 
    1. Swig: 
    2. ctypes: https://zhuanlan.zhihu.com/p/20152309
13. 

International Classic Books: 

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
Jobs Description:
1. Apple Machine Learning Engineer-Applied ML Jobs
https://jobs.apple.com/en-us/details/200166605/machine-learning-engineer-applied-ml
https://jobs.apple.com/en-us/search?team=machine-learning-and-ai-SFTWR-MCHLN
https://www.apple.com/careers/us/machine-learning-and-ai.html
Baidu:
https://baijiahao.baidu.com/s?id=1671805560612599328&wfr=spider&for=pc



###### Tried to add some video
