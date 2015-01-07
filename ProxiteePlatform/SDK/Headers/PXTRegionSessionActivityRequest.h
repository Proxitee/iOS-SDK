//
//  PXTRegionSessionActivityRequest.h
//  ProxiteePlatform
//
//  Created by Michael on 6/23/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import "PXTBaseRequest.h"
#import "PXTPlatformBeaconActivityDTO.h"
#import "PXTPlatformGeoFenceActivityDTO.h"

@interface PXTRegionSessionActivityRequest : PXTBaseRequest

@property (strong, nonatomic) NSArray<PXTPlatformGeoFenceActivityDTO> *activities;

@end