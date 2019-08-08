#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "TestModule.h"

FOUNDATION_EXPORT double test8_8VersionNumber;
FOUNDATION_EXPORT const unsigned char test8_8VersionString[];

