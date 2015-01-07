//
//  PXTActionRepository.h
//  ProxiteePlatform
//
//  Created by Michael on 6/25/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PXTAction.h"

@interface PXTActionRepository : NSObject

@property (strong, nonatomic) NSMutableDictionary *actions;

-(void)addWithType:(NSString *)type action:(id<PXTAction>)action;
-(void)removeWithType:(NSString *)type;
-(id<PXTAction>)getWithType:(NSString *)type;

@end
