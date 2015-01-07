//
//  PXTGeoCoordsDTO.h
//  ProxiteePlatform
//
//  Created by Michael on 12/18/14.
//  Copyright (c) 2014 com.proxitee.sdk. All rights reserved.
//

#import "JSONModel.h"

@protocol PXTGeoCoordsDTO

@end

@interface PXTGeoCoordsDTO : JSONModel

@property (assign, nonatomic) double longitude;
@property (assign, nonatomic) double latitude;

@end
