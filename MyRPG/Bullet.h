#pragma once
#ifndef BULLET_H
#define BULLET_H

#define PREPARED 0
#define DISAPPEAR 1
#define FLYING 2

#define ARROW 0
#define ORB 1
#define MUDMONSTERBULLET 2
#define BLACKGHOSTBULLET 3
class CBullet
{
public:
private:

public:
	int Position_x;		 //图片位置x
	int Position_y;		 //图片位置y
	int width;           //图像宽度
	int height;          //图像高度
	int Direction;       //子弹面向方向
	int State;           //子弹运动状态
	int Speed;			 //子弹速度
	int Type;			 //子弹种类
	int ATK;			 //子弹携带伤害
private:
};

#endif // !BULLET_H

