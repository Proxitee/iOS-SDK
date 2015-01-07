//
//  PXTPlatformGeoFenceActivityDTO.h
//  ProxiteePlatform
//
//  Created by Michael on 10/23/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "JSONModel.h"

@protocol PXTPlatformGeoFenceActivityDTO

@end

@interface PXTPlatformGeoFenceActivityDTO : JSONModel

@property (strong, nonatomic) NSString *_id;
@property (strong, nonatomic) NSString *trigger;
@property (strong, nonatomic) NSDate *at;

@end