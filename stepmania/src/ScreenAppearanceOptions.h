/*
-----------------------------------------------------------------------------
 Class: ScreenAppearanceOptions

 Desc: Select a theme and announcer.

 Copyright (c) 2001-2002 by the person(s) listed below.  All rights reserved.
	Chris Danford
-----------------------------------------------------------------------------
*/

#include "Screen.h"
#include "ScreenOptions.h"
#include "Sprite.h"
#include "BitmapText.h"
#include "RandomSample.h"
#include "TransitionFade.h"
#include "Quad.h"


class ScreenAppearanceOptions : public ScreenOptions
{
public:
	ScreenAppearanceOptions();

private:
	void ImportOptions();
	void ExportOptions();

	void GoToNextState();
	void GoToPrevState();
};
