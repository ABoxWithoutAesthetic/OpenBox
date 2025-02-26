[GAEA节点图文对照-1 - 哔哩哔哩 (bilibili.com)](https://www.bilibili.com/read/cv29859761/)
[SoftClip - Gaea 文档 - QuadSpinner](https://docs.quadspinner.com/Reference/Profile/SoftClip.html)
## 构成
### Primitives：基础
- Constant：常数
	![[Pasted image 20240602002725.png|200]]
- Cracks：六边形Tilling
	![[Pasted image 20240602002741.png|100]]
- DriftNoise：飘逸板块噪波
	![[Pasted image 20240602002756.png|100]]
- File：导入高度图
- Gabor：加博尔噪波
	![[Pasted image 20240602002822.png|300]]
- Gradient：渐变
	![[Pasted image 20240602002842.png]]
- LineNoise：线条Tilling
	![[Pasted image 20240602002910.png]]
- MultiFractal：一种噪波
	![[Pasted image 20240602002926.png|300]]
- Perlin：噪波
	![[Pasted image 20240602002945.png]]
- Resource：未知
- RockNoise：小石头噪波
	![[Pasted image 20240602002954.png]]
- SlopeNoise：倾斜噪波
	![[Pasted image 20240602003004.png]]
- TileInput：Tilling输入的遮罩
- Voronoi：很多山脊
	![[Pasted image 20240602003017.png]]
- Voronoi+：泰森多边形噪波
	![[Pasted image 20240602003031.png]]
### Geo Primitives：预设的常规地形
- BandLands：破坏性比较强的地形预设
	![[Pasted image 20240602003040.png]]
- Canyon：峡谷
	![[Pasted image 20240602003048.png]]
- Crater：月球预设
	![[Pasted image 20240602003057.png]]
- Duns：沙丘预设
	![[Pasted image 20240602003107.png]]
- Fault：裂缝预设
	![[Pasted image 20240602003155.png]]
- Hill：山丘预设
	![[Pasted image 20240602003201.png]]
- Igneous：火成岩，岩浆凝聚而成
	![[Pasted image 20240602003215.png]]
- Island：岛屿预设，不知怎么用
	![[Pasted image 20240602003222.png]]
- Mountain：山体预设
	![[Pasted image 20240602003228.png]]
- Plates：板块预设
	![[Pasted image 20240602003234.png]]
- Range：山脉预设
	![[Pasted image 20240602003241.png]]
- Ridge：山脊预设
	![[Pasted image 20240602003248.png]]
- Rocky：石块预设
	![[Pasted image 20240602003256.png]]
- Sand：沙滩，沙漠
	![[Pasted image 20240602003302.png]]
- ShinyWaves：海浪预设
	![[Pasted image 20240602003311.png]]
- Slump：猛烈的高度降低预设
	![[Pasted image 20240602003320.png]]
- WorseLands：破坏性比较强的预设，比BadLands锐利
	![[Pasted image 20240602003329.png]]
### Warp：变形
- Displace：将地形向中间扭曲
	![[Pasted image 20240602003344.png]]
- Dwarp：未知
	![[Pasted image 20240602003355.png]]
- Warp：扭曲，多个扭曲中心，会让灰度低的向灰度高的核心靠近，同时会挤出多个高灰度核心
	![[Pasted image 20240602003407.png]]
### Adjustments：调节灰度值
- Abs：绝对值
	![[Pasted image 20240602003419.png]]
- AutoLevel：将最低灰度落到最低点
	![[Pasted image 20240602003428.png]]
- Blur：模糊
	![[Pasted image 20240602003433.png]]
- Clamp：限制最小最大值
	![[Pasted image 20240602003439.png]]
- Curve：重新设置灰度梯度
	![[Pasted image 20240602003446.png]]
- Denoise：减小噪波强度，比模糊弱
	![[Pasted image 20240602003453.png]]
- Flip：镜像翻转
	![[Pasted image 20240602003500.png]]
- Fx：滤镜
	![[Pasted image 20240602003506.png]]
- Gamma：增加灰度值
	![[Pasted image 20240602003528.png]]
- Heal：模糊
	![[Pasted image 20240602003536.png]]
- Invert：翻转
	![[Pasted image 20240602003543.png]]
- MultiCombine：三个地形混合
- Sharpen：锐化噪波
	![[Pasted image 20240602003549.png]]
- Sine：Sine函数
	![[Pasted image 20240602003556.png]]
- SlopeBlur：根据遮罩模糊
	![[Pasted image 20240602003603.png]]
- Threshold：阈值
	![[Pasted image 20240602003609.png]]
- Transform：整体缩放和移动
	![[Pasted image 20240602003616.png]]
- Zero Borders：设置边界
	![[Pasted image 20240602003622.png]]
### Profile：更改轮廓
- Distance：将平面切成斜面
	![[Pasted image 20240602003636.png]]
- FractalTerraces：分型梯田，形成多个梯田
	![[Pasted image 20240602003641.png]]
- Recurve：反曲，使地形更加锐利或者柔和
	![[Pasted image 20240602003654.png]]
- Shaper：充实地形，最高不变
	![[Pasted image 20240602003702.png]]
- SoftClip：对地形进行柔和的切割
	![[Pasted image 20240602003716.png]]
- Terrace：阶梯
	![[Pasted image 20240602003709.png]]
- ThermalShaper：锐化脊线，超过数值后热膨胀
	![[Pasted image 20240602003724.png]]
### Filters：过滤器
- Aperture：将地形转化为一块块的圆形堆积
	![[Pasted image 20240602003731.png]]
- Apex：降低性切割成金字塔形状
	![[Pasted image 20240602003742.png]]
- Bomber：散布节点，将另一个地形散布到地形上
	![[Pasted image 20240602003748.png]]
- Cells：将地形变成一个个的细胞单位
	![[Pasted image 20240602003754.png]]
- Noise：将地形变成噪波
	![[Pasted image 20240602003759.png]]
- Origami：折纸风格
	![[Pasted image 20240602003805.png]]
- Polar：极化
	![[Pasted image 20240602003813.png]]
- Repeat：Tilling节点
	![[Pasted image 20240602003822.png]]
- Repulse：降低性向内吸或者向外扩
	![[Pasted image 20240602003829.png]]
- SeamLess：将地形边界转为无缝的
	![[Pasted image 20240602003835.png]]
- Swirl：旋涡
	![[Pasted image 20240602003841.png]]
- Whorl：多个旋涡
	![[Pasted image 20240602003847.png]]
### Erosion
- Alluvium：在凹陷处生成沉积物
	![[Pasted image 20240602003901.png]]
- Breaker：产生河流沟壑，但是不会产生沉积
	![[Pasted image 20240602003908.png]]
- Buildup：降低性磨损的油光锃亮，类似模糊
	![[Pasted image 20240602003915.png]]
- Convector：对流器，热侵蚀的一种
	![[Pasted image 20240602003922.png]]
- Crumble：坍塌，散布坍塌效果
	![[Pasted image 20240602003929.png]]
- Deposits：沉积物，风沙堆积
	![[Pasted image 20240602003935.png]]
- Erosion：侵蚀
	![[Pasted image 20240602003941.png]]
- Fluvial：细小的河流侵蚀
	![[Pasted image 20240602003947.png]]
- Hydro：水力侵蚀
	![[Pasted image 20240602003953.png]]
- HydroFix：轻微水力
- MicroErosion：微侵蚀，类似侵蚀锐化
	![[Pasted image 20240602004000.png]]
- Sediment：凹陷处沉积
	![[Pasted image 20240602004013.png]]
- Stratigy：分层，Class模式产生阶梯
	![[Pasted image 20240602004024.png]]
- Thermal：热侵蚀
	![[Pasted image 20240602004034.png]]
- Wizard：简化的Erosion节点
	![[Pasted image 20240602004041.png]]
	![[Pasted image 20240602004145.png]]
	
### LookDev：外观处理
- Anastomosis：联结，创建联合的流动结构
	![[Pasted image 20240602004154.png]]
- Arboreal：树木散布模拟节点
	![[Pasted image 20240602004200.png]]
- Canyonizer：产生峡谷特征
	![[Pasted image 20240602004206.png]]
- Carver：雕刻，置换和侵蚀复合的效果
	![[Pasted image 20240602004220.png]]
- Fold：折叠
	![[Pasted image 20240602004225.png]]
- Outcrops：产生裸露岩石
	![[Pasted image 20240602004231.png]]
- Rugged：添加岩石的崎岖效果
	![[Pasted image 20240602004240.png]]
- Shatter：粉碎效果
	![[Pasted image 20240602004246.png]]
- Shear：剪切
	![[Pasted image 20240602004251.png]]
- Stacks：堆叠
	![[Pasted image 20240602004323.png]]
- Surface：增加表面粗糙度
	![[Pasted image 20240602004311.png]]
- Valley：产生溪谷效果
	![[Pasted image 20240602004303.png]]
### Snow
- IceFloe：创建浮冰，需要输入水
	![[Pasted image 20240602004336.png]]
- SnowFall：积雪
	![[Pasted image 20240602004342.png]]
### Water
- Lake：湖
	![[Pasted image 20240602004348.png]]
- Rivers：河流
	![[Pasted image 20240602004354.png]]
- Sea：海
	![[Pasted image 20240602004401.png]]
### Data：数据处理，大都是创建遮罩
- Angle：根据世界角度创建遮罩
	![[Pasted image 20240602004411.png]]
- Curvature：根据曲率创建遮罩
	![[Pasted image 20240602004417.png]]
- Details：提取高频细节，配合法线节点使用
	![[Pasted image 20240602004422.png]]
- Distribution：创建散布点遮罩
	![[Pasted image 20240602004428.png]]
- Dither：生成风格化点阵遮罩
	![[Pasted image 20240602004434.png]]
- Flow：生成流动遮罩
	![[Pasted image 20240602004439.png]]
- Growth：生成植被在斜坡的遮罩
	![[Pasted image 20240602004445.png]]
- Height：生成高度遮罩
	![[Pasted image 20240602004449.png]]
- Occlusion：生成ao遮罩
	![[Pasted image 20240602004455.png]]
- Protrusion：生成凸起边缘的遮罩
	![[Pasted image 20240602004500.png]]
- RockMap：生成岩石遮罩
	![[Pasted image 20240602004506.png]]
- Slope：生成斜坡遮罩
	![[Pasted image 20240602004511.png]]
- Soil：生成沉积物遮罩
	![[Pasted image 20240602004516.png]]
- Sunlight：生成根据阳光方向产生的遮罩类似angle
	![[Pasted image 20240602004522.png]]
- SurfTex：生成多种预设遮罩
	![[Pasted image 20240602004527.png]]
- Texture：根据地形特征生成一个合理的灰度遮罩
	![[Pasted image 20240602004533.png]]
- Velocity：生成多种水流遮罩
	![[Pasted image 20240602004538.png]]
### Color：上色节点
- CLUTer：对灰度进行渐变映射
	![[Pasted image 20240602004557.png]]
- ColorFX：颜色滤镜
	![[Pasted image 20240602004605.png]]
- NormalMap：法线贴图
	![[Pasted image 20240602004611.png]]
- QuickColor：使用两个颜色进行渐变映射
	![[Pasted image 20240602004617.png]]
- RGBMix：合并通道
- RGBSplit：通道分离
- SatMaps：材质贴图
	![[Pasted image 20240602004631.png]]
- Splat：调整颜色贴图的通道
- Synth：手动生成遮罩
- Vegetation：输入上色节点和高度节点然后生成植被遮罩
	![[Pasted image 20240602004638.png]]
### Render：
- Cartography：地图等高线
	![[Pasted image 20240602004645.png]]
- Light：灯光
	![[Pasted image 20240602004650.png]]
### Output：
- Mesher：到处模型
- Output：用于单独输出节点的通道
## 节点
### Erosion
#### 概念
侵蚀是所有地形的基础，通过模拟水力侵蚀和变形来塑造一个现实的地形
#### Erosion
- Duration：地形被侵蚀的时间长短，时间越长，地形水土流失越严重，越==沙漠化
- Rock Softness：侵蚀后，岩石的表现是否柔和，值越小，==尖峰==保留度越高
- Strength:同Duration 
#### DownCutting
- DownCutting：模拟水土流失的轻度，越强山体的==雕刻状==侵蚀越明显
- Inhibition：抑制沉淀物被冲走，越强沉积物越多，表现为更多的==松散的土壤==，同样的山体的雕刻状也会变轻
    - 植被多的地方，水土流失轻，抑制就高
    - 反之，抑制就低，如黄土高原
- BaseLevel：表现为沟壑的底部上升
#### Scale
- 未知
#### Flow
- Random Sedimentation：沉积物的随机化，值越大沉积物的颗粒感越强
- Volume：沉积的范围，值越大，沉积越大，不是指颗粒
    - ![[Pasted image 20240320222712.png|100]]![[Pasted image 20240320222729.png|100]]
- SedimentRemoval：去除沉积物
#### SelectiveProcessing
- 未知
#### OtherSettings
- Seed：随机种子
#### 接口
- Area：没啥效果
- Removal：没啥效果
- Mask：受影响的区域
- Wear：磨损区域
- Deposit：沉积物区域
- Flow：水流侵蚀区域