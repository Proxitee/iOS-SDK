//
//  PXTPlatformBeaconActivity.h
//  ProxiteePlatform
//
//  Created by Michael on 6/23/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import "JSONModel.h"

@protocol PXTPlatformBeaconActivityDTO
@end

@interface PXTPlatformBeaconActivityDTO : JSONModel

@property (strong, nonatomic) NSString *uuid;
@property (assign, nonatomic) NSNumber *major;
@property (assign, nonatomic) NSNumber *minor;
@property (strong, nonatomic) NSString *trigger;
@property (strong, nonatomic) NSDate *at;

@end
