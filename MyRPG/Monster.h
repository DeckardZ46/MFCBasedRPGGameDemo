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
	int Position_x;      //λ��x
	int Position_y;      //λ��y
	int Position_Xcenter;//ͼƬ���ĵ�X
	int Position_Ycenter;//ͼƬ���ĵ�Y
	int width;           //ͼ����
	int height;          //ͼ��߶�
	int Direction;       //����������
	int LateDirec;		 //��һ��������
	//int Frame; ���Ǳ�ʾ��ʾ�ڼ���ͼ��һ�����ݳ�Ա
	int HP;              //Ѫ��
	int ATK;             //������
	int DEF;             //������
	int Speed;           //�ƶ��ٶ�
	bool Disappear;      //�����Ƿ�Ӧ����ʧ
	int Type;			 //���������
	bool IsOnAttack;	 //�Ƿ��ڷ����ӵ�

	CRect MonsterRect;              //����ľ�������
private:

};

#endif 
