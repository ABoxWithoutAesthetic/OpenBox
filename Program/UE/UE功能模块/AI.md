### 简单AI

![[Pasted image 20240402172638.png|400]]

### AI行为树

#### 沿曲线路径移动

- 创建行为树（需要将BlackBoard创建的变量赋予给task）
  ![[Pasted image 20240403093708.png|778]]
- 创建AIController并运行行为树
  ![[Pasted image 20240403092907.png|665]]
- 在角色蓝图创建距离获取（通过ai角色的本身位置来获取到样条线的inputkey，然后通过inputkey获得样条线的distance）
  ![[Pasted image 20240403092547.png|800]]
- 书写Task功能（因为行为树中的sequence本身就是循环，所以循环的逻辑写在这，避免重复）
  ![[Pasted image 20240403093440.png|800]]
- 其他设置
  - 添加AIController
    ![[Pasted image 20240403093842.png]]
  - 抖动解决
    - ![[Pasted image 20240403094130.png|500]]
    - ![[Pasted image 20240403094243.png|171]]
- 平行移动
  - 获得距离偏移
    ![[Pasted image 20240403111750.png|1400]]
  - 获得偏移后的点坐标
    ![[Pasted image 20240403112138.png|1400]]
