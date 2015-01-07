//
//  PXTInterationGeoFenceRequest.h
//  ProxiteePlatform
//
//  Created by Michael on 12/18/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "PXTInteractionRequest.h"

@interface PXTInteractionGeoFenceRequest : PXTInteractionRequest

@property (nonatomic, strong) NSString *interactionId;
@property (nonatomic, strong) NSString *trigger;
@property (nonatomic, strong) NSString *uuid;

@end
