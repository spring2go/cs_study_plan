# 一份硬核计算机科学CS自学计划

## 一、前言
不少学员经常抱怨自己的计算机基本功不行，大学的时候荒废了，既然如此，为啥不考虑为自己制定一个为期3～5年的重学CS目标，然后投入时间精力去实现这个目标呢？具体点，这个目标可以是这样的：**重学CS(Computer Science)核心课程，夯实CS基本功，达到美国一流大学CS专业本科毕业水平**。如果你的年龄还没有超过30岁，想在IT行业做得长久，想成为一名更优秀的工程师，甚至想往架构师或者技术领导层方向发展，那么波波认为这个目标是值得投入的，长期会有回报。

假设你的职业方向是偏向**软件工程**和**系统架构**方向的，那么下面是波波推荐的一个为期3年左右的重学CS细分学习计划。我把这份计划同时分享在我的公众号和[github站点](https://github.com/spring2go/cs_study_plan)上，供大家参考。

注意，这份学习计划的所有参考课程，基本上都是美国一流大学最知名的CS课程，也称为**硬核hardcore**课程，所以**对学习者的要求比较高**。即使有兴趣愿意投入时间精力，估计国内的工程师大致只有Top 10%的人能全部啃下来，不然的话大家都可以轻松上美国一流大学了。**所以不是所有工程师都适合，请务必量力而行**。如果不服，尽管放马挑战，反正除了书以外，所有资料都是免费公开的。

## 二、CS学习计划

### 2.1 先导课(3个月)

课程：C语言基础

参考课程：密歇根州立大学[CSE 251 Programming in C](https://www.cse.msu.edu/~cse251/index.html)

参考书：The Absolute Beginner's Guide to C(或其它C语言参考书)

参考视频：B站上有很多不错的C语言教程，自己找

挑战难度：3星

产出目标：完成课程站点上的所有14个Steps实验+3个Projects

说明：

1. 这门课相当于是CS101，为什么要学C语言？因为C语言是现在主流语言的鼻祖，也是主流系统编程语言，系统架构师必须懂C语言。另外，下门课程[深入理解计算机系统]需要C语言+Linux编程基础。
2. 课程站点上面的PPT可以大致浏览一下，如果已经有足够编程基础的话，书可看可不看，关键是14个实验和3个项目要搞定。

### 2.2 第1年上半年

课程：深入理解计算机系统

参考课程：华盛顿大学[CSE351: The Hardware/Software Interface](http://courses.cs.washington.edu/courses/cse351/)

参考书籍：[深入理解计算机系统(CSAPP)](http://product.dangdang.com/24106647.html)

参考视频：B站 [Washington CSE351 2017](https://www.bilibili.com/video/BV1Zt411s7Gg)

产出目标：完成[CSAPP书籍配套的所有Labs](http://csapp.cs.cmu.edu/3e/labs.html)

挑战难度：4星

说明：这门课程是系统编程基础，也是后续操作系统/网络/数据库/编译等课程的基础，相关内容是通向系统架构师的基本功。这门课比较贴近企业实战，对动手能力要求很高，课程一大目标是要程序员写出对机器友好的高性能代码。

### 2.3 第1年下半年

课程：数据结构

参考课程：伯克利大学[CS61B Data Structures](https://sp19.datastructur.es/)

参考书籍：Head First Java + 数据结构书自选

参考视频：B站 [UCB CS 61B Data Structures](https://www.bilibili.com/video/BV1EJ411n72e)

产出目标：完成CS 61B站点上的所有Labs/Homeworks/Projects。

挑战难度：4星

说明：数据结构的重要性毋庸置疑，伯克利的CS课程都是比较偏向实战型工程师的，纯理论的东西相对少。本课的重点是树立抽象编程思维，务必把所有Labs/Homeworks/Projects都搞定。

### 2.4 第2年上半年

课程：操作系统

参考课程：麻省理工MIT 6.828 [Operating System Engineering](https://pdos.csail.mit.edu/6.828/2018/index.html)

参考书籍：[操作系统导论(Operating Systems: Three Easy Pieces)](http://product.dangdang.com/27882546.html)

参考视频：B站 [HMC CS 134 2019 Operating System](https://www.bilibili.com/video/av47977122)

产出目标：完成MIT 6.828站点上的所有7个Labs

挑战难度：5星

说明：6.828是MIT的神课，这门课难度不小，含金量也不小。如果能把所有实验都搞定，对操作系统的认识会有质的飞跃。

### 2.5 第2年下半年

课程：计算机网络

参考课程：斯坦福 [CS 144 Introduction to Computer Networking](https://cs144.github.io/)

参考书籍：[计算机网络：自顶向下方法](http://product.dangdang.com/25299722.html)

参考视频：B站 [斯坦福大学：CS144 计算机网络介绍](https://www.bilibili.com/video/BV137411Z7LR)

产出目标：完成CS 144 站点上的所有8个Labs。

挑战难度：4星

说明：计算机网络知识和技能，是互联网应用开发的基础，也是成为系统架构师的基础。这门CS 144和配套书《计算机网络：自顶向下方法》，是目前最佳的学习计算机网络基础的课程和参考书。这也是一门投入产出比比较高的课(学了马上能用)。

### 2.6 第3年上半年

课程：编译原理

参考书籍：[Crafting Interpreters](https://www.craftinginterpreters.com/contents.html) 或者  [Write an Interpreter in Go](https://www.amazon.com/Writing-Interpreter-Go-Thorsten-Ball/dp/3982016118)

参考视频：B站 [CS143 斯坦福编译原理](https://www.bilibili.com/video/BV1cE411f78c)

产出目标：参考[Crafting Interpreters](https://github.com/munificent/craftinginterpreters)，使用Java或者golang语言(或其它你熟悉的语言)，实现Lox小型编程语言。

或者，参考[Write an Interpreter in Go](https://interpreterbook.com/)，或[Write A Compiler in Go](https://compilerbook.com/)，使用Java语言实现Monkey小型语言。

挑战难度：5星

说明：视频可以不看，但是一定要自己动手实现一个小语言解释器或者编译器。

### 2.7 第3年下半年

课程：数据库系统

参考课程：卡耐基梅隆CMU [15-445/645 Database Systems](https://15445.courses.cs.cmu.edu/fall2020/)

参考书籍：[数据库系统概念](http://product.dangdang.com/22632572.html)

参考视频：B站 [卡耐基梅隆大学15-445 数据库系统介绍](https://www.bilibili.com/video/BV1Cp4y1C7dv)

产出目标：参考[vanilladb项目](https://github.com/vanilladb/vanillacore)，使用golang语言实现clone版的vanilladb（原项目是Java实现的）。

挑战难度：5星

说明：视频/课程/书可以不看，但是一定要自己动手实现一个小型的数据库系统，包括服务器端的存储引擎、SQL解析器、查询引擎和JDBC访问接口。企业开发大部分是基于数据库的应用，如果要成为企业级架构师，必须对数据库底层实现有一定掌握。课程项目要求用golang，对golang语言不熟悉的，自己找资料自学，如果你按照课程计划坚持学到这门课，那么你已经具有足够基础，可以轻松pick up任何一门编程语言。

## 三、额外说明

1. 上面7门课是CS的核心课程(Core CS)，偏向软件工程和系统架构方向。波波认为作为打基础的话，认真消化吸收这7门课就足够了，不需要再多，国内的计算机专业核心课也是这7门。其它的像人工智能，大数据，计算机图形学，软件工程，Web或者无线开发，网络安全，分布式系统等等，都可以算是专业或应用课，在学完7门核心课的基础上，有了一个扎实的基础，可以轻松按需拓展学习其它专业或应用课。

2. 除了第一门先导课3个月，其它6门课每一门大致都需要半年(6个月)，每周投入时间不少于10小时。

3. 上面的课程列表中没有数学课，如果你不是想搞研究或者投入大数据分析行业，那么数学可以暂时忽略。波波认为做软件工程和架构师不怎么需要数学，当然有数学背景会更好。

4. 根据学习金字塔的理论，单纯听视频课程或者看书的话，学习内容的平均留存率不超过30%。而动手实践后的留存率可以达到75%。所以学习过程中的产出非常重要，上面列出的实验/作业/项目都务必要搞定，这些才是应该投入的重点。
   <img src="doc/image-20210110144307647.png" alt="学习金字塔" style="zoom:50%;" />

   如果说你想达到90%的留存率，彻底掌握这些CS核心课，那么建议你要把所学的知识点再梳理出来，整理成博文或者B站视频课，再教授给其它人。注意，你做完的实验/项目的代码不要分享出来，这个有版权问题，请尊重原课程老师的版权。

5. 因为这些课程很有名，所以你可以很容易的，在github上找到一些其他人放上去的实验或者项目的答案，但是你应该先自己动脑动手搞定这些实验和项目，完成以后你可以对比一下其他人的答案，但是切勿先去看别人的答案。就像玩游戏一样，你拿了秘籍再玩游戏就没有意思了，也没有学习效果。

6. 最后两门课(编译原理和数据库系统)有两个大项目，相当于是毕业设计项目，工作量不小，要认真计划+投入足够时间才能搞定。

7. 上面课程的资料大部分是英文的，你必须自己先搞定英语，至少能流畅阅读。如果你英语不行，这些课程很难搞定，而且我认为你在IT这个行业也很难走远，因为大部分优质的IT资料是英文的。

8. 搞定上面的7门课(尤其是所有的实验和项目)是有挑战的，即使是正二八斤美国一流大学的本科生，搞定这些实验和项目也不是轻松的，而且他们有一起的同学可以交流，你基本上要独立搞定。但是我相信，只要你对技术有足够热情，能足够自律，制定计划并严格执行，投入足够时间/精力，那么你一定可以克服困难达成自学CS的目标，为后续的软件开发职业生涯奠定更坚实的基础。

9. 除了波波推荐的CS自学计划，另外还有两份自学计划你也可以参考：

   1. Ozan Onay和Myles Byrne开发的[自学计算机科学](https://github.com/keithnull/TeachYourselfCS-CN/blob/master/TeachYourselfCS-CN.md)，github上有7k星，这份和波波的计划比较接近，也是硬核学习计划，总体对学习者要求较高。
   2. 开源社区大学的[自学计算机科学](https://github.com/ossu/computer-science)，这份教学计划很全面，课程很多，更偏向普通学习者，github上有72.9k星。