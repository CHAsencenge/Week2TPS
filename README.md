# GameVideo以及APK资源：

链接：https://pan.baidu.com/s/1W4X3htIChIBeHjgDa5QTSw 
提取码：zx18 



# 实现功能：

### 实现打靶功能

### 对打靶计分划分三个等级环，内环记三分，中环记两分，外环记一分

### 添加HUD显示准星和统计分数

### 绑定枪支并实现视角跟随枪支准星瞄准方向，利用采样的帧构建混合空间使人物能举枪瞄准各个方向

### 当人物扭转角度过大时，使人物腿部缓慢扭转至枪口指向方向



# Content说明

#### 子弹蓝图：Content/BluePrints/Bullet.uasset

#### 准星HUD：Content/BluePrints/HUD.uasset

#### 打靶计分HUD：Content/BluePrints/PointsHUD.uasset

#### 靶位蓝图：Content/BluePrints/Target.uasset

#### 人物：Content/ThirdPersonCPP/Blueprints/ThirdPersonCharacter.uasset

#### 枪械：Content/ThirdPersonCPP/Blueprints/White_SniperRifleuasset

#### 用于人物持枪瞄准各个方向的混合空间及其对应帧：Content/AnimStarterPack/AnimaOffset.uasset