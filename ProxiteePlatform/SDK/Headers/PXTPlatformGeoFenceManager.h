//
//  PXTPlatformGeoFenceManager.h
//  ProxiteePlatform
//
//  Created by Michael on 10/22/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "PXTPlatformConfiguration.h"
#import "PXTPlatformNotificationCenter.h"
#import "PXTApiRequester.h"
#import "PXTGeoFenceQueryRequest.h"
#import "PXTGeoFenceQueryResponse.h"
#import "PXTPlatformError.h"
#import "PXTGeoFenceRegionDTO.h"
#import "PXTPlatformGeoFenceActivityDTO.h"
#import "PXTInteractionGeoFenceRequest.h"
#import "PXTPlatformInteractionManager.h"

/** Exposes geofence tasks
*/
@interface PXTPlatformGeoFenceManager : NSObject<CLLocationManagerDelegate>

+ (PXTPlatformGeoFenceManager *)setupWithConfig:(PXTPlatformConfiguration *)config;
+ (PXTPlatformGeoFenceManager *)sharedManager;

-(instancetype) __unavailable init;

-(instancetype)initWithConfig:(PXTPlatformConfiguration *)config;

/** Starts monitoring for geofences that are configured in the cloud CMS for the provided geofence region
 
 Your app should determine which region the user should be monitoring for based off some rules such as were they are currently located, you can monitor for more than one region however please be aware of the warning below.
 
 @param regionKey The geofence region that should be used to retrieve the geofences to monitor for, this is configured as the region key in the cloud CMS
 @warning *Warning:* iOS has a limit on the amount of geofences that can be monitored for
*/
-(void)startForRegion:(NSString *)regionKey;

/** Stops monitoring for geofences that are configured in the cloud CMS for the provided geofence region
 @param regionKey The geofence region that should be used to retrieve geofences that should no longer be monitored for
*/
-(void)stopForRegion:(NSString *)regionKey;

/** Stops monitoring for all currently monitored geofences
*/
-(void)stopAll;

@end
