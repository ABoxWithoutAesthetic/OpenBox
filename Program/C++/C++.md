# C++
## 变量
```c++
#include <iostream>//头文件
using namespace std;//命名空间，例如string，打印不需要std::

int main()//main函数，所有的程序都要在这里运行
{
    int a = 1;//声明变量
    int b = 2;//整型
    float c = 2.5f;//浮点
    bool d = true;//布尔
    char e = 'q';//字符型
    string f = "hello world";//字符串
    cout << a <<"\n";
    cout << b <<"\n";
    cout << c <<"\n";
    cout << d <<"\n";
    cout << e << "\n";
    cout << f << "\n";
    system("pause");
}
```
## 运算
### 基础运算
~~~C++
#include <iostream>
using namespace std;

int main()
{
	float a, b;//同类型变量可以用逗号一起声明
	float c, d, e, f, g, h, i, j, k, l,m;
	a = 2.0f;
	b = 4.0f;
	c = a + b;//加法
	d = a - b;//减法
	e = a * b;//乘法
	f = a / b;//除法
	g = 1;
    h = 2;
	i = 4;
	j = 5;
	g++;//自增
	h--;//自减
	i += 2;//加等
	j -= 2;//减等
	cout << c << "\n";
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;
	cout << g << endl;
	cout << h << endl;
	cout << i << endl;
	cout << j << endl;


	system("pause");
}
~~~
### 关系运算
~~~C++
#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 2;
	bool c,d,e,f,g,h;
	c = (a == b);//等于
	d = (a != b);//不等于
	e = (a < b);//小于
	f = (a > b);//大于
	g = (a <= b);//小于等于
	h = (a >= b);//大于等于
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;
	cout << g << endl;
	cout << h << endl;
	system("pause");
}
~~~
### 逻辑运算
~~~C++
#include <iostream>
using namespace std;

int main()
{
	bool a = true;
	bool b = false;
	bool c, d, e;
	c = a && b;//与
	d = a || b;//或
	e = !a;//非
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	system("pause");
}
~~~
### 高级数学运算
~~~C++
#include <iostream>
#include <cmath>//高级数学运算，但是已经包含在了<iostream>里面
using namespace std;
#define pi 3.1415926//定义pi

int main()
{
	int a = 2;
	int b = 60;
	cout <<sqrt(a)<<endl;//开方
	cout << cos(b*pi/180.0f) << endl;//cos需要将角度转换成弧度，角度=弧度*Π
	system("pause");
}
~~~
## 数组
~~~C++
#include <iostream>
using namespace std;
#include <vector>//动态数组，不包含在iostream里面

int main()
{
	int health[10];//定义数组长度
	health[4] = 5;//给数组的某一个变量赋值
	int a = health[4];
	cout << a << endl;

	cout << health[10] << endl;//数组越界

	vector<int> age;//定义动态数组
	age.push_back(1);//push_back给数组添加值
	age.push_back(3);
	int b = age[1];
	int c = age[0];
	cout << b << endl;
	cout << c << endl;
	cout << age.size() << endl;//打印数组长度
	age.push_back(10);
	cout << age.size() << endl;
	cout << age[2] << endl;
	system("pause");
}
~~~
## 逻辑
### 判断
~~~C++
#include <iostream>
using namespace std;

int main()
{
	float health;
	health = 100.f;
	health -= 100;
	cout << health << endl;
	if (health >= 80)//条件
	{
		cout << "血量还行" << endl;
	}
	else if (health <= 80&&health>0)//条件，可以有无数个
	{
		cout << "血量较低" << endl;
	}
	else//其余条件
	{	
		cout << "角色已死亡" << endl;
	}
	
	
	system("pause");
}
~~~
### 循环
~~~C++
#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	for (int i = 0; i < 15; i++)//for循环
	{
		if (i > 5)
		{
			break;
		}
		if (num > 50)
		{
			continue;//符合条件，直接跳过本次循环，进入下一次循环
		}
		num += i;
	}
	cout << num << endl;
	while (num < 200)//while循环
	{
		if (num > 150)
		{
			break;//符合条件，跳出循环，循环结束
		}
		num += 6;
	}
	cout << num << endl;
	system("pause");
}
~~~
## 函数
### 声明、定义、返回值
~~~C++
#include <iostream>
using namespace std;

