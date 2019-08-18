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

#import "APAuthInfo.h"
#import "APOrderInfo.h"
#import "APRSASigner.h"
#import "openssl_wrapper.h"

FOUNDATION_EXPORT double AliPayToolVersionNumber;
FOUNDATION_EXPORT const unsigned char AliPayToolVersionString[];

