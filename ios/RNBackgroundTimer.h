//
//  RNBackgroundTimer.h
//  react-native-background-timer
//
//  Created by IjzerenHein on 06-09-2016.
//  Copyright (c) ATO Gear. All rights reserved.
//

#import <React/RCTBridgeModule.h>
#if __has_include("RCTEventEmitter.h")
#import "RCTEventEmitter.h"
#import "RCTLog.h"
#else
#import <React/RCTEventEmitter.h>
#import <React/RCTLog.h>
#endif

@interface RNBackgroundTimer : RCTEventEmitter <RCTBridgeModule>
    + (id)sharedInstance;
    - (void) _stop;
    - (void) _start;
@end
