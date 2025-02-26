[官方文档](https://docs.google.com/document/d/1NzWqKRJAKdzB5Ogm0jdPHfNX2wJRTW8qRQ4mEJ3Bs9w/edit)
# 基础功能
1. 将PFPathFollower组件拖到要移动的蓝图中，然后选择关卡中的样条线路径![[Pasted image 20240229133038.png|400]]
2. 通过设置速度来控制启停![[Pasted image 20240229152341.png|62]]
3. 在关卡中选择
# 高级功能
## General
1. Path owner：路径选择
2. Teleport Physics：
3. Tick Interval：位置刷新的事件，直接瞬移，该触发的事件仍然会触发，不过要等事件过后
4. Hide Path info Text：隐藏控制点的信息
5. Loop：开启循环
6. Loop Type：循环模式
    - Replay：从路径起点开始循环
    - Replay From Start Distance：从设置的起始点开始循环
    - Ping Pong：来回往复（从路径起始点）
7. Start at Play：启用
8. Start Delay：启用的延时事件
9. Start Distance：起始距离偏移
10. Reverse：反转路径
11. Invert Rotation on Reverse：不知道
12. Apply Rotation Mask In Local Space：应用本地旋转轴
13. Rotation Update Mask：本地旋转轴数值
14. Location Update Mask：不知道，但是会影响路径
15. Look at Even if Not Started：不知道
16. Align to Path Start：不知道
17. Current Distance on Path：不知道
## Speed
1. Create new speed point：创建曲线速度点
2. Speed：不使用曲线时的速度
3. TimeBased：暂时不好用
4. Use Speed Curve：使用曲线速度，Speed失效
5. Override Path Speed Points：配合曲线使用
6. Speed Factor Operation：曲线速度与因数的结合方法
7. Speed Factor：曲线速度的因数![[Pasted image 20240229163244.png|100]]
8. Curve：速度曲线点集
9. Visualization：曲线点集的显示
## Rotation
1. Generate Rotation Points：生成曲线点
2. Follow Path Rotation：物体跟随曲线旋转
3. Look Ahead：不知道
4. Use Rotation Curve：使用旋转曲线控制旋转
5. Use Path Pitch and Yaw：勾选后会覆盖曲线集而使用曲线本身
6. Auto Recompute：重新计算曲线集每个点设置的旋转值，__慎用__
7. Keep Relative Distance：曲线点集按照原来在距离的百分比来自动调整
8. Rotation Point Step：自动生成旋转点的数量
9. Generate on Spline Control Points：在曲线的控制点生成旋转点
10. Roll Sample Distance：不知
11. Clamp Generated Angles：不知
12. Roll Angles Clamp Max：不知
13. Roll Angles Clamp Min：不知
14. Rotation Interpolation Mode：不知
15. Rotation Factor Operation：同speed
16. Rotation Factor：同Speed
17. Override Rotation Curve：同Speed
18. Rotation Points：同Speed
19. Visualization：同Speed
## Event
1. Override Path Event Points：同上
2. 点参数：
    - Name：点ID
    - Distance：点位置
    - User Data：不知
    - Fire Mode：触发事件的方向，正向或者反向或者二者
    - Fire Count：事件触发的次数
3. 使用方式 
    - 创建点的触发器并通过事件分发器发出信号![[Pasted image 20240229175111.png|100]]
    - 接收信号![[Pasted image 20240229175132.png|64]]