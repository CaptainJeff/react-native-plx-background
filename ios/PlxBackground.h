// #import <React/RCTBridgeModule.h>

// @interface PlxBackground : NSObject <RCTBridgeModule>

// @end

#ifndef Background_h
#define Background_h

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#elif __has_include(“RCTBridgeModule.h”)
#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"
#else
#import "React/RCTBridgeModule.h"
#import "React/RCTEventEmitter.h"
#endif

#import <BackgroundTasks/BackgroundTasks.h>

@interface PLXBackground : RCTEventEmitter<RCTBridgeModule>
- (void)backgroundTaskExecuting:(BGProcessingTask*)task;
@end

#endif /* Background_h */
