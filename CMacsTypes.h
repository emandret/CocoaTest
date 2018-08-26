#ifndef CMACS_CMACSTYPES_H
#define CMACS_CMACSTYPES_H

#include <objc/message.h>
#include <objc/runtime.h>

typedef struct CMPoint {
    double x;
    double y;
} CMPoint;

typedef struct CMSize {
    double width;
    double height;
} CMSize;

typedef struct CMRect {
    CMPoint origin;
    CMSize size;
} CMRect;

typedef struct AppDel {
    Class isa;
    /// Will be an NSWindow later
    id window;
} AppDelegate;

typedef enum NSMasks {
    NSBorderlessWindowMask = 0,
    NSTitledWindowMask = 1 << 0,
    NSClosableWindowMask = 1 << 1,
    NSMiniaturizableWindowMask = 1 << 2,
    NSResizableWindowMask = 1 << 3,
} NSMasks;

///
/// Functions pointers typedefs
///
typedef void (*CMacsVoidMessage)(id, SEL, void*);
typedef id (*CMacsSimpleMessage)(id, SEL);
typedef id (*CMacsRectMessage)(id, SEL, CMRect);
typedef id (*CMacsWindowInitMessage)(id, SEL, CMRect, int, int, bool);

///
/// Extern variables declarations
///
extern CMacsSimpleMessage cmacs_simple_msgSend;
extern CMacsVoidMessage cmacs_void_msgSend;
extern CMacsRectMessage cmacs_rect_msgSend;
extern CMacsWindowInitMessage cmacs_window_init_msgSend;

#endif
