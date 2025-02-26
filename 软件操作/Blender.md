# 统一物体名称与网格名称
~~~json
import bpy

selected_objects = bpy.context.selected_objects

for obj in selected_objects:
	obj.data.name = obj.name
~~~
# 形态键
## 形态键导入UE
1. Blender导出时不要应用修改器
2. K帧时首尾要K两帧空白帧
3. 导入时选择导入Morph![[Pasted image 20240301144014.png|24]]
## 