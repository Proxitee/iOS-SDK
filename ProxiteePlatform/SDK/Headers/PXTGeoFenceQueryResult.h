//
//  PXTGeoFenceQueryResult.h
//  ProxiteePlatform
//
//  Created by Michael on 10/22/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "JSONModel.h"
#import "PXTGeoFenceRegionDTO.h"
#import "PXTGeoFenceDTO.h"

@interface PXTGeoFenceQueryResult : JSONModel

@property (strong, nonatomic) PXTGeoFenceRegionDTO *region;
@property (strong, nonatomic) NSArray<PXTGeoFenceDTO, Optional> *geofences;

@end
