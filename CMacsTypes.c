#include "CMacsTypes.h"

///
/// Func pointers declaration
///
CMacsSimpleMessage cmacs_simple_msgSend = (CMacsSimpleMessage)objc_msgSend;
CMacsVoidMessage cmacs_void_msgSend = (CMacsVoidMessage)objc_msgSend;
CMacsRectMessage cmacs_rect_msgSend = (CMacsRectMessage)objc_msgSend;
CMacsWindowInitMessage cmacs_window_init_msgSend = (CMacsWindowInitMessage)objc_msgSend;
