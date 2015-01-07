//
//  PXTInterationRequest.h
//  ProxiteePlatform
//
//  Created by Michael on 12/18/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "PXTBaseRequest.h"
#import "PXTDeviceTypeDTO.h"
#import "PXTGeoCoordsDTO.h"

@interface PXTInteractionRequest : PXTBaseRequest

@property (nonatomic, strong) NSDate *at;
@property (nonatomic, strong) PXTDeviceTypeDTO<Optional> *deviceType;
@property (nonatomic, strong) PXTGeoCoordsDTO<Optional> *geo;

@end
