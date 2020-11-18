# Week2GameVideo以及APK资源：

链接：https://pan.baidu.com/s/1W4X3htIChIBeHjgDa5QTSw 
提取码：zx18 



# Week4GameVideo以及APK资源：

链接：https://pan.baidu.com/s/1yMLxooQ-eHIpVdlbkfy85A 
提取码：7oii 



# Week5&Week6GameVideo以及APK资源：





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

### **计分显示：**打靶计分显示在左上角

### 利用UMG完成人物血条绑定

### 添加加血包和减血包，使人物跑到加血包位置增加20点血量，跑到减血包位置减少30点血量

### **显示人物信息，主要为血量值Text信息和血条信息：**利用UMG实现将由吃到加血包或者减血包导致的血量值的变化体现到人物血条和左下方的Health值显示

### **基础操作按钮：**利用UMG实现三个按钮事件，分别是跳跃、单发子弹发射、连发子弹发射



# Week5 & Week6 实现功能：

### **实现基础的移动功能：**主角的动画蓝图能够实现基础的移动功能，包括站立，跑，跳跃的动作表现

### **角色的俯仰表现**

### **角色的开火表现**：单发子弹发射时枪口一次后座震动，连发子弹发射（四发）时枪口四次后座震动，子弹数为0时Fire枪口不进行后座震动

### **角色在俯仰的同时进行开火的表现**

### **使用蒙太奇完成特殊动作表现:**  实现了角色为武器**装子弹**的动作表现，借助蒙太奇搭配定时器功能实现持续按压按键时为枪械**持续装弹**，每秒添加五发子弹

### 利用分层动画（Layered Blend per Bone）实现装子弹动作的**站立装弹**和**跑步时装弹**

### **实现按下Alt切换为自由视角（移动端通过Touch 2替代Alt按键）：** 普通视角中，人物或枪口的朝向为摄像机指向的方向，当摄像机旋转角度过大时，人物会平滑旋转一定角度；切换到**自由视角**时，**当摄像机在人物身后时**，人物面部朝向仍为摄像机指向的方向，**当摄像机转到人物身前面向人物时**，人物面部会朝向相机；并且相机在正面俯拍人物时，人物会仰头面向相机，相机仰拍人物时，人物会低头面向相机 