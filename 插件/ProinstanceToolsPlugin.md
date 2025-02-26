1. Pro Instance Circle/Grid/Path/PathScatter/Scatter
    - 空间分布类型
2.  Pro Instance Main Settings
    - Instance
        - Instance Type
            四种实例的类型：static/instance/hierarchical/actor
            只有static不用一直Update，其他的在不bake的情况下每次都要Update才会更新显示
        - Instance
            - 实例的成员，可设置多个不同的成员，分布数量受随机种子控制
            - 可覆盖材质
            - 可单独设置局部参数（同全局参数）
        - Instances Global Setting
            - Mobility：可移动性
            - Location/Rotation/Scale：可设置随机最大最小值
            - Rotator to Actor可以让实例朝向选中的Actor的坐标原点（可以选择三位朝向或者平面朝向）
            - Cast Shadows：是否投射阴影
            - Enable Custom Collision：是否启用自定义碰撞，有bug
            - Spawn Chance：生成的权重
        - Enable Actor Collision
            启用碰撞 
        - Instance Self Overlap
            调为destroy碰撞的实例会被销毁
    - Optimization
        设置剔除距离，仅适用Instance和Hierarchical模型
    - Randomization
        随机种子，仅使用随机类型 
    - Snappong&Aligning^[^启用后运行时显示会不正常，时显时不显]
         - Surface snapping
            捕捉下方的平面，同时模型排列会上下贴合，下方物体必须有碰撞
         - Surface Aligning
            捕捉下方的曲面，然后贴合曲面
         - Igore Self Collision
            启用后所有的都会分布在最底层
         - Line Traceing Depth
            检测依附对象的检测距离
         - Actors to Ignore
            不检测的对象列表 
    - Debug
3. Pro Instance Function
    - Bake Instances
        将实例模型烘焙成一个个独立的静态网格体
    - Randomize Seed
        随机种子
    - Update
        刷新
![[014E0065.png]]
- 打包报错：Plugin 'ProInstanceToolsPlugin' failed to load because module 'ProInstanceToolsPlugin' could not be found. Please ensure the plugin is properly installed, otherwise consider disabling the plugin for this project.
	- 将项目转为C++项目
