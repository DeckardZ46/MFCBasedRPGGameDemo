#pragma once

#ifndef MONSTER_H
#define MONSTER_H


#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define STOPMOVE 4

#define BLACKGHOST 10
#define MUDMONSTER 11

#include "MyRPG.h"

class CMonster
{
public:
	void Move();
	void Attack();
	void Appear();

private:

public:
	int Position_x;      //位置x
	int Position_y;      //位置y
	int Position_Xcenter;//图片中心点X
	int Position_Ycenter;//图片中心点Y
	int width;           //图像宽度
	int height;          //图像高度
	int Direction;       //怪物面向方向
	int LateDirec;		 //上一个面向方向
	//int Frame; 这是表示显示第几张图的一个数据成员
	int HP;              //血量
	int ATK;             //攻击力
	int DEF;             //防御力
	int Speed;           //移动速度
	bool Disappear;      //怪物是否应该消失
	int Type;			 //怪物的种类
	bool IsOnAttack;	 //是否在发射子弹

	CRect MonsterRect;              //怪物的矩形区域
private:

};

#endif 
