//
//  PXTInteractionBeaconRegionResponse.h
//  ProxiteePlatform
//
//  Created by Michael on 12/18/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "PXTBaseResponse.h"
#import "PXTInteractionBeaconRegionResult.h"

@interface PXTInteractionBeaconRegionResponse : PXTBaseResponse

@property (nonatomic, strong) PXTInteractionBeaconRegionResult *result;

@end