int wash();//声明函数，下方定义函数，int代表函数的返回值类型为整型，void为空

int main()
{
	wash();//调用函数
	int a = wash();//将函数的返回值赋予a
	cout << a << endl;
	system("pause");
}

int wash()//定义函数
{
	cout << "打开洗衣机" << endl;
	cout << "放入衣服" << endl;
	cout << "放入洗衣粉" << endl;
	cout << "开始洗衣服" << endl;
	return 2;//return后的逻辑不会执行
	cout << "我会执行吗";
}
~~~
### 参数、作用域
~~~C++
#include <iostream>
using namespace std;

int max(float a, float b=1.0);//a，b为函数内变量，仅在函数内起作用，函数外仍然可以声明同名变量，同时参数类型可以和函数类型不同.如果给参数赋值，调用的时候可以不赋值，如果赋值则使用输入的参数

int main()
{
	float a = 19.9f;
	float b = 6.6f;
	cout << max(a, b) << endl;
	system("pause");
}

int max(float a, float b)
{
	if (a > b)
		return a;
	else
		return b;

}
~~~
### 递归
~~~C++
#include <iostream>
using namespace std;

int Add(int a);

int main()
{
	int res = Add(10);
	cout << res << endl;

	system("pause");
}

int Add(int a)
{
	if (a == 0)//跳出递归的条件
		return 20;
	else
	return Add(a - 1) + a;//计算a~0之间的数的和
}
~~~
## 枚举、调试、命名规范
~~~C++
#include <iostream>
using namespace std;

enum Week//枚举，week是自定义的和int同级别的变量类型
{
	Mon,
	Tue,
	Wed
};

int main()//左侧为红色断点，点击即可
{
	Week w1,w2,w3,w4;
	w1 = Mon;
	w2 = Tue;
	w3 = Wed;
	//w4 = Fri;Week变量类型只能赋值已经设定好的，不然就会报错
	switch (w3)//switch判断函数,判断条件必须是同类型变量，输入的也必须是
	{
	case Mon:
			cout <<"今天星期一"<< endl;
			break;
	case Tue:
		cout << "今天星期二" << endl;
		break;
	
	default://switch的默认路径
		cout << "error" << endl;
		break;
	}


	int enemyHealth = 100;//第一个单词首字母小写，后续都大写为小驼峰命名，函数、类的话就全首字母大写

	system("pause");
}
~~~
## 类与对象
~~~C++
#include <iostream>
using namespace std;

class enemy//创建一个类
{
public://公开访问
	string name="error";
	int health=-999;
private://禁止外部访问，又称封装
	int damage=-999;
public:
	enemy()//构造函数，和蓝图不同，就是起初始化的作用
	{
		cout << "创建了一个敌人" << endl;
	};
	enemy(int tempDamage)//同名不同参的构造函数
	{
		damage = tempDamage;
		cout << "创建了一个敌人" << endl;
		cout << "damage=" << damage << endl;
	};
	void setName(string tempName)
	{
		name = tempName;
		cout << name << endl;
	};
};


int main()
{
	enemy *solider = new enemy(90);//通过指针创建类的衍生，并根据输入的参数选择使用哪一个构造函数，
	solider->health = 50;
	cout <<"health="<< solider->health << endl;
	solider->setName("哥布林");
	

	system("pause");
}
~~~

