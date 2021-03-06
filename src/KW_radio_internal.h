/*
  Copyright (c) 2014, Leonardo Guilherme de Freitas
  All rights reserved.

  This software is provided 'as-is', without any express or implied
  warranty. In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

     1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.

     2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.

     3. This notice may not be removed or altered from any source
     distribution.
*/

#include "KW_label_internal.h"

#ifndef KW_RADIO_INTERNAL
#define KW_RADIO_INTERNAL

#ifdef __cplusplus
extern "C" {
#endif

struct KW_RadioManager {
  KW_Widget * items[1024];
  int         current_items;
  KW_Widget * checked;
  KW_Rect     selected;
  KW_Rect     unselected;
  void *      userdata;
};

typedef struct KW_RadioButton {
  KW_Label          label;
  KW_RadioManager * manager;
  int               value;
} KW_RadioButton;

void DestroyRadio(KW_Widget * widget);

#ifdef __cplusplus
}
#endif

#endif
