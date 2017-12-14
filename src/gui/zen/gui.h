/******************************************************************************/
/* This file has been generated by the uGFX-Studio                            */
/*                                                                            */
/* http://ugfx.org                                                            */
/******************************************************************************/

#ifndef _GUI_H_
#define _GUI_H_

#include "gfx.h"

#include "gui_router.h"



extern font_t dejavu_sans_10;
extern font_t dejavu_sans_16;
extern font_t fixed_7x14;




extern GHandle ghContainer_PageTitle;
extern GHandle ghLabelPageTitle;

extern GHandle ghLabelClockTime;


// Function Prototypes
void guiCreate(void);

//void guiShowPage(unsigned pageIndex);
void guiEventLoop(void);


//void create_PageTitle(void);

void gui_set_title(GUIWindow *win);


#endif /* _GUI_H_ */