## 封装、继承、多态
~~~C++
#include <iostream>
using namespace std;
class Animal//声明父类
{
public://公开，所有地方都能访问
	string name;
	void Walk()
	{
		cout << "动物行走" << endl;
	};
	virtual void Yell()//虚函数，子类可以重新定义
	{
		cout << "动物叫声" << endl;	
	};
	void TryYell()
	{
		Yell();
	};
private://私密，只有本类中可以访问
	int health;
protected://保护，子类中可以访问
	int damage;
	void TryWalk()
	{
		Walk();
	};
};

class Cat :public Animal//衍生子类
{
public:
	void Yell()
	{
		cout << "喵喵喵" << endl;
	};
	void CatTryWalk()
	{
		TryWalk();
	};
	void Walk()
	{
		cout << "猫猫行走" << endl;
	};
};

int main()
{
	Animal* a = new Animal;
	a->Walk();
	a->Yell();
	Cat* smallCat = new Cat;
	smallCat->Yell();
	smallCat->TryYell();
	smallCat->Walk();
	smallCat->CatTryWalk();
	smallCat->Walk();

	system("pause");
}
~~~
## 功能实现
### 整除运算
~~~C++
#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i <= 10000; i++ )
	{
		int a = (i % 7);
			if (a == 0)
			{
				cout << i << endl;
			}
			else
				continue;
	}
	system("pause");
}
~~~
### 冒泡排序
~~~C++
#include <iostream>
using namespace std;

int main()
{
	int order[10] = {5,4,3,2,1,10,6,8,7,9};//定义乱序数组
	int length = sizeof(order) / sizeof(order[0]);//求出数组长度
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j <length - 1 - i; j++)//将最大值放在最后最后一位
		{
			if (order[j] > order[j + 1])
			{
				int tempMax = order[j];
				order[j] = order[j + 1];
				order[j + 1] = tempMax;
			}
		}
	}
	for (int i = 0; i < 10; i++)//打印排序好的数组
	{
		cout << order[i] << endl;
	}
	system("pause");
}
~~~
### 教务系统
# U++
## 方法
### 生命值函数
~~~C++
bool ABaseCharacter::LoseHealth(EAttackType type, int32 Damage)  
{  
   if (bDead)//是否死亡  
   {  
      return true;  
   }   else  
   {  
   switch(type)  
   {   case EAttackType::Physical:  
      CurrentHealth-=Damage*(1-PropertyData.PhysicalArmor*0.05);  
      break;  
   case EAttackType::Magical:  
      CurrentHealth-=Damage*(1-PropertyData.MagicalArmor*0.05);  
      break;;  
   default:  
         UE_LOG(LogTemp,Error,TEXT("NoneAttackType!!!"));  
         }  
      OnHealthChange.Broadcast(); //调用委托事件
   if (CurrentHealth<=0)//生命值经过上述运算是否小于等于0  
   {  
      bDead=true;  
      ABaseCharacter::DeadEvent();  
      return true;  
   }   return false;  
   }}
~~~
### Buff系统
#### 创建Buff基类
##### .h
~~~C++
// Fill out your copyright notice in the Description page of Project Settings.  
  
#pragma once  
  
#include "CoreMinimal.h"  
#include "BaseCharacter.h"  
#include "Subsystems/WorldSubsystem.h"  
#include "BuffWorldSubsystem.generated.h"  
  
/**  
 * */  
UENUM()//创建buff类型枚举  
enum  EBuffType  
{  
   Speed,  
   AttackSpeed  
};  
  
UCLASS()//创建buff父类  
class UBuff : public UObject//没有实体的对象，继承自UObject  
{  
   GENERATED_BODY()  
protected://需定义buff对象，buff比率，持续时间，以及TimerHandle变量  
   float Rate;  
   float Duration;  
   FTimerHandle Timer;  
   ABaseCharacter* Character;  
public://声明附加buff虚函数，声明移除buff虚函数，声明初始化变量函数  
   virtual void Init(float R,float D);//初始化需要输入要初始化的变量  
   virtual void AttachBuff(ABaseCharacter* C);//附加buff需要输入要附加的类  
   virtual void DetachBuff();  
   };  
  
