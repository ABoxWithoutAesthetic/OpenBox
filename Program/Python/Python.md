# Houdini批量导出
~~~python
import hou##导入houdini函数库

Node=hou.node("/obj/geo")##获取houdini节点函数，括号输入路径

Path=Node.path()+"/"##path函数获取节点路径，记得函数的括号

DataNode=hou.node(Path+"节点名")##根路径引用上方变量

DataNodeGeo=DataNode.geometry()##获取该节点的几何属性

RenderNode=hou.node("路径")##获取要运行的节点，直接输入路径

Iteration=DataNodeGeo.attribValue("属性名")##获取属性

for i in range(1,Iteration):##记得冒号
	hou.setFrame(i)##setFrame设置帧数函数
	RenderNode.render()##render函数，运行本节点
hou.setFrame(1)##将帧数还原为1
~~~