//
//  PXTBeaconDefinitions.h
//  ProxiteeCore
//
//  Created by Michael on 6/19/14.
//  Copyright (c) 2014 Proxitee. All rights reserved.
//

typedef enum : int
{
    PXTProximityUnknown,
    PXTProximityImmediate,
	PXTProximityNear,
	PXTProximityFar
} PXTProximity;

typedef enum {
    PXTAuthorizationStatusNotDetermined = 0,
    PXTAuthorizationStatusRestricted,
    PXTAuthorizationStatusDenied,
    PXTAuthorizationStatusAuthorized
} PXTAuthorizationStatus;

@interface PXTBeaconDefinitions : NSObject

@end