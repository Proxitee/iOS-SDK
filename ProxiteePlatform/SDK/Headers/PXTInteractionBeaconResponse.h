//
//  PXTInteractionBeaconResponse.h
//  ProxiteePlatform
//
//  Created by Michael on 12/18/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "PXTBaseResponse.h"
#import "PXTInteractionBeaconResult.h"

@interface PXTInteractionBeaconResponse : PXTBaseResponse

@property (nonatomic, strong) PXTInteractionBeaconResult *result;

@end
