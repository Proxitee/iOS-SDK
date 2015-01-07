//
//  PXTRegionSessionBeaconActivityRequest.h
//  ProxiteePlatform
//
//  Created by Michael on 10/27/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "PXTBaseRequest.h"
#import "PXTPlatformBeaconActivityDTO.h"

@interface PXTRegionSessionBeaconActivityRequest : PXTBaseRequest

@property (strong, nonatomic) NSArray<PXTPlatformBeaconActivityDTO> *activities;

@end
