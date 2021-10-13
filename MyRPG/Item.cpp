#include "stdafx.h"
#include "Header.h"


void CItem::IniEmpty()
{
	Count = EMPTY;
	Type = EMPTY;
	Name = EMPTY;
	Part = EMPTY;
	State = EMPTY;
	FitOcc = EMPTY;
	Value = EMPTY;
}


void CWeapon::Equip(CHero &hero)
{
	switch(Name)
	{ 
	case WOODBOW:
		hero.ATK += 4;
		break;
	case WOODWAND:
		hero.ATK += 9;
		break;
	}
}
void CWeapon::GetOff(CHero &hero)
{
	switch (Name)
	{
	case WOODBOW:
		hero.ATK -= 4;
		break;
	case WOODWAND:
		hero.ATK -= 9;
		break;
	}
}
void CWeapon::Use(CHero &hero)
{

}
CWeapon::CWeapon(int name,int fitocc,int value)
{
	FitOcc = fitocc;
	Name = name;
	Part = HAND;
	Type = EQUIPMENT;
	Count = 1;
	Value = value;
}


void CHelmet::Equip(CHero &hero)
{
	switch (Name)
	{
	case HAT1:
		hero.DEF += 3;
		break;
	}
}
void CHelmet::GetOff(CHero &hero)
{
	switch (Name)
	{
	case HAT1:
		hero.DEF -= 3;
		break;
	}
}
void CHelmet::Use(CHero &hero)
{

}
CHelmet::CHelmet(int name, int fitocc, int value)
{
	FitOcc = fitocc;
	Name = name;
	Part = HEAD;
	Type = EQUIPMENT;
	Count = 1;
	Value = value;
}


void CArmour::Equip(CHero &hero)
{
	switch (Name)
	{
	case CLOTH1:
		hero.MaxHP += 10;
		hero.DEF += 2;
		break;
	}
}
void CArmour::GetOff(CHero &hero)
{
	switch (Name)
	{
	case CLOTH1:
		hero.MaxHP -= 10;
		hero.DEF -= 2;
		break;
	}
}
void CArmour::Use(CHero &hero)
{

}
CArmour::CArmour(int name,int fitocc, int value)
{
	FitOcc = fitocc;
	Name = name;
	Part = BODY;
	Type = EQUIPMENT;
	Count = 1;
	Value = value;
}

void CShoes::Equip(CHero &hero)
{
	switch (Name)
	{
	case SHOES1:
		hero.DEF += 1;
		hero.Speed += 2;
		break;
	}
}
void CShoes::GetOff(CHero &hero)
{
	switch (Name)
	{
	case SHOES1:
		hero.DEF -= 1;
		hero.Speed -= 2;
		break;
	}
}
void CShoes::Use(CHero &hero)
{

}
CShoes::CShoes(int name,int fitocc, int value)
{
	FitOcc = fitocc;
	Name = name;
	Part = FOOT;
	Type = EQUIPMENT;
	Count = 1;
	Value = value;
}

CApple::CApple(int count, int value)
{
	Count = count;
	Value = value;
	Name = APPLE;
	Type = PROP;
}
void CApple::Use(CHero &hero)
{
	if (Count > 0)
	{
		Count--;
		hero.HP += 10;
		if (hero.HP > hero.MaxHP)
		{
			hero.HP = hero.MaxHP;
		}
	}
}
void CApple::Equip(CHero &hero)
{

}
void CApple::GetOff(CHero &hero)
{
	
}

CVioletPotion::CVioletPotion(int count,int value)
{
	Count = count;
	Value = value;
	Name = VIOLETPOTION;
	Type = PROP;
}
void CVioletPotion::Use(CHero &hero)
{
	if (Count > 0)
	{
		Count--;
		hero.HP += 20;
		if (hero.HP > hero.MaxHP)
		{
			hero.HP = hero.MaxHP;
		}
	}
}
void CVioletPotion::Equip(CHero &hero)
{

}
void CVioletPotion::GetOff(CHero &hero)
{

}