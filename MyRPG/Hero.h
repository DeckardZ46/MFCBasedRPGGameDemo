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
	int Position_x;      //λ��x
	int Position_y;      //λ��y
	int Position_Xcenter;//ͼƬ���ĵ�X
	int Position_Ycenter;//ͼƬ���ĵ�Y
	int width;           //ͼ����
	int height;          //ͼ��߶�
	int Direction;       //Ӣ��������
	//int Frame; ���Ǳ�ʾ��ʾ�ڼ���ͼ��һ�����ݳ�Ա
	int HP;              //Ѫ��
	int MaxHP;			 //���Ѫ��
	int ATK;             //������
	int DEF;             //������
	int Money;           //��Ǯ����
	int BulletBox;		 //����������������������ӵ�Ҫreload
	int Speed;           //�ƶ��ٶ�
	int Occupation;      //Ӣ��ְҵ

	CRect HeroRect;      //Ӣ�۵ľ�������
private:

};
#endif 