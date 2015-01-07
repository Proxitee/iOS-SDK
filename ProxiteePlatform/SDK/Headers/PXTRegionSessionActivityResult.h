//
//  PXTRegionSessionActivityResult.h
//  ProxiteePlatform
//
//  Created by Michael on 6/23/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

#import "JSONModel.h"
#import "PXTPlatformRegionSessionActionDTO.h"
#import "PXTBeaconDTO.h"
#import "PXTGeoFenceDTO.h"

@interface PXTRegionSessionActivityResult : JSONModel

@property (strong, nonatomic) NSArray<PXTPlatformRegionSessionActionDTO, Optional> *actions;
@property (strong, nonatomic) NSArray<PXTBeaconDTO, Optional> *beacons;
@property (strong, nonatomic) NSArray<PXTGeoFenceDTO, Optional> *geofences;

@end
