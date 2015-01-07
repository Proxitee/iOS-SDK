//
//  PXTPlatformError.h
//  ProxiteePlatform
//
//  Created by Michael on 7/10/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString *const PXTPlatformErrorDomain;

enum {
    PXTNoStartRegionSessionResponse = 1000,
    PXTNoGeoFenceQueryResponse = 1001
};