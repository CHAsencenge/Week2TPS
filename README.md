# Week2GameVideo以及APK资源：

链接：https://pan.baidu.com/s/1W4X3htIChIBeHjgDa5QTSw 
提取码：zx18 



# Week4GameVideo以及APK资源：

链接：https://pan.baidu.com/s/1yMLxooQ-eHIpVdlbkfy85A 
提取码：7oii 



# Week2 实现功能：

### 实现打靶功能

### 对打靶计分划分三个等级环，内环记三分，中环记两分，外环记一分

### 添加HUD显示准星和统计分数

### 绑定枪支并实现视角跟随枪支准星瞄准方向，利用采样的帧构建混合空间使人物能举枪瞄准各个方向

### 当人物扭转角度过大时，使人物腿部缓慢扭转至枪口指向方向



# Week2 Content说明

#### 子弹蓝图：Content/BluePrints/Bullet.uasset

#### 准星HUD：Content/BluePrints/HUD.uasset

#### 打靶计分HUD：Content/BluePrints/PointsHUD.uasset

#### 靶位蓝图：Content/BluePrints/Target.uasset

#### 人物：Content/ThirdPersonCPP/Blueprints/ThirdPersonCharacter.uasset

#### 枪械：Content/ThirdPersonCPP/Blueprints/White_SniperRifleuasset

#### 用于人物持枪瞄准各个方向的混合空间及其对应帧：Content/AnimStarterPack/AnimaOffset.uasset



# Week4 实现功能：

### 利用UMG完成人物血条绑定

### 添加加血包和减血包，使人物跑到加血包位置增加20点血量，跑到减血包位置减少30点血量

### 利用UMG实现将由吃到加血包或者减血包导致的血量值的变化体现到人物血条和左下方的Health值显示

### 利用UMG实现三个按钮事件，分别是跳跃、单发子弹发射、连发子弹发射