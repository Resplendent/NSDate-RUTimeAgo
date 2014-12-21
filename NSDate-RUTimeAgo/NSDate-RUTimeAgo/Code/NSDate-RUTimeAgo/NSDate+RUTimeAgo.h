//
//  NSDate+RUUtility.h
//  Resplendent
//
//  Created by Benjamin Maer on 9/6/12.
//  Copyright (c) 2012 Resplendent G.P.. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSDate_RUTimeAgoFormatter.h"





@interface NSDate (RUTimeAgo)

-(NSString*)ru_timeAgoString;
-(NSString*)ru_timeAgoStringWithFormatter:(id<NSDate_RUTimeAgoFormatter>)formatter;

//Returns 0 if the date is over a month old, otherwise returns number of seconds for the min unit of the time ago string
-(NSTimeInterval)ru_minTimeAgoUnitSeconds;

+(id<NSDate_RUTimeAgoFormatter>)ru_timeAgoDefaultFormatter;
+(void)ru_setTimeAgoDefaultFormatter:(id<NSDate_RUTimeAgoFormatter>)formatter;

@end
