//
//  PXTInteractionGeoFenceResult.h
//  ProxiteePlatform
//
//  Created by Michael on 12/18/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "JSONModel.h"
#import "PXTInteractionResult.h"
#import "PXTGeoFenceDTO.h"

@interface PXTInteractionGeoFenceResult : PXTInteractionResult

@property (strong, nonatomic) PXTGeoFenceDTO *geofence;

@end
