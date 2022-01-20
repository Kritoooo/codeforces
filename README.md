# codeforces与洛谷刷题记录

仅作记录，供往日回首。

# 2022/1/18
### P1160 队列安排   
这一题使用了数组模拟链表，对于链表这一数据结构的考查非常之典型,可以经常回顾一下该题。  
### P2058 [NOIP2016 普及组] 海港
考察了队列的使用，也是非常经典的一道题。
### P1241 括号序列
对栈的使用的考察，注意灵活变通，这题奇怪的答案害我wa了好久。
对其实按照题面描述应该有多种解法，但实际上给的答案是唯一解法，所以单纯地使用栈还不是很够。需要灵活变通。
### P2234 [HNOI2002]营业额统计
AC的第一道蓝题，一开始被标签忽悠了，写了个bst，wa了，结果直接sort后暴力模拟就过了，这个题的答案也有问题。
文本2的答案应该是1，但是他的测评机是-1，害我找了好久的错误。
# 2022/1/19
### P2550 [AHOI2001]彩票摇奖
简单的模拟题。
### P1182 数列分段 Section II
典型的二分答案。解区间为数列中的最小值到数列所有值之和。如果左端点取0会WA掉两个测试点，只能拿80分。害我调了10分钟。其实很多你抱着侥幸心理以为可以忽略掉的细节很容易导致失败。
### P3743 kotori的设备
第二道蓝题。是二分答案题单的最后一题。这题的难点在于对建模能力和抽象能力的要求很高。在充电器每秒充电大于所有用电器每秒耗电之和时可以永久运行。不满足该要求时，利用二分答案找到解。
解区间的左端点为机器现有电量除以每秒耗电的最小值，右端点为所有机器电量之和。二分判断的依据就是如果该时间满足要求，则所有机器在该时间内缺少的电量之和小于等于充电器在该时间内产生的电量。
### P1219 [USACO1.5]八皇后 Checker Challenge
模板题。考查了dfs，深度优先搜索。用递归树的深度代表行数，然后遍历列数即可。非常经典的dfs。
### P1443 马的遍历
同样是一道模板题，简单且经典。使用的是BFS，广度优先搜索。和二叉树的广度优先遍历几乎思想一致。使用队列实现。
# 2022/1/20
### P1135 奇怪的电梯
BFS
### P1433 吃奶酪
把这题放到搜索题单的人居心叵测啊，专门设了最后一组数据来卡dfs。这题dfs只能拿90分。但是在讨论区找到了奇怪的优化方式。在递归次数大于等于25000000次时输出答案并停止程序就可以避免掉TLE了。
### P2199 最后的迷宫
仍然是bfs，但是模型比较复杂，码量稍微大点。
### P1162 填涂颜色
一道水题卡了我四次。搜之前把初始点涂色就可以了。
### 今日感受
任重道远
