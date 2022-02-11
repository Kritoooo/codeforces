# 刷题记录

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
# 2022/1/21
### P2671 [NOIP2015 普及组] 求和
前缀和.推导数学公式。
### P3406 海底高铁
前缀和。
关于途径城市的问题。我们考虑有a-1-b-2-c-3-d-4-e-5-f-6-g七个城市，a->c->g->a->b，问1-6各道路使用了多少次。  
假设1-6初始为：0，0，0，0，0，0。对a->c，我们1-6：1，0，-1，0，0，0；  求该数组前缀和即为1-6：1，1，0，0，0，0。  
对c->g,1-6：1，0，0，0，0，0。同样，其前缀和1-6：1，1，1，1，1，1。  
对g->a,1-6：2，0，0，0，0，0。前缀和1-6：2，2，2，2，2，2。  
对a->b,1-6：3，-1，0，0，0，0，0。前缀和1-6：3，2，2，2，2，2。  
对于路径a->b(a<b)令a[a]++,a[b]--;再求这个数组的前缀和即可得到每个城市的道路使用的次数了。  
### P2004 领地选择
第一道dp。对于(1,1)点与(i,j)之间的面积的权值和的状态转移方程为f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+Vij。
对于点(x,y)与(x+c,y+c)之间面积的权值和的公式为f[x+c][y+c]-f[x+c][y-1]-f[x-1][y+c]+f[x-1][y-1];
### P1719 最大加权矩形
和上一题大致相同，最后之间遍历整个地图的所有点即可。
### 心情
1.英语没挂科，😝😝，下个学期开卷,虽然可能由于英语也不能搞多高。  
2.不要老是沉湎于自己的舒适区，虽然确实舒适，但是或许可以尝试突破一下自己。  
3.就像三角形走进了一堆的圆里，一定会很不舒服。但是强者抽刀向更强者，我以前无疑是怯弱的，总是挥刀向c++这种弱者，也许以后可以改变吧。真正的强大可能就是哪怕在你觉得很不合理的各种条条框框下还能取得这个条条框框里面能拿到的最高成就。绩点大概就是如此。  
# 2022/1/22
## Codeforces Round #767 (Div. 2)
### B. GCD Arrays
简单数学题。
### A. Download More RAM
同上。
### 排名 6831
10:00: A题AC 31：00: B题AC
写完开摆。
希望能上分
### B. Elementary Particles
思维。
# 2022/1/23
### P1908 逆序对
归并排序。
### P1923 【深基9.例4】求第 k 小的数
经典的快排。
### P1434 [SHOI2002]滑雪
记忆化搜索。dfs
### P1226 【模板】快速幂||取余运算
ll a,b,p,ans=1;  
	scanf("%lld%lld%lld",&a,&b,&p);  
	int temp1=a,temp2=b;  
	while(b>0){  
		if(b%2==1){  
			ans=ans*a%p;i  
		}  
			a=a*a%p;  
			b=b>>1;  
	}  
	ans=ans%p;  
### P3197 [HNOI2008]越狱
快速幂应用。
### P8054 A 质因数
思维。
# 2022/1/24
### 2022牛客寒假算法基础集训营1 
因为一点小失误，只做出来了三题。我是废物。用在线编辑器写的。就不传代码了。
### A - Construct a Rectangle
思维。
### B - Berland Music
排序，模拟。
## 注:2022/1/25-2022/2/11的更新都是后来补上的，所以对题目的感悟可能不是很清晰了。
# 2022/1/25
### P1439 【模板】最长公共子序列
dp
### P2196 [NOIP1996 提高组] 挖地雷
dfs，难点在于记录路径
### P4715 【深基16.例1】淘汰赛
思维，第一第二肯定来自左半部分的最大值和右半部分的最大值。将两者比较取小即为第二名。
# 2022/1/26
### P4913 【深基16.例3】二叉树深度
二叉树模板。
### P4017 最大食物链计数
记忆化搜索。用二维数组模拟捕食关系
### P1280 尼克的任务
dp
### P1228 地毯填补问题
分治，思维。
