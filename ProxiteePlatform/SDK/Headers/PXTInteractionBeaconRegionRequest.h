//
//  PXTInteractionBeaconRegionRequest.h
//  ProxiteePlatform
//
//  Created by Michael on 12/18/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "PXTInteractionRequest.h"

@interface PXTInteractionBeaconRegionRequest : PXTInteractionRequest

@property (nonatomic, strong) NSString *interactionId;
@property (nonatomic, strong) NSString *trigger;

@end
