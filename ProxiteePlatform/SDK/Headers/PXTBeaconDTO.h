//
//  PXTBeaconDTO.h
//  ProxiteePlatform
//
//  Created by Michael on 7/2/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "JSONModel.h"

@protocol PXTBeaconDTO

@end

@interface PXTBeaconDTO : JSONModel

@property (strong, nonatomic) NSString *id;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *located;
@property (strong, nonatomic) NSString *uuid;
@property (strong, nonatomic) NSNumber *major;
@property (strong, nonatomic) NSNumber *minor;

@end