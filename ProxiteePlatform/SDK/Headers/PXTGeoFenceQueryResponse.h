//
//  PXTGeoFenceQueryResponse.h
//  ProxiteePlatform
//
//  Created by Michael on 10/22/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "PXTBaseResponse.h"
#import "PXTGeoFenceQueryResult.h"

@interface PXTGeoFenceQueryResponse : PXTBaseResponse

@property (strong, nonatomic) PXTGeoFenceQueryResult *result;

@end
