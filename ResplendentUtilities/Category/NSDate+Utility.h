//
//  NSDate+Utility.h
//  Memeni
//
//  Created by Benjamin Maer on 9/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Utility)

-(NSString*)daysOrHoursOrMinutesOrSecondsString;

-(NSTimeInterval)daysOrHoursOrMinutesOrSecondsTypeTimeInterval;

@end