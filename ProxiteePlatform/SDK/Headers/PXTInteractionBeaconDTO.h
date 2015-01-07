//
//  PXTInterationBeaconDTO.h
//  ProxiteePlatform
//
//  Created by Michael on 12/18/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "JSONModel.h"

@protocol PXTInteractionBeaconDTO
@end

@interface PXTInteractionBeaconDTO : JSONModel

@property (strong, nonatomic) NSString *interactionId;
@property (strong, nonatomic) NSString *uuid;
@property (assign, nonatomic) NSNumber *major;
@property (assign, nonatomic) NSNumber *minor;
@property (strong, nonatomic) NSString *trigger;

@end
