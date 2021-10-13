#pragma once

#ifndef HERO_H
#define HERO_H


//#define UP 0
//#define DOWN 1
//#define LEFT 2
//#define RIGHT 3
#define EMPTY 0
#define HUNTER 1  
#define MAGE 2
#define ALLOCC 3  



class CHero
{
public:

	void Move();
private:


public:
	int Position_x;      //位置x
	int Position_y;      //位置y
	int Position_Xcenter;//图片中心点X
	int Position_Ycenter;//图片中心点Y
	int width;           //图像宽度
	int height;          //图像高度
	int Direction;       //英雄面向方向
	//int Frame; 这是表示显示第几张图的一个数据成员
	int HP;              //血量
	int MaxHP;			 //最大血量
	int ATK;             //攻击力
	int DEF;             //防御力
	int Money;           //金钱多少
	int BulletBox;		 //弹夹数量，发射完该数量子弹要reload
	int Speed;           //移动速度
	int Occupation;      //英雄职业

	CRect HeroRect;      //英雄的矩形区域
private:

};
#endif 