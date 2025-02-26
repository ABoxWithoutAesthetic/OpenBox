## 基础变量

### 数组

- 字典：dire{}
  - 定义：dire={1:'A',2:C,'D',[1,0,0]}
  - 动态添加：dire[键3]=键值3
  - 调用：dire[键]
- 列表：lis[]
  - 定义：list=[1,2,'A',[1,0,0]]
  - 动态添加：list.append()
  - 调用：list[索引]
- 元组：tup()
  - 定义：tup=(1,2,'A',[1,0,0])
  - 不能动态添加
  - 调用：tup[索引]

## 运算逻辑

### for循环

```python
for i in range(0,10)
	print(i)


for i,pt in enumerate(数据变量)
	print(pt.attribValue("变量"))
##这个for循环，enumerate()把括号里面的东西转成一个数组，比如我叫他数组A，pt就相当于A[i]，i是索引
```
