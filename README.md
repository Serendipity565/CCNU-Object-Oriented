# CCNU-Object-Oriented

《C++语言程序设计教程》琥珀老师面对对象上机实验参考代码

## 第一次实验

1. [二分搜索函数](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment1/1.cpp)
实现一个高效的二分搜索算法。

2. [简单计算器](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment1/2.cpp)
开发一个支持加、减、乘、除四种基本运算的计算器。

3. [二维数组旋转](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment1/3.cpp)
编写函数将一个 $3 \times 3$ 的二维数组顺时针旋转 $90^\circ$。

4. [剪刀石头布游戏](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment1/4.cpp)
实现一个简单的剪刀石头布游戏，支持玩家与计算机对战。

## 第二次实验

1. [三角形类 (Ctriangle)](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment2/1.cpp)
定义一个 `Ctriangle` 类，包含成员函数用于计算三角形的面积和周长。

2. [点类 (Point)](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment2/2.cpp)
定义一个 `Point` 类，并在其中实现成员函数 `double distance(const Point & p)`，用于计算两点之间的距离。

3. [圆的总面积计算](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment2/3.cpp)
创建多个圆对象，并通过函数 `double sum(Circle circleArray[], int size)` 计算这些圆的总面积。

## 第三次实验

1. [MyInteger 类的设计与测试](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment3/1.cpp)
设计并测试 `MyInteger` 类，包括成员变量、构造函数、获取值、判断偶数、判断素数和相等函数。

2. [栈操作 (Stack)](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment3/2.cpp)
实现并测试 `StackOfIntegers` 类，包括栈的基本操作。

3. [按递减顺序显示最小因子](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment3/3.cpp)
接收用户输入的正整数，并显示其按递减顺序排列的最小因子。使用 `StackOfIntegers` 类实现。

## 第四次实验

1. [Rational 有理数类的实现](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment4/1.cpp)
设计并测试 `Rational` 类，包括成员变量(分子、分母)，构造函数，加法、减法、乘法、除法、比较等相关操作函数，以及各种运算符重载。

## 期中考试

1. [Point类和Line类](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Midterm_Exam/1.cpp)
定义 `Point` 类和 `Line` 类，其中 `Line` 类是 `Point` 类的友元类，包含两个 `Point` 对象，分别表示起点和终点，补充必要函数，并实现 `Line` 的 `len` 函数，计算线段长度。

2. [类的派生](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Midterm_Exam/2.cpp)
定义一个 `Shape` 类，派生出 `Rectangle` 类和 `Circle` 类，计算各派生类对象的面积 `area()`，并在 `Rectangle` 类中重载关系运算符 `==` 来比较两个 `Rectangle` 是否相等。

3. [长度可变的数组](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Midterm_Exam/3.cpp)
补全相关代码。

## 课后练习

1. [用纯虚函数重构上课的虚函数例子](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Midterm_Exam/3.cpp)
从Shape类派生出 `Triangle`、`Circle`、`Rectangle` 类，并实现不同类间通过面积从小到大排序

## 第五次实验

1. [虚函数的应用](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment5/1.cpp)
填空，完成虚函数的调用，使其输出指定内容。

2. [完成 Employee 类和 Leader 类](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment5/2.cpp)
定义一个 `Employee` 类，再以 `Employee` 类为基类，派生出 `Leader` 类，并实现指定功能。

3. [判断数组是否已排序模板](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment5/3.cpp)
设计一个通用的函数来检查数组中的元素是否已排序。

4. [补充 ArraySum 模板](https://github.com/Serendipity565/CCNU-Object-Oriented/blob/main/Experiment5/4.cpp)
补充 `ArraySum` 模板，并实现指定功能。
