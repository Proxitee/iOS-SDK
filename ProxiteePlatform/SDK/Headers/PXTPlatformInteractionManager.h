//
//  PXTPlatformInteractionManager.h
//  ProxiteePlatform
//
//  Created by Michael on 12/18/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PXTPlatformConfiguration.h"
#import "PXTPlatformNotificationCenter.h"
#import "PXTInteractionResult.h"
#import "PXTInteractionBeaconRegionRequest.h"
#import "PXTInteractionBeaconRequest.h"
#import "PXTInteractionGeoFenceRequest.h"
#import "PXTInteractionBeaconRegionResult.h"
#import "PXTInteractionBeaconResult.h"
#import "PXTInteractionGeoFenceResult.h"
#import "PXTInteractionBeaconResponse.h"
#import "PXTInteractionBeaconRegionResponse.h"
#import "PXTInteractionGeoFenceResponse.h"
#import "PXTApiRequester.h"
#import "PXTDeviceDetails.h"

@interface PXTPlatformInteractionManager : NSObject

+ (PXTPlatformInteractionManager *)setupWithConfig:(PXTPlatformConfiguration *)config;
+ (PXTPlatformInteractionManager *)sharedManager;

-(void)beaconRegion:(PXTInteractionBeaconRegionRequest *)request activityResult:(void(^)(PXTInteractionBeaconRegionResult *result))continuation;
-(void)beacon:(PXTInteractionBeaconRequest *)request activityResult:(void(^)(PXTInteractionBeaconResult *result))continuation;
-(void)geofence:(PXTInteractionGeoFenceRequest *)request activityResult:(void(^)(PXTInteractionGeoFenceResult *result))continuation;

@end