UCLASS()//创建子类也需要加UClass  
class USpeedBuff : public UBuff  
{  
   GENERATED_BODY()  
public:  
   virtual void AttachBuff(ABaseCharacter* C) override;  
   virtual void DetachBuff() override;  
   };  
  
UCLASS()  
class UAttackSpeedBuff:public UBuff  
{  
   GENERATED_BODY()  
public:  
   virtual void AttachBuff(ABaseCharacter* C) override;  
   virtual void DetachBuff() override;  
   };  
UCLASS()  
class TOWERDEFENCE_API UBuffWorldSubsystem : public UWorldSubsystem  
{  
   GENERATED_BODY()  
   UFUNCTION(BlueprintCallable,BlueprintPure)//声明生成buff函数，返回buff对象，需输入buff类，buff参数（比率，持续时间）  
   UBuff* CreateBuff(EBuffType Type,float R,float D);  
   UFUNCTION(BlueprintCallable)//生成添加buff函数，需输入角色类和buff类  
   void AttachBuff(ABaseCharacter* C,UBuff* Buff);  
};
~~~
##### .cpp
~~~C++
// Fill out your copyright notice in the Description page of Project Settings.  
  
  
#include "BuffWorldSubsystem.h"  
  
#include "GameFramework/CharacterMovementComponent.h"  
#include "Widgets/Text/ISlateEditableTextWidget.h"  
  
  
UBuff* UBuffWorldSubsystem::CreateBuff(EBuffType Type, float R, float D)  
{  
   UBuff* Buff;//定义buff变量，因为buff是对象，需要用指针  
   switch (Type)  
   {   case EBuffType::Speed:  
      Buff=NewObject<USpeedBuff>(this);  
      break;  
   case EBuffType::AttackSpeed:  
      Buff=NewObject<UAttackSpeedBuff>(this);  
      break;  
   default:  
      Buff=NewObject<UBuff>(this);  
   }   Buff->Init(R,D);//调用buff初始化函数  
   return Buff;//返回创建的buff  
}  
  
void UBuffWorldSubsystem::AttachBuff(ABaseCharacter* C, UBuff* Buff)  
{  
   Buff->AttachBuff(C);//调用buff类里面的添加buff函数  
}  
void UBuff::Init(float R, float D)//初始化buff值  
{  
   Rate=R;  
   Duration=D;  
}  
  
void UBuff::AttachBuff(ABaseCharacter* C)  
{  
   Character=C;  
   Character->AddBuff(this);//在角色类中创建buff列表，并在附加和移除是更细列表，this为自身相当于蓝图中的self  
   GetWorld()->GetTimerManager().SetTimer(Timer,this,&UBuff::DetachBuff,Duration);  
   //相当于蓝图中的根据函数名，时间循环调用函数的节点，设置添加buff后多久调用移除buff函数从而移除buff  
}  
  
void UBuff::DetachBuff()  
{  
   Character->RemoveBuff(this);  
   GetWorld()->GetTimerManager().ClearTimer(Timer);//停止调用  
}  
  
void USpeedBuff::AttachBuff(ABaseCharacter* C)  
{  
   Super::AttachBuff(C);//调用父类逻辑  
   Character->GetCharacterMovement()->MaxWalkSpeed*=Rate;  //设置速度  
}  
  
void USpeedBuff::DetachBuff()  
{  
   Super::DetachBuff();  
   Character->GetCharacterMovement()->MaxWalkSpeed/=Rate;  //还原速度  
}  
  
void UAttackSpeedBuff::AttachBuff(ABaseCharacter* C)  
{  
   Super::AttachBuff(C);  
   Character->PropertyData.CoolDownTime*=Rate;  //设置攻击速度  
}  
  
void UAttackSpeedBuff::DetachBuff()  
{  
   Super::DetachBuff();  
   Character->PropertyData.CoolDownTime/=Rate;  //还原攻击速度  
}
~~~