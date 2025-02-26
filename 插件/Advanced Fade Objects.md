# 运行条件
1. 弹簧臂区间的物体会变透明
2. 距离在Work Distance区间内
3. 检测物体要有碰撞
# 参数介绍
1. Actors Ignore：忽略列表
2. Fade Material：透明材质
3. Is Enable：不知
4. Is Activate：自动启用
5.  Is Trace Complex：未知，提示会降低性能
6. Add Object Interval：透明化的时间
7. Calc Fade Interval：去除透明化的时间
8. Work Distance：起作用的距离，超出距离失效
9. Near Camera Radius：未知
10. Player Class：要启用此功能的Pawn
11. Object Types：要启用此功能的物体类型
    - World Static：移动性为static的物体
    - World Dynamic：移动性为Movable的物体
    - Pawn：基类为Pawn
    - Visibility：可视的所有物体
12. Fade Rate：实体化的速度
13. Capsule Half Height/Capsule Radiusl：弹簧臂下的胶囊体的大小，也可以调整检测范围
14. Near/Far Object Fade/：近/远距离的透明度，平缓过渡
15. Immediately Fade：未知