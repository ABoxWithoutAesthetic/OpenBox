# 变量
## 原生变量
~~~C++
@P;//位置
@N;//法线
@ptnum;//点序
@numpt;//总点数
@Cd;//颜色
~~~
## 变量声明
```C++
//作用域为本节点的变量
float a=0.1;
int b=1;
vector c={0,1,0};
string d="helloworld";
int arr[]={0,1,2,3,4};
matrix3={{0,0,0},{1,1,1},{2,2,2}};//三维矩阵

//全局变量：作用域为连在一起的多节点
f@a=0.1;
i@b=1;
v@c={0,1,0};
i[]@d={1,2,3,4};
3@transform;//三维矩阵
```

# 函数

### 运算函数

- int()：转换变量类型函数
- Floor()：向下取整
- Ceil()：向上取整
- Trunc()：向下取整，忽略符号但不删除
- rint()：四舍五入
- frac()：取小数
- radians：将度数转换为弧度
- quaternion：创建四位向量
  - 定义角度
  - 定义旋转轴向量
- qrotate：向量沿四位数的轴旋转
- pow()：幂函数
- foreach：循环遍历数组
- hasattribute()：函数判断是否有某个属性，返回值为1和0
- getbbox_size：获取box的尺寸
- push()：向数组里面动态添加元素
- rand()：生成0~1的随机值

### 功能函数

- chramp：生成曲线变量
- chi()：生成滑杆变量
- tolower()：小写转换
- toupper()：大写转换
- pointattrib()：获取点属性
- setpointattrib()：设置点属性，这个属性需要提前声明
- removepoint()：移除点
- addpoint()：增加点
  - 会把所有点都加一遍，产生重复点
- npoints()：获取制定输入口的点数
- itoa()：整数转字符串函数
# 算法
## 设置曲线法线/切线
```C++
vector p1=pointattrib(0,"P",@ptnum,0);
vector p2=pointattrib(0,"P",@ptnum+1,0);
vector p3=pointattrib(0,"P",@ptnum-1,0);
p1.y=0;
p2.y=0;
if(@ptnum<@numpt-1)
{
@N=normalize(p2-p1);
}
else
{
@N=normalize(p1-p3);
}

//叉乘切线
@Tan=cross(@N,{0,1,0});
```
## 随机值赋值
```C++
float randseed=chf("随机种子");
i@index=int(@numpt*rand(randf*@ptnum));
```
## 生成面中心点
~~~C++
//wrangle
addpoint(0,@P);

//wrangle
if(@ptnum<@numpt-1)
{
removepoint(0,@ptnum,1);
}
~~~
## 四元数旋转
~~~C++
//3.14==180*angle

@N={1,0,0};
vector UpVector={0,1,0};


float RandRange=chf("RandRange");
f@RandSeed=RandRange*2*(rand(@ptnum)-0.5);

float AngleOffset=chf("AngleOffset");
float Angle=(AngleOffset+@RandSeed)*3.14/180;

vector4 quaV4=quaternion(Angle,UpVector);

@N=qrotate(quaV4,@N);
~~~
## 打直UV
~~~C++
@uv.x=1.0*@primnum/(@numprim-1);
@uv.y=1.0*@ptnum/@numprim*@numprim/@numpt;
~~~
## 点距离剔除
~~~C++
for(int i=0;i<npoints(1);i++)
{
vector PtPos=@P;
PtPos.y=0;
vector OthPtPos=pointattrib(1,"P",i,0);
OthPtPos.y=0;
float Dis=distance(OthPtPos,PtPos);

float CullDis=chf("CullDis");
if(Dis<CullDis)
{
removepoint(0,@ptnum);
}
}
~~~
## 随机设置属性
~~~C++
float index=rand(@ptnum);
if(index<0.2)
{
s@name="hello";
}
else if(index<0.6&&index>=0.2)
{
@name="world";
}
else
{
@name="haha";
}
~~~
