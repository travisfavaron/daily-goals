//
//  GoalItem.h
//  Daily Goals
//
//  Created by Travis Favaron on 2/1/14.
//  Copyright (c) 2014 Travis Favaron. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GoalItem : NSObject


@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;


@end
