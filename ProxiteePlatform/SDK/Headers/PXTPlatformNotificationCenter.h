//
//  PXTPlatformNotificationCenter.h
//  ProxiteePlatform
//
//  Created by Michael on 10/28/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - geofence notifications

extern NSString *const kPXTGeoFenceManagerDidFailWithErrorNotification;
extern NSString *const kPXTGeoFenceManagerDidStartMonitoringNotification;
extern NSString *const kPXTGeoFenceManagerDidEnterGeoFenceNotification;
extern NSString *const kPXTGeoFenceManagerDidExitGeoFenceNotification;

#pragma mark - beacon notifications

extern NSString *const kPXTBeaconManagerDidFailWithErrorNotification;
extern NSString *const kPXTBeaconManagerDidDiscoverApplicationUnauthorizedNotification;
extern NSString *const kPXTBeaconManagerDidReceiveBeaconsNotification;
extern NSString *const kPXTBeaconManagerDidEnterBeaconRegionNotification;
extern NSString *const kPXTBeaconManagerDidExitBeaconRegionNotification;

#pragma mark - interaction notifications

extern NSString *const kPXTInteractionManagerDidFailWithErrorNotification;
extern NSString *const kPXTInteractionManagerDidReceiveInteractionNotification;

#pragma mark - actions notifications

extern NSString *const kPXTActionsManagerDidExecuteActionNotification;

/** Exposes notifications that can be consumed by the app
 
 This object should be cleaned up properly by removing any observers that have been added when no longer needed
 
 Geofence notifications:
 
 -kPXTGeoFenceManagerDidFailWithErrorNotification
 -kPXTGeoFenceManagerDidEnterGeoFenceNotification
 -kPXTGeoFenceManagerDidExitGeoFenceNotification
 -kPXTGeoFenceManagerDidStartMonitoringNotification
 
 Beacon notifications:
 
 -kPXTBeaconManagerDidFailWithErrorNotification
 -kPXTBeaconManagerDidDiscoverApplicationUnauthorizedNotification
 -kPXTBeaconManagerDidReceiveBeaconsNotification
 -kPXTBeaconManagerDidEnterBeaconRegionNotification
 -kPXTBeaconManagerDidExitBeaconRegionNotification
 
 Interaction notifications:
 
 -kPXTInteractionManagerDidFailWithErrorNotification
 -kPXTInteractionManagerDidReceiveInteractionNotification
 
 Action notifications:
 
 -kPXTActionsManagerDidExecuteActionNotification
 
*/
@interface PXTPlatformNotificationCenter : NSNotificationCenter

@end
