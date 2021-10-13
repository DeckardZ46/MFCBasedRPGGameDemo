#pragma once
#ifndef ITEM_H
#define ITEM_H
#include "Header.h"

#define EQUIPMENT 1
#define PROP 2

#define HEAD 1
#define BODY 2
#define FOOT 3
#define HAND 4

#define EMPTY 0							//注意 只有EMPTY是0！！！！
#define WOODWAND 1
#define WOODBOW 2
#define APPLE 3
#define VIOLETPOTION 4
#define HAT1 5
#define CLOTH1 6
#define SHOES1 7

#define EQUIPON 1
#define EQUIPOFF 2
class CItem
{
public:
	virtual void Equip(CHero&) = 0;
	virtual void GetOff(CHero&) = 0;
	virtual void Use(CHero&) = 0;
	void IniEmpty();
private:

public:
	int Count;
	int Type;
	int Name;
	int Part;
	int State;
	int FitOcc;				//该物品的适合职业
	int Value;
private:

};

class CEquipment:public CItem
{
public:
	virtual void Equip(CHero&)=0;
	virtual void GetOff(CHero&)=0;
private:

public:
	
private:
};

class CProp :public CItem
{
public:
	virtual void Use(CHero&)=0;
private:

public:

private:
};

class CWeapon :public CEquipment
{
public:
	CWeapon(int,int,int);
	void Use(CHero&);
	void Equip(CHero&);
	void GetOff(CHero&);
private:

public:
private:
};
class CArmour :public CEquipment
{
public:
	CArmour(int,int,int);
	void Use(CHero&);
	void Equip(CHero&);
	void GetOff(CHero&);
private:

public:
private:
};
class CHelmet :public CEquipment
{
public:
	CHelmet(int,int,int);
	void Use(CHero&);
	void Equip(CHero&);
	void GetOff(CHero&);
private:

public:
private:
};
class CShoes :public CEquipment
{
public:
	CShoes(int,int,int);
	void Use(CHero&);
	void Equip(CHero&);
	void GetOff(CHero&);
private:

public:
private:
};

class CApple :public CProp
{
public:
	CApple(int,int);
	void Use(CHero&);
	void Equip(CHero&);
	void GetOff(CHero&);
private:

public:
private:
};
class CVioletPotion :public CProp
{
public:
	CVioletPotion(int,int);
	void Use(CHero&);
	void Equip(CHero&);
	void GetOff(CHero&);
private:

public:
private:
};
#endif // !ITEM_H
