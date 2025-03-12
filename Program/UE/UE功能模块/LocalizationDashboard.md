# [文本]()

- 创建GameTargets
- 选择C++文本收集
  - ![1739238965180|600](1739238965180.png)
- 选择蓝图文本收集
- 添加本地化语言种类
- 收集文本
- 导出文本
  - 默认路径即可，会在content下建立对应的文件夹
  - 找到要翻译的.po文件使用[Poedit](https://poedit.net)打开翻译
  - 安装[PoeditHelper](https://github.com/Gu-f/PoeditHelper)翻译助手（只能cmd>>pyhton运行）
  - 在Poedit中点击原文，Helper会自动识别并翻译，在Helper中点击翻译会自动填写到Poedit中
  - 导入.po文件
- 计算字数
- 编译文本
  ![1739329040093|600](1739329040093.png)

# 资产

- 贴图、字体等资源如果需要按地区展示不同的效果
- 在内容浏览器 选中资源 右键 -> 资产本地化 -> 新建本地化资产 -> 选中对应的地区
- 会在内容浏览器 L10N/地区代码 相同目录生成一个对应资源 修改该资源即可
- 建议图集中如果有带中文的图片 单拎出来 作为Texture使用 创建本地化资源

# 设置

- 上述逻辑设置好要重启编译器

* 设置切换逻辑
  - 蓝图
    ![Pasted image 20250210145418.png|216](../../../图片/Pasted%20image%2020250210145418.png)
  - C++
    - 待定，暂时未用到，有机会更新

- 打包本地化语言：项目设置勾选要打包的语种
  - ![Pasted image 20250210164057.png|700](../../../图片/Pasted%20image%2020250210164057.png)
# .po文件转excel
- 安装依赖库`pip install polib openpyxl pandas`
- 如果警告不是最新，更新python环境`python -m pip install --upgrade pip`
- 书写脚本
~~~Python
import polib
from openpyxl import Workbook

# 创建Excel工作簿
wb = Workbook()
ws = wb.active
ws.append(["原文（msgid）", "译文（msgstr）"])  # 添加标题行

# 读取.po文件
po_file = "your_file.po"
po = polib.pofile(po_file)

# 遍历条目并写入Excel
for entry in po:
    ws.append([entry.msgid, entry.msgstr])

# 保存Excel文件
wb.save("output.xlsx")
~~~
- 运行脚本转换`pyhton 脚本.py`