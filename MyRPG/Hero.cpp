
#include "stdafx.h"
#include "Hero.h"
#include "MyRPG.h"


void CHero::Move()
{
	CMyRPGApp *pApp = (CMyRPGApp*)AfxGetApp();
	if (pApp->OnControl == true)
	{
		if (pApp->KeyUp == true&&
			pApp->KeyDown == false&&
			pApp->KeyLeft == false&&
			pApp->KeyRight == false)
		{
			Position_y -= Speed;
		}
		if (pApp->KeyUp == false &&
			pApp->KeyDown == true &&
			pApp->KeyLeft == false &&
			pApp->KeyRight == false)
		{
			Position_y += Speed;
		}
		if (pApp->KeyUp == false &&
			pApp->KeyDown == false &&
			pApp->KeyLeft == true &&
			pApp->KeyRight == false)
		{
			Position_x -= Speed;
		}
		if (pApp->KeyUp == false &&
			pApp->KeyDown == false &&
			pApp->KeyLeft == false &&
			pApp->KeyRight == true)
		{
			Position_x += Speed;
		}
		HeroRect.top = Position_y;
		HeroRect.left = Position_x;
		HeroRect.bottom = Position_y + height;
		HeroRect.right = Position_x + width;
	}
}

