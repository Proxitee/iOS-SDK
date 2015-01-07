//
//  PXTProxitee.h
//  ProxiteePlatform
//
//  Created by Michael on 10/28/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PXTPlatformConfiguration.h"
#import "PXTPlatformBeaconManager.h"
#import "PXTPlatformGeoFenceManager.h"
#import "PXTPlatformInteractionManager.h"
#import "PXTPlatformActionsManager.h"
#import "PXTPlatformNotificationCenter.h"


/** Main API class all access to proxitee objects are through this facade class
 
 Before using it must be setup:
 
    [PXTProxitee setup];
 
 OR
 
    [PXTProxitee setupWithConfig:config];
 
 This would typically be performed in the AppDelegate
 
 All access then takes place through the shared method
*/
@interface PXTProxitee : NSObject

#pragma mark - class methods

/** used to access the singleton instance
 @return The singleton instance for PXTProxitee
*/
+ (PXTProxitee *)shared;

/** Configures the api using the settings from PXTProxitee.plist
 @return The singleton instance for PXTProxitee
*/
+ (PXTProxitee *)setup;

/** Configures the api using the settings from a passed in PXTPlatformConfiguration object
 @return The singleton instance for PXTProxitee
 */
+ (PXTProxitee *)setupWithConfig:(PXTPlatformConfiguration *)config;

#pragma mark - instance properties

/** Provides an singleton instance of PXTPlatformBeaconManager to perform beacon tasks
*/
@property (readonly, nonatomic, strong) PXTPlatformBeaconManager *beacons;

/** Provides an singleton instance of PXTPlatformGeoFenceManager to perform geofence tasks
*/
@property (readonly, nonatomic, strong) PXTPlatformGeoFenceManager *geofences;

/** Provides an singleton instance of PXTPlatformActionsManager to perform action tasks
*/
@property (readonly, nonatomic, strong) PXTPlatformActionsManager *actions;

/** Provides an singleton instance of PXTPlatformNotificationCenter to perform notification tasks
*/
@property (readonly, nonatomic, strong) PXTPlatformNotificationCenter *notifications;

@end
