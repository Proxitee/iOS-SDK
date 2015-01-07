//
//  PXTInteractionBeaconRequest.h
//  ProxiteePlatform
//
//  Created by Michael on 12/18/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "PXTInteractionRequest.h"
#import "PXTInteractionBeaconDTO.h"

@interface PXTInteractionBeaconRequest : PXTInteractionRequest

@property (nonatomic, strong) NSArray<PXTInteractionBeaconDTO> *beacons;

@end
