#include "stdafx.h"
#include "Monster.h"
#include "MyRPG.h"


void CMonster::Move()
{
	
}

void CMonster::Attack()
{

}
void CMonster::Appear()
{
	switch (Type)
	{
	case BLACKGHOST:
		width = 70;
		height = 70;
		Disappear = false;
		Direction = LEFT;
		LateDirec = LEFT;
		Speed = 2;
		ATK = 5;
		HP = 10;
		DEF = 3;
		MonsterRect.top = Position_y;
		MonsterRect.left = Position_x;
		MonsterRect.bottom = Position_y + height;
		MonsterRect.right = Position_x + width;
		break;
	case MUDMONSTER:
		width = 70;
		height = 70;
		Disappear = false;
		Direction = RIGHT;
		LateDirec = RIGHT;
		Speed = 1;
		ATK = 10;
		HP = 30;
		DEF = 4;
		MonsterRect.top = Position_y;
		MonsterRect.left = Position_x;
		MonsterRect.bottom = Position_y + height;
		MonsterRect.right = Position_x + width;
		break;

	}
}
