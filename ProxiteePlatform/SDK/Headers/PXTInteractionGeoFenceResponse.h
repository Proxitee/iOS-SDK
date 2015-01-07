//
//  PXTInteractionGeoFenceResponse.h
//  ProxiteePlatform
//
//  Created by Michael on 12/18/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "PXTBaseResponse.h"
#import "PXTInteractionGeoFenceResult.h"

@interface PXTInteractionGeoFenceResponse : PXTBaseResponse

@property (nonatomic, strong) PXTInteractionGeoFenceResult *result;

@end
