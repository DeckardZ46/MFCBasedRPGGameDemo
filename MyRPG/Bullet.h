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
	int Position_x;		 //ͼƬλ��x
	int Position_y;		 //ͼƬλ��y
	int width;           //ͼ����
	int height;          //ͼ��߶�
	int Direction;       //�ӵ�������
	int State;           //�ӵ��˶�״̬
	int Speed;			 //�ӵ��ٶ�
	int Type;			 //�ӵ�����
	int ATK;			 //�ӵ�Я���˺�
private:
};

#endif // !BULLET_H

