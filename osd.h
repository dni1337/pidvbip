#ifndef _OSD_H
#define _OSD_H

#include "libs/vgfont/vgfont.h"

struct osd_t {
  GRAPHICS_RESOURCE_HANDLE img_bg;
  GRAPHICS_RESOURCE_HANDLE img;
  int display_width;
  int display_height;
};

void osd_init(struct osd_t* osd);
void osd_done(struct osd_t* osd);
void osd_show_info(struct osd_t* osd, int channel_id);
void osd_show_newchannel(struct osd_t* osd, int channel);
void osd_clear(struct osd_t* osd);
void osd_clear_newchannel(struct osd_t* osd);

#endif
