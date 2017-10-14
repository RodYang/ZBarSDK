//
//  NSTimer+Extension.h
//  LotusGO
//
//  Created by RodYang on 2016/12/27.
//  Copyright © 2016年 cplotus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (Extension)
+ (NSTimer *)ez_scheduledTimerWithTimeInterval:(NSTimeInterval)inTimeInterval block:(void (^)())inBlock repeats:(BOOL)inRepeats;

+ (NSTimer *)ez_timerWithTimeInterval:(NSTimeInterval)inTimeInterval block:(void (^)())inBlock repeats:(BOOL)inRepeats;

//+ (void)__executeTimerBlock:(NSTimer *)inTimer;

@end
