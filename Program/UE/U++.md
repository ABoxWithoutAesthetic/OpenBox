##### 变量
###### 枚举
~~~C++
UENUM(BlueprintType)
enum class EAttackType:uint8
{
None,
Physical,
Magical
};
~~~
###### 结构体
~~~C++
USTRUCT(BlueprintType)
struct FCharacterProperty:Public FtableRowBase//继承数据表格的类型，可以读取Datatable，结构体的名字必须加F
{
GENERATED_BODY()
UPROPERTY(BluprintReadOnly,EditAnywhere)
};
~~~
###### 定义规则
~~~C++
UPROPERTY(BlueprintReadOnly,EditAnywhere)//定义变量时，需要加属性说明符，此处为蓝图可读取，可编辑
int32 MaxHealth;
UPROPERTY(BlueprintReadOnly,EditAnywhere)
FString Name;
UPROPERTY(BlueprintReadOnly,EditAnywhere)
EAttackType attackType;

FTimerHandle Timer;
GetWorld()->GetTimerManager().SetTimer(Timer,this,&Function(),Duration);
GetWorld()->GetTimerManager().ClearTimer(Timer);
~~~
###### 类型选择变量
~~~C++
UPROPERTY(BlueprintReadOnly,EditAnywhere)
TSubclassof<ABaseCharacter> BPClass;//定义类型选择变量，继承自ABaseCharacter的子类
~~~
##### 函数
###### 声明：声明在.h文件
~~~C++
UPROPERTY(BlueprintCallable,BlueprintPure)
int32 FunctionName(int a,int b);
~~~
###### 定义：定义在cpp文件
~~~C++
int32 声明的类::FunctionName(int a,int b)
{
return 0;
}
~~~
###### 虚函数父类声明
~~~C++
virtual int32 FunctionName(int a,int b) 
~~~
###### 虚函数子类重载
~~~C++
UFUNCTION(BlueprintCallable)
virtual int32 FunctionName(int a,int b) override;//重载关键字
~~~
###### C++声明、蓝图定义
~~~C++
UPROPERTY(BlueprintImplementableEvent)
int FunctionName();
~~~
##### 方法
###### 读取DataTable
~~~C++
EnemyData=*DT->FindRow<结构体的类>(RowName,FString(""))//通过数据表格给EnemyData赋值
~~~
###### 获取组件并给组件中的变量赋值
~~~C++
GetCharacterMovement()->MaxWalkSpeed=10;//获取组件并给移动组件的最大行走速度赋值
~~~
###### 随机值函数
~~~C++
a=FMath::RandRange(最小值，最大值)；
~~~
###### Log：打印
~~~C++
UE_LOG(LogTemp,Log,Text("要打印的值"))
~~~
###### 委托
- 相当于事件分发器
~~~c++
//声明委托
DECLARE_DYNAMIC_MUTICAST_DELEGATE(FOnHealthChangeDelegate);

//定义委托
UPROPERTY(BlueprintAssignable)
FOnHealthChangeDelegate OnHealthChange;

//调用委托
OnHealthChange->Broadcast();

//蓝图绑定委托，直接搜定义的名字即可
~~~

